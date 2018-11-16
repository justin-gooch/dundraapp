#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newCharacter = new Character();
    QString path = "C:/Users/jgooch/Documents/db.sql";
    sqlite = new Sqlite(path);






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
    connect(ui->saveGrappleModifier, SIGNAL(clicked(bool)), this, SLOT(saveGrappleModifier()));
    connect(ui->actionexportCharacter, SIGNAL(triggered()), this, SLOT(saveFile()));
    connect(ui->actionloadCharacter, SIGNAL(triggered()), this, SLOT(loadFile()));
    connect(ui->actionSaveToDB, SIGNAL(triggered()), this, SLOT(saveToDB()));
    connect(ui->saveMagicItem, SIGNAL(clicked(bool)), this, SLOT(saveMagicItemsWorn()));


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
    newCharacter->setMoney(ui->moneyLineEdit->text());



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
    ui->moneyLineEdit->clear();

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
    ui->moneyLineEdit->setText(newCharacter->getMoney());
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

void MainWindow::saveGrappleModifier()
{
    newCharacter->setGrappleModifierTotal(ui->grappleModifierTotal->text());
    newCharacter->setGrappleModifierBaseAttackBonus(ui->grappleModifierBaseAttackBonus->text());
    newCharacter->setGrappleModifierStrengthModifier(ui->grappleModifierStrengthModifier->text());
    newCharacter->setGrappleModifierSizeModifier(ui->grappleModifierSizeModifier->text());
    newCharacter->setGrappleModifierMiscModifier(ui->grappleModifierMiscModifier->text());
}

void MainWindow::saveArmor()
{
    newCharacter->setArmorTotal(ui->armorTotal->text());
    newCharacter->setArmorBonus(ui->armorBonus->text());
    newCharacter->setArmorShieldBonus(ui->armorShieldBonus->text());
    newCharacter->setArmorDexModifier(ui->armorDexMod->text());
    newCharacter->setArmorSizeModifier(ui->armorSizeMod->text());
    newCharacter->setArmorNaturalModifier(ui->armorNaturalMod->text());
    newCharacter->setArmorDeflectionModifier(ui->armorDeflectionMod->text());
    newCharacter->setArmorMiscellaneousModifier(ui->armorMiscMod->text());
    newCharacter->setArmorTouchAC(ui->armorTouchAc->text());
    newCharacter->setArmorFlatFootedAC(ui->armorFlatFootedAC->text());
    newCharacter->setArmorWorn(ui->armorWorn->text());
    newCharacter->setArmorMaxDex(ui->armorMaxDex->text());
    newCharacter->setArmorCheckPenalty(ui->armorCheckPenalty->text());
    newCharacter->setArmorWeight(ui->armorWeight->text());
    newCharacter->setArmorShieldCarried(ui->armorShieldCarried->text());
    newCharacter->setArmorShieldMaxDex(ui->armorShieldMaxDex->text());
    newCharacter->setArmorShieldCheckPenalty(ui->armorShieldCheckPenalty->text());
    newCharacter->setArmorShieldWeight(ui->armorShieldWeight->text());
}

void MainWindow::saveFile()
{
    QString fileName = QFileDialog::getSaveFileName();
    QFile jsonFile(fileName);
    jsonFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QJsonObject playerCharacter;
    playerCharacter.insert("CharacterName", newCharacter->getCharacterName());
    playerCharacter.insert("playerName" , newCharacter->getPlayerName());
    playerCharacter.insert("characterClass" , newCharacter->getCharacterClass());
    playerCharacter.insert("characterRace" , newCharacter->getCharacterRace());
    playerCharacter.insert("characterSize" , newCharacter->getCharacterSize());
    playerCharacter.insert("characterGender" , newCharacter->getCharacterGender());
    playerCharacter.insert("characterAlignment" , newCharacter->getCharacterAlignment());
    playerCharacter.insert("characterReligion" , newCharacter->getCharacterReligion());
    playerCharacter.insert("characterHeight" , newCharacter->getCharacterHeight());
    playerCharacter.insert("characterWeight" , newCharacter->getCharacterWeight());
    playerCharacter.insert("characterLooks" , newCharacter->getCharacterLooks());
    playerCharacter.insert("baseAttackBonus" , newCharacter->getBaseAttackBonus());
    playerCharacter.insert("hitPoints" , newCharacter->getHitPoints());
    playerCharacter.insert("speed" , newCharacter->getSpeed());
    playerCharacter.insert("initiativeModifier" , newCharacter->getInitiativeModifier());
    playerCharacter.insert("xp" , newCharacter->getXp());
    playerCharacter.insert("money" , newCharacter->getMoney());
    playerCharacter.insert("armorTotal" , newCharacter->getArmorTotal());
    playerCharacter.insert("armorBonus" , newCharacter->getArmorBonus());
    playerCharacter.insert("armorShieldBonus" , newCharacter->getArmorShieldBonus());
    playerCharacter.insert("armorDexModifier" , newCharacter->getArmorDexModifier());
    playerCharacter.insert("armorSizeModifier" , newCharacter->getArmorSizeModifier());
    playerCharacter.insert("armorNaturalModifier" , newCharacter->getArmorNaturalModifier());
    playerCharacter.insert("armorDeflectionModifier" , newCharacter->getArmorDeflectionModifier());
    playerCharacter.insert("armorMiscellaneousModifier" , newCharacter->getArmorMiscellaneousModifier());
    playerCharacter.insert("armorTouchAC" , newCharacter->getArmorTouchAC());
    playerCharacter.insert("armorFlatFootedAC" , newCharacter->getArmorFlatFootedAC());
    playerCharacter.insert("armorWorn" , newCharacter->getArmorWorn());
    playerCharacter.insert("armorMaxDex" , newCharacter->getArmorMaxDex());
    playerCharacter.insert("armorCheckPenalty" , newCharacter->getArmorCheckPenalty());
    playerCharacter.insert("armorWeight" , newCharacter->getArmorWeight());
    playerCharacter.insert("armorShieldCarried" , newCharacter->getArmorShieldCarried());
    playerCharacter.insert("armorMaxDex" , newCharacter->getArmorShieldMaxDex());
    playerCharacter.insert("armorShieldCheckPenalty" , newCharacter->getArmorShieldCheckPenalty());
    playerCharacter.insert("armorShieldWeight" , newCharacter->getArmorShieldWeight());
    playerCharacter.insert("grappleModifierTotal" , newCharacter->getGrappleModifierTotal());
    playerCharacter.insert("grappleModifierBaseAttackBonus" , newCharacter->getGrappleModifierBaseAttackBonus());
    playerCharacter.insert("grappleModifierStrengthModifier" , newCharacter->getGrappleModifierStrengthModifier());
    playerCharacter.insert("grappleModifierSizeModifier" , newCharacter->getGrappleModifierSizeModifier());
    playerCharacter.insert("grappleModifierMiscModifier" , newCharacter->getGrappleModifierMiscModifier());
    playerCharacter.insert("getFortitudeTotal" , newCharacter->getFortitudeTotal());
    playerCharacter.insert("getFortitudeBaseSave" , newCharacter->getFortitudeBaseSave());
    playerCharacter.insert("getFortitudeAbilityModifier" , newCharacter->getFortitudeAbilityModifier());
    playerCharacter.insert("getFortitudeMagicModifier" , newCharacter->getFortitudeMagicModifier());
    playerCharacter.insert("getFortitudeMiscModifier" , newCharacter->getFortitudeMiscModifier());
    playerCharacter.insert("getFortitudeTempModifier" , newCharacter->getFortitudeTempModifier());
    playerCharacter.insert("reflexTotal" , newCharacter->getReflexTotal());
    playerCharacter.insert("reflexBaseSave" , newCharacter->getReflexBaseSave());
    playerCharacter.insert("reflexAbilityModifier" , newCharacter->getReflexAbilityModifier());
    playerCharacter.insert("reflexMagicModifier" , newCharacter->getReflexMagicModifier());
    playerCharacter.insert("reflexMiscModifier" , newCharacter->getReflexMiscModifier());
    playerCharacter.insert("reflexTempModifier" , newCharacter->getReflexTempModifier());
    playerCharacter.insert("willTotal" , newCharacter->getWillTotal());
    playerCharacter.insert("willBaseSave" , newCharacter->getWillBaseSave());
    playerCharacter.insert("willAbilityModifier" , newCharacter->getWillAbilityModifier());
    playerCharacter.insert("willMagicModifier" , newCharacter->getWillMagicModifier());
    playerCharacter.insert("willMiscModifier" , newCharacter->getWillMiscModifier());
    playerCharacter.insert("willTempModifier" , newCharacter->getWillTempModifier());
    playerCharacter.insert("strengthTotal" , newCharacter->getStrengthTotal());
    playerCharacter.insert("strengtScorePlusAbilityModifier" , newCharacter->getStrengthScorePlusAbilityMod());
    playerCharacter.insert("strengthEnhancementBonus" , newCharacter->getStrengthEnhancementBonus());
    playerCharacter.insert("strengthMiscBonus", newCharacter->getStrengthMiscBonus());
    playerCharacter.insert("strengtMiscPenaltiesh" , newCharacter->getStrengthMiscPenalties());
    playerCharacter.insert("strengthModifier" , newCharacter->getStrengthModifier());
    playerCharacter.insert("dexterityTotal" , newCharacter->getDexterityTotal());
    playerCharacter.insert("dexterityScorePlusAbilityModifier" , newCharacter->getDexterityScorePlusAbilityMod());
    playerCharacter.insert("dexterityEnhancementBonus" , newCharacter->getDexterityEnhancementBonus());
    playerCharacter.insert("dexterityMiscBonus" , newCharacter->getDexterityMiscBonus());
    playerCharacter.insert("dexterityMiscPenalties" , newCharacter->getDexterityMiscPenalties());
    playerCharacter.insert("dexterityModifier" , newCharacter->getDexterityModifier());
    playerCharacter.insert("constitutionTotal" , newCharacter->getConstitutionTotal());
    playerCharacter.insert("constitutionScorePlusAbilityModifier" , newCharacter->getConstitutionScorePlusAbilityMod());
    playerCharacter.insert("constitutionEnhancementBonus" , newCharacter->getConstitutionEnhancementBonus());
    playerCharacter.insert("constitutionMiscBonus" , newCharacter->getConstitutionMiscBonus());
    playerCharacter.insert("constitutionMiscPenalties" , newCharacter->getConstitutionMiscPenalties());
    playerCharacter.insert("constitutionModifier" , newCharacter->getConstitutionModifier());
    playerCharacter.insert("intelligenceTotal" , newCharacter->getIntelligenceTotal());
    playerCharacter.insert("intelligenceScorePlusAbilityModifier" , newCharacter->getIntelligenceScorePlusAbilityMod());
    playerCharacter.insert("intelligenceEnhancementBonus" , newCharacter->getIntelligenceEnhancementBonus());
    playerCharacter.insert("intelligenceMiscBonus" , newCharacter->getIntelligenceMiscBonus());
    playerCharacter.insert("intelligenceMiscPenalties" , newCharacter->getIntelligenceMiscPenalties());
    playerCharacter.insert("intelligenceModifier" , newCharacter->getIntelligenceModifier());
    playerCharacter.insert("wisdomTotal" , newCharacter->getWisdomTotal());
    playerCharacter.insert("wisdomScorePlusAbilityModifier" , newCharacter->getWisdomScorePlusAbilityMod());
    playerCharacter.insert("wisdomEnhancementBonus" , newCharacter->getWisdomEnhancementBonus());
    playerCharacter.insert("wisdomMiscBonus" , newCharacter->getWisdomMiscBonus());
    playerCharacter.insert("wisdomMiscPenalties" , newCharacter->getWisdomMiscPenalties());
    playerCharacter.insert("wisdomModifier" , newCharacter->getWisdomModifier());
    playerCharacter.insert("charismaTotal" , newCharacter->getCharismaTotal());
    playerCharacter.insert("charismaScorePlusAbilityModifier" , newCharacter->getCharismaScorePlusAbilityMod());
    playerCharacter.insert("charismaEnhancementBonus" , newCharacter->getCharismaEnhancementBonus());
    playerCharacter.insert("charismaMiscBonus" , newCharacter->getCharismaMiscBonus());
    playerCharacter.insert("charismaMiscPenalties" , newCharacter->getCharismaMiscPenalties());
    playerCharacter.insert("charismaModifier" , newCharacter->getCharismaModifier());
    playerCharacter.insert("headMagicItem", newCharacter->getHeadMagicItem());
    playerCharacter.insert("eyesMagicItem", newCharacter->getEyesMagicItem());
    playerCharacter.insert("neckMagicItem", newCharacter->getNeckMagicItem());
    playerCharacter.insert("shouldersMagicItem", newCharacter->getShouldersMagicItem());
    playerCharacter.insert("ring1MagicItem", newCharacter->getRing1MagicItem());
    playerCharacter.insert("ring2MagicItem", newCharacter->getRing2MagicItem());
    playerCharacter.insert("handsMagicItem", newCharacter->getHandsMagicItem());
    playerCharacter.insert("armsWristsMagicItem", newCharacter->getArmsWristsMagicItem());
    playerCharacter.insert("bodyMagicItem", newCharacter->getBodyMagicItem());
    playerCharacter.insert("torsoMagicItem", newCharacter->getTorsoMagicItem());
    playerCharacter.insert("waistMagicItem", newCharacter->getWaistMagicItem());
    playerCharacter.insert("feetMagicItem", newCharacter->getFeetMagicItem());
    
    
    QJsonArray inventoryLists;
    QList<inventory> iList = newCharacter->getInventoryList();

    foreach(inventory iListItem, iList)
    {
        QJsonObject inventoryList;
        inventoryList["item"] = iListItem.item;
        inventoryList["location"] = iListItem.location;
        inventoryList["weight"] = iListItem.weight;
        qInfo() << "hello" << endl;
        inventoryLists.append(inventoryList);
    }
    playerCharacter.insert("inventoryList", inventoryLists);

    QJsonArray combatOptions;
    QList<combatOption> cOptions = newCharacter->getCombatOptions();
    foreach(combatOption cOption, cOptions)
    {
        QJsonObject combatOption;
        combatOption["weapon"] = cOption.weapon;
        combatOption["attackBonus"] = cOption.attackBonus;
        combatOption["damage"] = cOption.damage;
        combatOption["critical"] = cOption.critical;
        combatOption["rangeIncrement"] = cOption.rangeIncrement;
        combatOption["type"] = cOption.type;
        combatOption["notesAmmo"] = cOption.notesAmmo;
	combatOptions.append(combatOption);
    }
    playerCharacter.insert("combatOption", combatOptions);

    QJsonArray conditionalModifiers;
    QList<QString> cModifiers = newCharacter->getConditionalModifier();
    foreach(QString cModifier, cModifiers)
    {
    	conditionalModifiers.append(cModifier);
    }
    playerCharacter.insert("conditionalModifiers", conditionalModifiers);


    QJsonArray featItems;
    QList<QString> fItems = newCharacter->getFeatList();
    foreach(QString fItem, fItems)
    {
    	featItems.append(fItem);
    }
    playerCharacter.insert("featItems", featItems);

    QJsonArray languageItems;
    QList<QString> lItems = newCharacter->getLanguageList();
    foreach(QString lItem, lItems)
    {
    	languageItems.append(lItem);
    }
    playerCharacter.insert("languageItems", languageItems);

    QJsonArray racialClassFeatureItems;
    QList<QString> rCFIs = newCharacter->getRacialClassFeatureList();
    foreach(QString rCFI, rCFIs)
    {
    	racialClassFeatureItems.append(rCFI);
    }
    playerCharacter.insert("RacialClassFeatureItems", racialClassFeatureItems);




    QJsonDocument doc(playerCharacter);
    jsonFile.write(doc.toJson());
    jsonFile.close();
}

void MainWindow::loadFile()
{

    QString fileName = QFileDialog::getOpenFileName();
    qInfo() << fileName << endl;
    QFile jsonFile(fileName);
    jsonFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QString values = jsonFile.readAll();
    qInfo() << values << endl;
    jsonFile.close();
    QJsonDocument doc = QJsonDocument::fromJson(values.toUtf8());
    QJsonObject jObj = doc.object();
    foreach(QString key, jObj.keys())
    {
        qInfo() << key << ":" << jObj[key] << endl;

    }
    newCharacter->setCharacterName(jObj["characterName"].toString());
    newCharacter->setArmorBonus(jObj["armorBonus"].toString());
    newCharacter->setArmorCheckPenalty(jObj["armorCheckPenalty"].toString());
    newCharacter->setArmorDeflectionModifier(jObj["armorDeflectionModifier"].toString());
    newCharacter->setArmorDexModifier(jObj["armorDexModifier"].toString());
    newCharacter->setArmorFlatFootedAC(jObj["armorFlatFootedAC"].toString());
    newCharacter->setArmorMaxDex(jObj["armorMaxDex"].toString());
    newCharacter->setArmorMiscellaneousModifier(jObj["armorMiscellaneousModifier"].toString());
    newCharacter->setArmorNaturalModifier(jObj["armorNaturalModifier"].toString());
    newCharacter->setArmorShieldBonus(jObj["armorShieldBonus"].toString());
    newCharacter->setArmorShieldCarried(jObj["armorShieldCarried"].toString());
    newCharacter->setArmorShieldCheckPenalty(jObj["armorShieldCheckPenalty"].toString());
    newCharacter->setArmorShieldWeight(jObj["armorShieldWeight"].toString());
    newCharacter->setArmorSizeModifier(jObj["armorSizeModifier"].toString());
    newCharacter->setArmorTotal(jObj["armorTotal"].toString());
    newCharacter->setArmorTouchAC(jObj["armorTouchAC"].toString());
    newCharacter->setArmorWeight(jObj["armorWeight"].toString());
    newCharacter->setArmorWorn(jObj["armorWorn"].toString());
    newCharacter->setBaseAttackBonus(jObj["baseAttackBonus"].toString());
    newCharacter->setCharacterAlignment(jObj["characterAlignment"].toString());
    newCharacter->setCharacterClass(jObj["characterClass"].toString());


    newCharacter->setCharacterGender(jObj["characterGender"].toString());
    newCharacter->setCharacterHeight(jObj["characterHeight"].toString());
    newCharacter->setCharacterLooks(jObj["characterLooks"].toString());
    newCharacter->setCharacterRace(jObj["characterRace"].toString());
    newCharacter->setCharacterReligion(jObj["characterReligion"].toString());
    newCharacter->setCharacterSize(jObj["characterSize"].toString());
    newCharacter->setCharacterWeight(jObj["characterWeight"].toString());
    newCharacter->setCharismaEnhancementBonus(jObj["charismaEnhancementBonus"].toString());
    newCharacter->setCharismaMiscBonus(jObj["charismaMiscBonus"].toString());
    newCharacter->setCharismaMiscPenalties(jObj["charismaMiscPenalties"].toString());
    newCharacter->setCharismaModifier(jObj["charismaModifier"].toString());
    newCharacter->setCharismaScorePlusAbilityMod(jObj["charismaScorePlusAbilityModifier"].toString());
    newCharacter->setCharismaTotal(jObj["charismaTotal"].toString());
    newCharacter->setConstitutionEnhancementBonus(jObj["constitutionEnhancementBonus"].toString());
    newCharacter->setConstitutionMiscBonus(jObj["constitutionMiscBonusConstitutionMiscBonus"].toString());
    newCharacter->setConstitutionMiscPenalties(jObj["constitutionMiscPenalties"].toString());
    newCharacter->setConstitutionModifier(jObj["constitutionModifier"].toString());
    newCharacter->setConstitutionScorePlusAbilityMod(jObj["constitutionScorePlusAbilityModifier"].toString());
    newCharacter->setConstitutionTotal(jObj["constitutionTotal"].toString());
    newCharacter->setDexterityEnhancementBonus(jObj["dexterityEnhancementBonus"].toString());
    newCharacter->setDexterityMiscBonus(jObj["dexterityMiscBonus"].toString());
    newCharacter->setDexterityMiscPenalties(jObj["dexterityMiscPenalties"].toString());
    newCharacter->setDexterityModifier(jObj["dexterityModifier"].toString());
    newCharacter->setDexterityScorePlusAbilityMod(jObj["dexterityScorePlusAbilityModifier"].toString());
    newCharacter->setDexterityTotal(jObj["dexterityTotal"].toString());
    newCharacter->setFortitudeAbilityModifier(jObj["fortitudeAbilityModifier"].toString());
    newCharacter->setFortitudeBaseSave(jObj["fortitudeBaseSave"].toString());
    newCharacter->setFortitudeMagicModifier(jObj["fortitudeMagicModifier"].toString());
    newCharacter->setFortitudeMiscModifier(jObj["fortitudeMiscModifier"].toString());
    newCharacter->setFortitudeTempModifier(jObj["fortitudeTempModifier"].toString());
    newCharacter->setFortitudeTotal(jObj["fortitudeTotal"].toString());
    newCharacter->setGrappleModifierBaseAttackBonus(jObj["grappleModifierBaseAttackBonus"].toString());
    newCharacter->setGrappleModifierMiscModifier(jObj["grappleModifierMiscModifier"].toString());
    newCharacter->setGrappleModifierSizeModifier(jObj["grappleModifierSizeModifier"].toString());
    newCharacter->setGrappleModifierStrengthModifier(jObj["grappleModifierStrengthModifier"].toString());
    newCharacter->setGrappleModifierTotal(jObj["grappleModifierTotal"].toString());
    newCharacter->setHitPoints(jObj["hitPoints"].toString());
    newCharacter->setInitiativeModifier(jObj["initiativeModifier"].toString());
    newCharacter->setIntelligenceEnhancementBonus(jObj["intelligenceEnhancementBonus"].toString());
    newCharacter->setIntelligenceMiscBonus(jObj["intelligenceMiscBonus"].toString());
    newCharacter->setIntelligenceMiscPenalties(jObj["intelligenceMiscPenalties"].toString());
    newCharacter->setIntelligenceModifier(jObj["intelligenceModifier"].toString());
    newCharacter->setIntelligenceScorePlusAbilityMod(jObj["intelligenceScorePlusAbilityModifier"].toString());
    newCharacter->setIntelligenceTotal(jObj["intelligenceTotal"].toString());
    QJsonArray iListItems = jObj["inventoryList"].toArray();
    for(int i=0; i< iListItems.size(); i++)
    {
        QJsonObject iListItem = iListItems[i].toObject();
        inventory iItem = {iListItem["item"].toString(),
                           iListItem["location"].toString(),
                           iListItem["weight"].toString() };
        newCharacter->addInventoryItem(iItem);
    }

    QJsonArray combatOptions = jObj["combatOption"].toArray();
    for(int i=0; i<combatOptions.size(); i++)
    {
        QJsonObject cOption = combatOptions[i].toObject();
        combatOption cOpt = {cOption["weapon"].toString(),
                             cOption["attackBonus"].toString(),
                             cOption["damage"].toString(),
                             cOption["critical"].toString(),
                             cOption["rangeIncrement"].toString(),
                             cOption["type"].toString(),
                             cOption["notesAmmo"].toString()};
        newCharacter->addCombatOption(cOpt);
    }

    QJsonArray conditionalModifiers = jObj["conditionalModifiers"].toArray();
    for(int i=0; i<conditionalModifiers.size(); i++)
    {
        QString cMod = conditionalModifiers[i].toString();
        newCharacter->addConditionalModifier(cMod);
    }


    QJsonArray featsList = jObj["featItems"].toArray();
    for(int i=0; i<featsList.size(); i++)
    {
        QString fList = featsList[i].toString();
        newCharacter->addFeatItem(fList);
    }

    QJsonArray languageList = jObj["languageItems"].toArray();
    for(int i=0; i<languageList.size(); i++)
    {
        QString lList = languageList[i].toString();
        newCharacter->addLanguageItem(lList);
    }

    QJsonArray racialClassFeaturesList = jObj["RacialClassFeatureItems"].toArray();
    for(int i=0; i<racialClassFeaturesList.size(); i++)
    {
        QString rCFL = racialClassFeaturesList[i].toString();
        newCharacter->addRacialClassFeatureItem(rCFL);
    }







    newCharacter->setPlayerName(jObj["playerName"].toString());
    newCharacter->setReflexAbilityModifier(jObj["reflexAbilityModifier"].toString());
    newCharacter->setReflexBaseSave(jObj["reflexBaseSave"].toString());
    newCharacter->setReflexMagicModifier(jObj["reflexMagicModifier"].toString());
    newCharacter->setReflexMiscModifier(jObj["reflexMiscModifier"].toString());
    newCharacter->setReflexTempModifier(jObj["reflexTempModifier"].toString());
    newCharacter->setReflexTotal(jObj["reflexTotal"].toString());
    newCharacter->setSpeed(jObj["speed"].toString());
    newCharacter->setStrengthMiscPenalties(jObj["strengtMiscPenaltiesh"].toString());
    newCharacter->setStrengthScorePlusAbilityMod(jObj["strengtScorePlusAbilityModifier"].toString());
    newCharacter->setStrengthEnhancementBonus(jObj["strengthEnhancementBonus"].toString());
    newCharacter->setStrengthMiscBonus(jObj["strengthMiscBonus"].toString());
    newCharacter->setStrengthModifier(jObj["strengthModifier"].toString());
    newCharacter->setStrengthTotal(jObj["strengthTotal"].toString());
    newCharacter->setWillAbilityModifier(jObj["willAbilityModifier"].toString());
    newCharacter->setWillBaseSave(jObj["willBaseSave"].toString());
    newCharacter->setWillMagicModifier(jObj["willMagicModifier"].toString());
    newCharacter->setWillMiscModifier(jObj["willMiscModifier"].toString());
    newCharacter->setWillTempModifier(jObj["willTempModifier"].toString());
    newCharacter->setWillTotal(jObj["willTotal"].toString());
    newCharacter->setWisdomEnhancementBonus(jObj["wisdomEnhancementBonus"].toString());
    newCharacter->setWisdomMiscBonus(jObj["wisdomMiscBonus"].toString());
    newCharacter->setWisdomMiscPenalties(jObj["wisdomMiscPenalties"].toString());
    newCharacter->setWisdomModifier(jObj["wisdomModifier"].toString());
    newCharacter->setWisdomScorePlusAbilityMod(jObj["wisdomScorePlusAbilityModifier"].toString());
    newCharacter->setWisdomTotal(jObj["wisdomTotal"].toString());
    newCharacter->setXp(jObj["xp"].toString());
    newCharacter->setMoney(jObj["money"].toString());


    qInfo() << jObj["headMagicItem"].toString() << endl;
    qInfo() << jObj["eyesMagicItem"].toString() << endl;
    qInfo() << jObj["neckMagicItem"].toString() << endl;
    qInfo() << jObj["shouldersMagicItem"].toString() << endl;
    qInfo() << jObj["ring1MagicItem"].toString() << endl;


    newCharacter->setHeadMagicItem(jObj["headMagicItem"].toString());
    newCharacter->setEyesMagicItem(jObj["eyesMagicItem"].toString());
    newCharacter->setNeckMagicItem(jObj["neckMagicItem"].toString());
    newCharacter->setShouldersMagicItem(jObj["shouldersMagicItem"].toString());
    newCharacter->setRing1MagicItem(jObj["ring1MagicItem"].toString());
    newCharacter->setRing2MagicItem(jObj["ring2MagicItem"].toString());
    newCharacter->setHandsMagicItem(jObj["handsMagicItem"].toString());
    newCharacter->setArmsWristsMagicItem(jObj["armsWristsMagicItem"].toString());
    newCharacter->setBodyMagicItem(jObj["bodyMagicItem"].toString());
    newCharacter->setTorsoMagicItem(jObj["torsoMagicItem"].toString());
    newCharacter->setWaistMagicItem(jObj["waistMagicItem"].toString());
    newCharacter->setFeetMagicItem(jObj["feetMagicItem"].toString());







}

void MainWindow::saveMagicItemsWorn()
{
    qInfo() << "savemagicItemsWorn Clicked" << endl;
 
    newCharacter->setHeadMagicItem(ui->headMagicItem->text());
    newCharacter->setEyesMagicItem(ui->eyesMagicItem->text());
    newCharacter->setNeckMagicItem(ui->neckMagicItem->text());
    newCharacter->setShouldersMagicItem(ui->shouldersMagicItem->text());
    newCharacter->setRing1MagicItem(ui->ring1MagicItem->text());
    newCharacter->setRing2MagicItem(ui->ring2MagicItem->text());
    newCharacter->setHandsMagicItem(ui->handsMagicItem->text());
    newCharacter->setArmsWristsMagicItem(ui->armsWristsMagicItem->text());
    newCharacter->setBodyMagicItem(ui->bodyMagicItem->text());
    newCharacter->setTorsoMagicItem(ui->torsoMagicItem->text());
    newCharacter->setWaistMagicItem(ui->waistMagicItem->text());
    newCharacter->setFeetMagicItem(ui->feetMagicItem->text());
    qInfo() <<"Head Magic Item" << newCharacter->getHeadMagicItem() << endl;
}

void MainWindow::saveToDB()
{
    sqlite->createTable();
}
