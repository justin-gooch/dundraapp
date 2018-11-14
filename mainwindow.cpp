#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newCharacter = new Character();



    connect(ui->d4Button, SIGNAL(clicked(bool)), this, SLOT(onD4Clicked()));
    connect(ui->d6Button, SIGNAL(clicked(bool)), this, SLOT(onD6Clicked()));
    connect(ui->d8Button, SIGNAL(clicked(bool)), this, SLOT(onD8Clicked()));
    connect(ui->d10Button, SIGNAL(clicked(bool)), this, SLOT(onD10Clicked()));
    connect(ui->d12Button, SIGNAL(clicked(bool)), this, SLOT(onD12Clicked()));
    connect(ui->d20Button, SIGNAL(clicked(bool)), this, SLOT(onD20Clicked()));
    connect(ui->d100Button, SIGNAL(clicked(bool)), this, SLOT(onD100Clicked()));
    connect(ui->saveCharacterButton, SIGNAL(clicked(bool)), this, SLOT(onSaveCharacterSelected()));
    connect(ui->clearInformationButton, SIGNAL(clicked(bool)), this, SLOT(onClearButtonSelected()));
    connect(ui->loadCharacterButton, SIGNAL(clicked(bool)), this, SLOT(onLoadCharacterSelected()));
    connect(ui->inventoryAddItem, SIGNAL(clicked(bool)), this, SLOT(addItemToInventory()));
    connect(ui->saveAbilityScores, SIGNAL(clicked(bool)), this, SLOT(saveAbilityScores()));
    connect(ui->deleteInventoryItem, SIGNAL(clicked(bool)), this, SLOT(deleteInventoryItem()));
    connect(ui->saveCombatOption, SIGNAL(clicked(bool)), this, SLOT(saveCombatOption()));
    connect(ui->deleteCombatOption, SIGNAL(clicked(bool)), this, SLOT(deleteCombatOption()));
    connect(ui->saveSavingThrows, SIGNAL(clicked(bool)), this, SLOT(saveSavingThrows()));
    connect(ui->saveConditionalModifier, SIGNAL(clicked(bool)), this, SLOT(saveConditionalModifier()));
    connect(ui->deleteConditionalModifier, SIGNAL(clicked(bool)), this, SLOT(deleteConditionalModifier()));
    connect(ui->saveRacialTraitClassFeature, SIGNAL(clicked(bool)), this, SLOT(saveRacialClassFeature()));
    connect(ui->deleteRacialTraitClassFeature, SIGNAL(clicked(bool)), this, SLOT(deleteRacialClassFeature()));
    connect(ui->saveFeats, SIGNAL(clicked(bool)), this, SLOT(saveFeat()));
    connect(ui->deleteFeat, SIGNAL(clicked(bool)), this, SLOT(deleteFeat()));
    connect(ui->saveLanguage, SIGNAL(clicked(bool)), this, SLOT(saveLanguage()));
    connect(ui->deleteLanguage, SIGNAL(clicked(bool)), this, SLOT(deleteLanguage()));


}
int randomNumber(int diceSize)
{
    return rand() %diceSize;
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onD4Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(4)+1);
}

void MainWindow::onD6Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(6)+1);
}

void MainWindow::onD8Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(8)+1);
}

void MainWindow::onD10Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(10));
}

void MainWindow::onD12Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(12)+1);
}

void MainWindow::onD20Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(20)+1);
}

void MainWindow::onD100Clicked()
{
    ui->previousRollLabel->setText(ui->currentRollLabel->text());
    ui->currentRollLabel->setNum(randomNumber(10)*10);

}

void MainWindow::onNewCharacterSelected()
{

}


void MainWindow::onSaveCharacterSelected()
{
    newCharacter->setCharacterName(ui->characterNameLineEdit->text());
    newCharacter->setPlayerName(ui->playerNameLineEdit->text());
    newCharacter->setCharacterAlignment(ui->alignmentLineEdit->text());
    newCharacter->setCharacterClass(ui->classLineEdit->text());
    newCharacter->setCharacterGender(ui->genderLineEdit->text());
    newCharacter->setCharacterHeight(ui->heightLineEdit->text());
    newCharacter->setCharacterLooks(ui->looksLineEdit->text());
    newCharacter->setCharacterRace(ui->raceLineEdit->text());
    newCharacter->setCharacterReligion(ui->religionLineEdit->text());
    newCharacter->setCharacterSize(ui->sizeLineEdit->text());
    newCharacter->setCharacterWeight(ui->weightLineEdit->text());
    newCharacter->setBaseAttackBonus(ui->baseAttackLineEdit->text());
    newCharacter->setHitPoints(ui->hitPointsLineEdit->text());
    newCharacter->setSpeed(ui->speedLineEdit->text());
    newCharacter->setInitiativeModifier(ui->initiativeModifierLineEdit->text());
    newCharacter->setXp(ui->xpLineEdit->text());



}
void MainWindow::onClearButtonSelected()
{
    ui->characterNameLineEdit->clear();
    ui->playerNameLineEdit->clear();
    ui->alignmentLineEdit->clear();
    ui->classLineEdit->clear();
    ui->genderLineEdit->clear();
    ui->heightLineEdit->clear();
    ui->looksLineEdit->clear();
    ui->raceLineEdit->clear();
    ui->religionLineEdit->clear();
    ui->sizeLineEdit->clear();
    ui->weightLineEdit->clear();
    ui->baseAttackLineEdit->clear();
    ui->hitPointsLineEdit->clear();
    ui->speedLineEdit->clear();
    ui->initiativeModifierLineEdit->clear();
    ui->xpLineEdit->clear();

}

void MainWindow::onLoadCharacterSelected()
{
    ui->characterNameLineEdit->setText(newCharacter->getCharacterName());
    ui->playerNameLineEdit->setText(newCharacter->getPlayerName());
    ui->alignmentLineEdit->setText(newCharacter->getCharacterAlignment());
    ui->classLineEdit->setText(newCharacter->getCharacterClass());
    ui->genderLineEdit->setText(newCharacter->getCharacterGender());
    ui->heightLineEdit->setText(newCharacter->getCharacterHeight());
    ui->looksLineEdit->setText(newCharacter->getCharacterLooks());
    ui->raceLineEdit->setText(newCharacter->getCharacterRace());
    ui->religionLineEdit->setText(newCharacter->getCharacterReligion());
    ui->sizeLineEdit->setText(newCharacter->getCharacterSize());
    ui->weightLineEdit->setText(newCharacter->getCharacterWeight());
    ui->baseAttackLineEdit->setText(newCharacter->getBaseAttackBonus());
    ui->hitPointsLineEdit->setText(newCharacter->getHitPoints());
    ui->speedLineEdit->setText(newCharacter->getSpeed());
    ui->initiativeModifierLineEdit->setText(newCharacter->getInitiativeModifier());
    ui->xpLineEdit->setText(newCharacter->getXp());
}
void MainWindow::addItemToInventory()
{
    inventory newInventoryItem = {ui->inventoryItem->text(), ui->inventoryLocation->text(), ui->inventoryWeight->text()};
    newCharacter->addInventoryItem(newInventoryItem);
    ui->inventoryTreeWidget->clear();
    QList<inventory> playerInventory = newCharacter->getInventoryList();

    foreach(inventory inventoryItem, playerInventory)
    {
        QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->inventoryTreeWidget);
        treeItem->setText(0, inventoryItem.item);
        treeItem->setText(1, inventoryItem.location);
        treeItem->setText(2, inventoryItem.weight);
    }

}
void MainWindow::deleteInventoryItem()
{

    for(int i=0; i< ui->inventoryTreeWidget->topLevelItemCount(); i++)
    {

        QTreeWidgetItem *item = ui->inventoryTreeWidget->topLevelItem(i);
        if (item->isSelected())
        {
            delete item;
            newCharacter->deleteInventoryItemByIndex(i);
        }

    }

}
void MainWindow::saveCombatOption()
{
    combatOption newCombatOption = {ui->combatOptionWeaponInput->text(), ui->combatOptionAttackBonusInput->text(), ui->combatOptionDamageInput->text(), ui->combatOptionCriticalInput->text(), ui->combatOptionRangeIncrementInput->text(),ui->combatOptionTypeInput->text(), ui->combatOptionNotesAmmoInput->text()};
    newCharacter->addCombatOption(newCombatOption);
    ui->combatOptionTreeView->clear();
    QList<combatOption> combatOptions = newCharacter->getCombatOptions();

    foreach(combatOption combatO, combatOptions)
    {
        QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->combatOptionTreeView);
        treeItem->setText(0, combatO.weapon);
        treeItem->setText(1, combatO.attackBonus);
        treeItem->setText(2, combatO.damage);
        treeItem->setText(3, combatO.critical);
        treeItem->setText(4, combatO.rangeIncrement);
        treeItem->setText(5, combatO.type);
        treeItem->setText(6, combatO.notesAmmo);
    }
}

void MainWindow::deleteCombatOption()
{
    for(int i=0; i < ui->combatOptionTreeView->topLevelItemCount(); i++)
    {
        QTreeWidgetItem *item = ui->combatOptionTreeView->topLevelItem(i);
        if(item->isSelected())
        {
            delete item;
            newCharacter->deleteCombatOptionsByIndex(i);
        }
    }
}

void MainWindow::saveSavingThrows()
{
    newCharacter->setFortitudeAbilityModifier(ui->fortitudeAbilityModifier->text());
    newCharacter->setFortitudeBaseSave(ui->fortitudeBaseSave->text());
    newCharacter->setFortitudeMagicModifier(ui->fortitudeMagicModifier->text());
    newCharacter->setFortitudeMiscModifier(ui->fortitudeMiscModifier->text());
    newCharacter->setFortitudeTempModifier(ui->fortitudeTempModifier->text());
    newCharacter->setFortitudeTotal(ui->fortitudeTotal->text());

    newCharacter->setReflexAbilityModifier(ui->reflexAbilityModifier->text());
    newCharacter->setReflexBaseSave(ui->reflexBaseSave->text());
    newCharacter->setReflexMagicModifier(ui->reflexMagicModifier->text());
    newCharacter->setReflexMiscModifier(ui->reflexMiscModifier->text());
    newCharacter->setReflexTempModifier(ui->reflexTempModifier->text());
    newCharacter->setReflexTotal(ui->reflexTotal->text());

    newCharacter->setWillAbilityModifier(ui->willAbilityModifier->text());
    newCharacter->setWillBaseSave(ui->willBaseSave->text());
    newCharacter->setWillMagicModifier(ui->willMagicModifier->text());
    newCharacter->setWillMiscModifier(ui->willMiscmodifier->text());
    newCharacter->setWillTempModifier(ui->willTempModifier->text());
    newCharacter->setWillTotal(ui->willTotal->text());

}

void MainWindow::saveConditionalModifier()
{
    QString conditionalModifier = ui->conditionalModifierLineEdit->text();
    newCharacter->addConditionalModifier(conditionalModifier);
    ui->conditionalModifierTree->clear();
    QList<QString> conditionalModifiers = newCharacter->getConditionalModifier();
    foreach(QString conditionalModifier, conditionalModifiers)
    {
        QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->conditionalModifierTree);
        treeItem->setText(0, conditionalModifier);
    }
}

void MainWindow::deleteConditionalModifier()
{
    for(int i=0; i< ui->conditionalModifierTree->topLevelItemCount(); i++)
    {
        QTreeWidgetItem *item = ui->conditionalModifierTree->topLevelItem(i);
        if(item->isSelected())
        {
            delete item;
            newCharacter->deleteConditionalModifierItembyIndex(i);
        }
    }
}


void MainWindow::saveAbilityScores()
{
    newCharacter->setCharismaEnhancementBonus(ui->charismaEnhancementBonus->text());
    newCharacter->setCharismaMiscBonus(ui->charismaMiscBonus->text());
    newCharacter->setCharismaMiscPenalties(ui->charismaMiscPenalties->text());
    newCharacter->setCharismaModifier(ui->charismaModifier->text());
    newCharacter->setCharismaScorePlusAbilityMod(ui->charismaBasePlusAbilityMod->text());
    newCharacter->setCharismaTotal(ui->charismaTotal->text());

    newCharacter->setStrengthEnhancementBonus(ui->strengthEnhancementBonus->text());
    newCharacter->setStrengthMiscBonus(ui->strengthMiscBonus->text());
    newCharacter->setStrengthMiscPenalties(ui->strengthMiscPenalties->text());
    newCharacter->setStrengthModifier(ui->strengthModifier->text());
    newCharacter->setStrengthScorePlusAbilityMod(ui->strengthBasePlusAbility->text());
    newCharacter->setStrengthTotal(ui->strengthTotal->text());

    newCharacter->setDexterityEnhancementBonus(ui->dexterityEnhancementBonus->text());
    newCharacter->setDexterityMiscBonus(ui->dexterityMiscBonus->text());
    newCharacter->setDexterityMiscPenalties(ui->dexterityMiscPenalties->text());
    newCharacter->setDexterityModifier(ui->dexterityModifier->text());
    newCharacter->setDexterityScorePlusAbilityMod(ui->dexterityBasePlusAbilityModifier->text());
    newCharacter->setDexterityTotal(ui->dexterityTotal->text());

    newCharacter->setConstitutionEnhancementBonus(ui->constitutionEnhancementBonus->text());
    newCharacter->setConstitutionMiscBonus(ui->constitutionMiscBonus->text());
    newCharacter->setConstitutionMiscPenalties(ui->constitutionMiscPenalties->text());
    newCharacter->setConstitutionModifier(ui->constitutionModifier->text());
    newCharacter->setConstitutionScorePlusAbilityMod(ui->constitutionBasePlusAbilityModifier->text());
    newCharacter->setConstitutionTotal(ui->constitutionTotal->text());

    newCharacter->setIntelligenceEnhancementBonus(ui->intelligenceEnhancementBonus->text());
    newCharacter->setIntelligenceMiscBonus(ui->intelligenceMiscBonus->text());
    newCharacter->setIntelligenceMiscPenalties(ui->intelligenceMiscPenalties->text());
    newCharacter->setIntelligenceModifier(ui->intelligenceModifier->text());
    newCharacter->setIntelligenceScorePlusAbilityMod(ui->intelligenceBasePlusAbilityModifier->text());
    newCharacter->setIntelligenceTotal(ui->intelligenceTotal->text());

    newCharacter->setWisdomEnhancementBonus(ui->wisdomEnhancementBonus->text());
    newCharacter->setWisdomMiscBonus(ui->wisdomMiscBonus->text());
    newCharacter->setWisdomMiscPenalties(ui->wisdomMiscPenalties->text());
    newCharacter->setWisdomModifier(ui->wisdomModifier->text());
    newCharacter->setWisdomScorePlusAbilityMod(ui->wisdomBasePlusAbilityModifier->text());
    newCharacter->setWisdomTotal(ui->wisdomTotal->text());

}


void MainWindow::saveFeat()
{

    QString feat = ui->featsLineEdit->text();
    newCharacter->addFeatItem(feat);
    ui->featsTree->clear();

    QList<QString> feats = newCharacter->getFeatList();
    foreach(QString feat, feats)
    {
        QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->featsTree);
        treeItem->setText(0, feat);
    }

}
void MainWindow::deleteFeat()
{
    for(int i=0; i< ui->featsTree->topLevelItemCount(); i++)
    {
        QTreeWidgetItem *item = ui->featsTree->topLevelItem(i);
        if(item->isSelected())
        {
            delete item;
            newCharacter->deleteFeatItemByIndex(i);
        }
    }

}
void MainWindow::saveLanguage()
{
    QString language = ui->languageLineEdit->text();
    newCharacter->addLanguageItem(language);
    ui->languageTree->clear();

    QList<QString> languages = newCharacter->getLanguageList();
    foreach(QString language, languages)
    {
        QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->languageTree);
        treeItem->setText(0, language);
    }

}
void MainWindow::deleteLanguage()
{
    for(int i=0; i< ui->languageTree->topLevelItemCount(); i++)
    {
        QTreeWidgetItem *item = ui->languageTree->topLevelItem(i);
        if(item->isSelected())
        {
            delete item;
            newCharacter->deleteLanguageItemByIndex(i);
        }
    }
}
void MainWindow::saveRacialClassFeature()
{
    QString racialClassFeature = ui->racialTraitClassFeatureLineEdit->text();
    newCharacter->addRacialClassFeatureItem(racialClassFeature);
    ui->racialTraitClassFeatureTree->clear();

    QList<QString> racialClassFeatures = newCharacter->getRacialClassFeatureList();
    foreach(QString racialFeature, racialClassFeatures)
    {
        QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->racialTraitClassFeatureTree);
        treeItem->setText(0, racialFeature);
    }
}
void MainWindow::deleteRacialClassFeature()
{
    for(int i=0; i< ui->racialTraitClassFeatureTree->topLevelItemCount(); i++)
    {
        QTreeWidgetItem *item = ui->racialTraitClassFeatureTree->topLevelItem(i);
        if(item->isSelected())
        {
            delete item;
            newCharacter->deleteRacialClassFeatureItemByIndex(i);
        }
    }

}
