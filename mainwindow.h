#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "character.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onD4Clicked();
    void onD6Clicked();
    void onD8Clicked();
    void onD10Clicked();
    void onD12Clicked();
    void onD20Clicked();
    void onD100Clicked();
    void onNewCharacterSelected();
    void onLoadCharacterSelected();
    void onSaveCharacterSelected();
    void onAboutSelected();


private:
    Ui::MainWindow *ui;
    Character* newCharacter;
};

#endif // MAINWINDOW_H
