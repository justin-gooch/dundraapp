#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QFile>
#include <QFileDialog>
#include "character.h"
#include <sqlite.h>



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
    void onClearButtonSelected();
    void addItemToInventory();
    void saveAbilityScores();
    void deleteInventoryItem();
    void saveCombatOption();
    void deleteCombatOption();
    void saveSavingThrows();
    void saveConditionalModifier();
    void deleteConditionalModifier();
    void saveFeat();
    void deleteFeat();
    void saveLanguage();
    void deleteLanguage();
    void saveRacialClassFeature();
    void deleteRacialClassFeature();
    void saveGrappleModifier();
    void saveArmor();
    void saveFile();
    void loadFile();
    void saveMagicItemsWorn();
    void saveToDB();


private:
    QAction *saveFileSelect;
    Ui::MainWindow *ui;
    Character* newCharacter;
    Sqlite *sqlite;
};


#endif // MAINWINDOW_H
