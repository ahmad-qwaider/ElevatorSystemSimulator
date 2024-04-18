#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "elevator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    elevatorListOfListCheckedButtons.resize(controller.getNumberOfElevators());
    populateElevatorNumbers();
    populateFloorNumbers();

    // Connect signals from each elevator in the elevator system to slots in MainWindow
    for (Elevator* elevator : controller.getElevatorSystem()->getElevators()) {
        connect(elevator, &Elevator::messageToUI, this, &MainWindow::updateConsole);
        connect(elevator, &Elevator::floorChanged, this, &MainWindow::ElevatorNumberChanged);
        connect(elevator, &Elevator::arrived, this, &MainWindow::elevatorArrived);
    }

    int numberOfFloors = controller.getNumberOfFloors() + 1;
    for (int i = 0; i < numberOfFloors; ++i) {
        QString buttonName = QString("pushButton_%1").arg(i);
        QPushButton *button = findChild<QPushButton *>(buttonName);
        if (button) {
            connect(button, &QPushButton::clicked, this, &MainWindow::onAnyElevatorFloorsButtonClicked);
        }
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_WeightTestButton_clicked()
{
        QString text = ui->WeightInput->toPlainText();
        bool isNumber;
        double weight = text.toDouble(&isNumber);


        if (isNumber && weight > 500) {
            QString selectedElevator = ui->ElevatorNumber->currentText();
            double ID = selectedElevator.toInt() - 1;
            controller.handleOverload(ID);
        } else if (isNumber) {
            ui->Console->append("Weight is 500 or less");
        } else {
            ui->Console->append("Weight Input is not a number");
        }
}


void MainWindow::updateConsole(const QString& message) {
    ui->Console->append(message);
}


void MainWindow::populateElevatorNumbers() {
    int numOfElevators = controller.getNumberOfElevators();

    for (int i = 1; i < numOfElevators+1; ++i) {
        ui->ElevatorNumber->addItem(QString::number(i));
    }
}


void MainWindow::populateFloorNumbers() {
    int numOfFloors = controller.getNumberOfFloors();

    for (int i = 0; i < numOfFloors+1; ++i) {
        ui->FloorNumber->addItem(QString::number(i));
    }
}


void MainWindow::on_helpButton_clicked()
{
    QString selectedElevator = ui->ElevatorNumber->currentText();
    double ID = selectedElevator.toInt() - 1;
    controller.handleHelpButtonPressed(ID);
}


void MainWindow::on_respondToHelpButton_clicked()
{
   controller.handleBuildingSafetyResponse();
}


void MainWindow::on_fireButton_clicked()
{
   controller.handleFireAlarm();
}


void MainWindow::on_powerOuttageButton_clicked()
{
   controller.handlePowerOut();
}


void MainWindow::on_doorObstacleButton_clicked()
{
    QString selectedElevator = ui->ElevatorNumber->currentText();
    double ID = selectedElevator.toInt() - 1;
    controller.handleDoorObstacle(ID);
}


void MainWindow::onAnyElevatorFloorsButtonClicked() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());

    if (button) {
        QString selectedElevator = ui->ElevatorNumber->currentText();
        int ID = selectedElevator.toInt() - 1;
        int currentFloor = controller.getCurrentFloor(ID + 1); // the plus due to some error in currentText function in QT

        if (button->text() != QString::number(currentFloor)) {
            bool isNumber;
            int floorNumber = button->text().toInt(&isNumber);

            if (!isNumber) {
                ui->Console->append("Floor number error: not a number");
                return;
            }

            ElevatorState state = controller.getElevatorState(ID + 1);
            if ((currentFloor < floorNumber && state == ElevatorState::MOVING_UP) ||
                (currentFloor > floorNumber && state == ElevatorState::MOVING_DOWN) ||
                state == ElevatorState::IDLE) {

                elevatorListOfListCheckedButtons[ID].push_back(floorNumber);
                button->setStyleSheet("QPushButton { border-radius: 11px; border: 2px solid #0057e7; }");
            }

            controller.moveElevator(ID, floorNumber);
        }
    }
}


// this function called from the floorChange emits from the elevators
void MainWindow::ElevatorNumberChanged(const QString &elevatorId)
{
    changeDisplay(elevatorId);
}



void MainWindow::elevatorArrived(int floor , int elevatorID){
    int selectedElevator = elevatorID -1;
    auto it = std::find( elevatorListOfListCheckedButtons[selectedElevator].begin(),  elevatorListOfListCheckedButtons[selectedElevator].end(), floor);

    if (it !=  elevatorListOfListCheckedButtons[selectedElevator].end()) {
        elevatorListOfListCheckedButtons[selectedElevator].erase(it);
        QString buttonName = QString("pushButton_%1").arg(floor);
        QPushButton *button = MainWindow::findChild<QPushButton *>(buttonName);
        button->setStyleSheet("QPushButton {"
                              "    border-radius: 11px;"
                              "    border: 1px solid black;"
                              "}");
    }
}


// this function called when the elevatorComboBox changes
void MainWindow::on_ElevatorNumber_currentIndexChanged(const QString &elevatorId)
{
    changeDisplay(elevatorId);
    removeButtonsHighlight();
}


void MainWindow::changeDisplay(const QString &elevatorId){
    if(elevatorId == ui->ElevatorNumber->currentText()){

     int selectedElevator = elevatorId.toUInt();
     ElevatorState state = controller.getElevatorState(selectedElevator);
     QString direction = "";
     if(state == ElevatorState::MOVING_UP){
         direction = "↑";
     }
     else if(state == ElevatorState::MOVING_DOWN){
         direction = "↓";
     }
     else{
         direction = "";
     }
     QString newText =  QString::number(controller.getCurrentFloor(selectedElevator)) + direction;
     QString newHtml = QString("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">"
                              "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">"
                              "p, li { white-space: pre-wrap; }"
                              "</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">"
                              "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                              "<span style=\" font-size:18pt; color:#3584e4;\">") + newText + "</span></p></body></html>";

     ui->elevatorFloorView->setHtml(newHtml);
 }
}



void MainWindow::on_ringButton_clicked()
{
    ui->Console->append("Ring Ring");
}


void MainWindow::on_UpButton_clicked()
{
    int floorNumber = ui->FloorNumber->currentIndex();
    if(floorNumber == controller.getNumberOfFloors()){return;}
    ui->Console->append("UP Request at FLoor#" + QString::number(floorNumber));
    controller.addRequest(floorNumber, Direction::UP);
}


void MainWindow::on_DownButton_clicked()
{
    int floorNumber = ui->FloorNumber->currentIndex();
    if(floorNumber == 0){return;}
    ui->Console->append("Down Request at FLoor#" + QString::number(floorNumber));
    controller.addRequest(floorNumber, Direction::DOWN);
}





void MainWindow::removeButtonsHighlight(){

    QString selectedElevator = ui->ElevatorNumber->currentText();
    int ID = selectedElevator.toInt() - 1;
    int numberOfFloors = controller.getNumberOfFloors()+1;

    for (int i = 0; i < numberOfFloors; ++i) {

            QString buttonName = QString("pushButton_%1").arg(i);
            QPushButton *button = MainWindow::findChild<QPushButton *>(buttonName);

            if(button){

            if(contains(elevatorListOfListCheckedButtons[ID], i)){

                button->setStyleSheet("QPushButton {    border-radius: 11px;"
                                      "border: 2px solid #0057e7; }");
                continue;
            }

            button->setStyleSheet("QPushButton {"
                                  "    border-radius: 11px;"
                                  "    border: 1px solid black;"
                                  "}");

        }
    }
}


bool MainWindow::contains(const std::vector<int>& vec, int value) {
    if(vec.empty()){return false;}
    return std::find(vec.begin(), vec.end(), value) != vec.end();
}


void MainWindow::on_closeDoorButton_pressed()
{
  QString selectedElevator = ui->ElevatorNumber->currentText();
  int ID = selectedElevator.toInt() - 1;
  controller.handleCloseDoorButton(ID);
}

void MainWindow::on_openDoorButton_pressed()
{
    QString selectedElevator = ui->ElevatorNumber->currentText();
    int ID = selectedElevator.toInt() - 1;
    controller.handleOpenDoorButton(ID);
}


void MainWindow::on_openDoorButton_released()
{
    QString selectedElevator = ui->ElevatorNumber->currentText();
    int ID = selectedElevator.toInt() - 1;
    controller.handleOpenDoorButtonRelease(ID);
}



