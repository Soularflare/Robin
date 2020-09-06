#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void debug(QString str);

    FILE *fd;

private slots:
    void pushButtonLED3OnClicked();
    void pushButtonLED3OffClicked();
    void pushButtonLED4OnClicked();
    void pushButtonLED4OffClicked();
    void pushButtonLED3ToggleClicked();
    void on_pushButtonLED4Toggle_clicked();
    void pushButtonPotClicked();
    void slineEditPotEditingFinished();


    void on_pushButtonLED4Toggle_2_clicked(bool checked);
    void on_pushButtonLED4Toggle_2_clicked();
    void on_pushButtonLED4Toggle_3_clicked();
    void on_pushButtonLED4Toggle_4_clicked();
    void on_pushButtonLED4Toggle_5_clicked();
};

#endif // MAINWINDOW_H
