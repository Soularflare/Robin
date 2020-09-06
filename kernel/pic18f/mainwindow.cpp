#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "unistd.h"
#include <QMessageBox>
#include "dialog.h"
#include "autodialog.h"
#include "scarecrow.h"
#include "manualdialog.h"

#define PIC18F_DEVICE "/dev/pic18f"


static unsigned char led4OnCommand[3] = {0x32, 0x4, 0x1};
static unsigned char led4OffCommand[3] = {0x32, 0x4, 0x0};
static unsigned char led3OnCommand[3] = {0x32, 0x3, 0x1};
static unsigned char led3OffCommand[3] = {0x32, 0x3, 0x0};
static unsigned char readPot[3] = {0x37, 0, 0};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Pic18f Client Application");

    fd = fopen(PIC18F_DEVICE, "rb + wb");
    if( !fd){
        debug("Unable to open file");
    }
}

MainWindow::~MainWindow()
{
    fclose(fd);
    delete ui;
}

void MainWindow::debug(QString str)
{
    QMessageBox msgBox;
    msgBox.setText(str);
    msgBox.exec();
}

void MainWindow::pushButtonLED3OnClicked()
{
    if(!fd){
        debug("device file is not open");
        return;
    }
    fwrite(led3OnCommand, 1, 3, fd);
    fflush(fd);
}
void MainWindow::pushButtonLED3OffClicked()
{
    if(!fd){
        debug("device file is not open");
        return;
    }
    fwrite((unsigned char*)led3OffCommand, 1, 3, fd);
    fflush(fd);
}
void MainWindow::pushButtonLED4OnClicked()
{
    if(!fd){
        debug("device file is not open");
        return;
    }
    fwrite(led4OnCommand, 1, 3, fd);
    fflush(fd);
}
void MainWindow::pushButtonLED4OffClicked()
{
    if(!fd){
        debug("device file is not open");
        return;
    }
    fwrite(led4OffCommand, 1, 3, fd);
    fflush(fd);
}

void MainWindow::pushButtonLED3ToggleClicked()
{
    int i;
    if(!fd){
        debug("device file is not open");
        return;
    }
    for(i=0; i< 10; i++){
        fwrite(led3OnCommand, 1, 3, fd);
        fflush(fd);
        usleep(10000);
        fwrite(led3OffCommand, 1, 3, fd);
        fflush(fd);
    }
}

void MainWindow::on_pushButtonLED4Toggle_clicked()
{
    int i;
    if(!fd){
        //debug("device file is not open");
        return;
    }
    for(i=0; i< 10; i++){
        fwrite(led4OnCommand, 1, 3, fd);
        fflush(fd);
        usleep(10000);
        fwrite(led4OffCommand, 1, 3, fd);
        fflush(fd);
    }
}

void MainWindow::pushButtonPotClicked()
{
    if(!fd){
        debug("device file is not open");
        return;
    }
    unsigned char buffer[3];
    if(fd){
        fclose(fd);
    }
    fd = fopen(PIC18F_DEVICE, "rb + wb");
    if(!fd){
        debug("device file is not open");
        ui->lineEditPot->setText("");
        return;
    }
    fwrite(readPot, 1, 3, fd);
    fflush(fd);
    fread(buffer, 1, 3, fd);

    int rawval = buffer[1] + (buffer[2] << 8);
    QString str = QString::number(rawval);
    ui->lineEditPot->setText(str);

}

void MainWindow::slineEditPotEditingFinished()
{

}





void MainWindow::on_pushButtonLED4Toggle_2_clicked()
{
   Dialog dialog;
   dialog.setModal(true);
   dialog.exec();
}

void MainWindow::on_pushButtonLED4Toggle_3_clicked()
{
AutoDialog autodialog;
autodialog.setModal(true);
autodialog.exec();
}

void MainWindow::on_pushButtonLED4Toggle_4_clicked()
{
    Scarecrow scarecrow;
    scarecrow.setModal(true);
    scarecrow.exec();
}

void MainWindow::on_pushButtonLED4Toggle_5_clicked()
{
    ManualDialog manualdialog;
    manualdialog.setModal(true);
    manualdialog.exec();
}
