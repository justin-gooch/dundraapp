#include "personalcharacter.h"

Character::Character()
{
    chara_ptr = new personalCharacter();
    struct inventory
    {
        QString item;
        QString location;
        QString weight;
    };
}

Character::~Character()
{

}

Character::Character(Character&&)
{

}


Character& Character::operator=(Character&& character)
{
    return character;
}

void Character::setCharacterName(QString name)
{
    chara_ptr->setCharacterName(name);
}
QString Character::getCharacterName()
{
    return chara_ptr->getCharacterName();
}
void Character::setPlayerName(QString playerName)
{
    chara_ptr->setPlayerName(playerName);
}
QString Character::getPlayerName()
{
    return chara_ptr->getPlayerName();
}
void Character::setCharacterClass(QString characterClass)
{
    chara_ptr->setCharacterClass(characterClass);
}
QString Character::getCharacterClass()
{
    return chara_ptr->getCharacterClass();
}
void Character::setCharacterRace(QString characterRace)
{
    chara_ptr->setCharacterRace(characterRace);
}
QString Character::getCharacterRace()
{
    return chara_ptr->getCharacterRace();
}
void Character::setCharacterSize(QString characterSize)
{
    chara_ptr->setCharacterSize(characterSize);
}
QString Character::getCharacterSize()
{
    return chara_ptr->getCharacterSize();
}
void Character::setCharacterGender(QString characterGender)
{
    chara_ptr->setCharacterGender(characterGender);
}
QString Character::getCharacterGender()
{
    return chara_ptr->getCharacterGender();
}
void Character::setCharacterAlignment(QString characterAlignment)
{
    chara_ptr->setCharacterAlignment(characterAlignment);
}
QString Character::getCharacterAlignment()
{
    return chara_ptr->getCharacterAlignment();
}
void Character::setCharacterReligion(QString characterReligion)
{
    chara_ptr->setCharacterReligion(characterReligion);
}
QString Character::getCharacterReligion()
{
    return chara_ptr->getCharacterReligion();
}
void Character::setCharacterHeight(QString characterHeight)
{
    chara_ptr->setCharacterHeight(characterHeight);
}
QString Character::getCharacterHeight()
{
    return chara_ptr->getCharacterHeight();
}
void Character::setCharacterWeight(QString characterWeight)
{
    chara_ptr->setCharacterWeight(characterWeight);
}
QString Character::getCharacterWeight()
{
    return chara_ptr->getCharacterWeight();
}
void Character::setCharacterLooks(QString characterLooks)
{
    chara_ptr->setCharacterLooks(characterLooks);
}
QString Character::getCharacterLooks()
{
    return chara_ptr->getCharacterLooks();
}
void Character::setBaseAttackBonus(QString baseAttackBonus)
{
    chara_ptr->setBaseAttackBonus(baseAttackBonus);
}
QString Character::getBaseAttackBonus()
{
    return chara_ptr->getBaseAttackBonus();
}
void Character::setHitPoints(QString hitPoints)
{
    chara_ptr->setHitPoints(hitPoints);
}
QString Character::getHitPoints()
{
    return chara_ptr->getHitPoints();
}
void Character::setSpeed(QString speed)
{
    chara_ptr->setSpeed(speed);
}
QString Character::getSpeed()
{
    return chara_ptr->getSpeed();
}
void Character::setInitiativeModifier(QString initiativeModifier)
{
    chara_ptr->setInitiativeModifier(initiativeModifier);
}
QString Character::getInitiativeModifier()
{
    return chara_ptr->getInitiativeModifier();
}
void Character::setXp(QString xp)
{
    chara_ptr->setXp(xp);
}
QString Character::getXp()
{
    return chara_ptr->getXp();
}




void Character::connectUi(Ui::MainWindow* ui)
{
    chara_ptr->connectUi(ui);
}


void Character::addCombatOption(combatOption item)
{
    chara_ptr->addCombatOptions(item);
}
QList<combatOption> Character::getCombatOptions()
{
    return chara_ptr->getCombatOptionList();
}
void Character::deleteCombatOptionsByIndex(int index)
{
    chara_ptr->deleteCombatOptionByIndex(index);
}



void Character::addInventoryItem(inventory inventoryItem)
{
    chara_ptr->addInventoryItem(inventoryItem);
}
QList<inventory> Character::getInventoryList()
{
    return chara_ptr->getInventoryList();
}
void Character::deleteInventoryItemByIndex(int index)
{
    chara_ptr->deleteInventoryItemByIndex(index);
}

void Character::addConditionalModifier(QString conditionalModifier)
{
    chara_ptr->addConditionalModifier(conditionalModifier);
}
QList<QString> Character::getConditionalModifier()
{
    return chara_ptr->getConditionalModifier();
}
void Character::deleteConditionalModifierItembyIndex(int index)
{
    chara_ptr->deleteConditionalModifierItembyIndex(index);
}




void Character::addFeatItem(QString item)
{
    chara_ptr->addFeatItem(item);
}
QList<QString> Character::getFeatList()
{
    return chara_ptr->getFeatList();
}
void Character::deleteFeatItemByIndex(int index)
{
    chara_ptr->deleteFeatItemByIndex(index);
}

void Character::addLanguageItem(QString item)
{
    chara_ptr->addLanguageItem(item);
}
QList<QString> Character::getLanguageList()
{
    return chara_ptr->getLanguageList();
}
void Character::deleteLanguageItemByIndex(int index)
{
    chara_ptr->deleteLanguageItemByIndex(index);
}

void Character::addRacialClassFeatureItem(QString item)
{
    chara_ptr->addRacialClassFeatureItem(item);
}
QList<QString> Character::getRacialClassFeatureList()
{
    return chara_ptr->getRacialClassFeatureList();
}
void Character::deleteRacialClassFeatureItemByIndex(int index)
{
    chara_ptr->deleteRacialClassFeatureItemByIndex(index);
}



void Character::personalCharacter::connectUi(Ui::MainWindow* ui)
{
    connect(ui->saveCharacterButton, SIGNAL(clicked(bool)), this, SLOT(onSaveCharacterSelected(setCharacterName(ui->characterNameLineEdit->text()))));
}





void Character::setStrengthTotal(QString total)
{
    chara_ptr->setStrengthTotal(total);
}
void Character::setStrengthScorePlusAbilityMod(QString total)
{
    chara_ptr->setStrengthScorePlusAbilityMod(total);
}
void Character::setStrengthEnhancementBonus(QString total)
{
    chara_ptr->setStrengthEnhancementBonus(total);
}
void Character::setStrengthMiscBonus(QString total)
{
    chara_ptr->setStrengthMiscBonus(total);
}
void Character::setStrengthMiscPenalties(QString total)
{
    chara_ptr->setStrengthMiscPenalties(total);
}
void Character::setStrengthModifier(QString total)
{
    chara_ptr->setStrengthModifier(total);
}
void Character::setDexterityTotal(QString total)
{
    chara_ptr->setDexterityTotal(total);
}
void Character::setDexterityScorePlusAbilityMod(QString total)
{
    chara_ptr->setDexterityScorePlusAbilityMod(total);
}
void Character::setDexterityEnhancementBonus(QString total)
{
    chara_ptr->setDexterityEnhancementBonus(total);
}
void Character::setDexterityMiscBonus(QString total)
{
    chara_ptr->setDexterityMiscBonus(total);
}
void Character::setDexterityMiscPenalties(QString total)
{
    chara_ptr->setDexterityMiscPenalties(total);
}
void Character::setDexterityModifier(QString total)
{
    chara_ptr->setDexterityModifier(total);
}
void Character::setConstitutionTotal(QString total)
{
    chara_ptr->setConstitutionTotal(total);
}
void Character::setConstitutionScorePlusAbilityMod(QString total)
{
    chara_ptr->setConstitutionEnhancementBonus(total);
}
void Character::setConstitutionEnhancementBonus(QString total)
{
    chara_ptr->setConstitutionEnhancementBonus(total);
}
void Character::setConstitutionMiscBonus(QString total)
{
    chara_ptr->setConstitutionMiscBonus(total);
}
void Character::setConstitutionMiscPenalties(QString total)
{
    chara_ptr->setConstitutionMiscPenalties(total);
}
void Character::setConstitutionModifier(QString total)
{
    chara_ptr->setConstitutionModifier(total);
}
void Character::setIntelligenceTotal(QString total)
{
    chara_ptr->setIntelligenceTotal(total);
}
void Character::setIntelligenceScorePlusAbilityMod(QString total)
{
    chara_ptr->setIntelligenceScorePlusAbilityMod(total);
}
void Character::setIntelligenceEnhancementBonus(QString total)
{
    chara_ptr->setIntelligenceEnhancementBonus(total);
}
void Character::setIntelligenceMiscBonus(QString total)
{
    chara_ptr->setIntelligenceMiscBonus(total);
}
void Character::setIntelligenceMiscPenalties(QString total)
{
    chara_ptr->setIntelligenceMiscPenalties(total);
}
void Character::setIntelligenceModifier(QString total)
{
    chara_ptr->setIntelligenceModifier(total);
}
void Character::setWisdomTotal(QString total)
{
    chara_ptr->setWisdomTotal(total);
}
void Character::setWisdomScorePlusAbilityMod(QString total)
{
    chara_ptr->setWisdomScorePlusAbilityMod(total);
}
void Character::setWisdomEnhancementBonus(QString total)
{
    chara_ptr->setWisdomEnhancementBonus(total);
}
void Character::setWisdomMiscBonus(QString total)
{
    chara_ptr->setWisdomMiscBonus(total);
}
void Character::setWisdomMiscPenalties(QString total)
{
    chara_ptr->setWisdomMiscPenalties(total);
}
void Character::setWisdomModifier(QString total)
{
    chara_ptr->setWisdomMiscPenalties(total);
}
void Character::setCharismaTotal(QString total)
{
    chara_ptr->setCharismaTotal(total);
}
void Character::setCharismaScorePlusAbilityMod(QString total)
{
    chara_ptr->setCharismaScorePlusAbilityMod(total);
}
void Character::setCharismaEnhancementBonus(QString total)
{
    chara_ptr->setCharismaEnhancementBonus(total);
}
void Character::setCharismaMiscBonus(QString total)
{
    chara_ptr->setCharismaMiscBonus(total);
}
void Character::setCharismaMiscPenalties(QString total)
{
    chara_ptr->setCharismaMiscPenalties(total);
}
void Character::setCharismaModifier(QString total)
{
    chara_ptr->setCharismaModifier(total);
}

QString Character::getStrengthTotal()
{
    return chara_ptr->getStrengthTotal();
}
QString Character::getStrengthScorePlusAbilityMod()
{
    return chara_ptr->getStrengthEnhancementBonus();
}
QString Character::getStrengthEnhancementBonus()
{
    return chara_ptr->getStrengthEnhancementBonus();
}
QString Character::getStrengthMiscBonus()
{
    return chara_ptr->getStrengthMiscBonus();
}
QString Character::getStrengthMiscPenalties()
{
    return chara_ptr->getStrengthMiscPenalties();
}
QString Character::getStrengthModifier()
{
    return chara_ptr->getStrengthModifier();
}
QString Character::getDexterityTotal()
{
    return chara_ptr->getDexterityTotal();
}
QString Character::getDexterityScorePlusAbilityMod()
{
    return chara_ptr->getDexterityScorePlusAbilityMod();
}
QString Character::getDexterityEnhancementBonus()
{
    return chara_ptr->getDexterityEnhancementBonus();
}
QString Character::getDexterityMiscBonus()
{
    return chara_ptr->getDexterityMiscBonus();
}
QString Character::getDexterityMiscPenalties()
{
    return chara_ptr->getDexterityMiscPenalties();
}
QString Character::getDexterityModifier()
{
    return chara_ptr->getDexterityModifier();
}
QString Character::getConstitutionTotal()
{
    return chara_ptr->getConstitutionTotal();
}
QString Character::getConstitutionScorePlusAbilityMod()
{
    return chara_ptr->getConstitutionScorePlusAbilityMod();
}
QString Character::getConstitutionEnhancementBonus()
{
    return chara_ptr->getConstitutionEnhancementBonus();
}
QString Character::getConstitutionMiscBonus()
{
    return chara_ptr->getConstitutionMiscBonus();
}
QString Character::getConstitutionMiscPenalties()
{
    return chara_ptr->getConstitutionMiscPenalties();
}
QString Character::getConstitutionModifier()
{
    return chara_ptr->getConstitutionModifier();
}
QString Character::getIntelligenceTotal()
{
    return chara_ptr->getIntelligenceTotal();
}
QString Character::getIntelligenceScorePlusAbilityMod()
{
    return chara_ptr->getIntelligenceScorePlusAbilityMod();
}
QString Character::getIntelligenceEnhancementBonus()
{
    return chara_ptr->getIntelligenceEnhancementBonus();
}
QString Character::getIntelligenceMiscBonus()
{
    return chara_ptr->getIntelligenceMiscBonus();
}
QString Character::getIntelligenceMiscPenalties()
{
    return chara_ptr->getIntelligenceMiscPenalties();
}
QString Character::getIntelligenceModifier()
{
    return chara_ptr->getIntelligenceModifier();
}
QString Character::getWisdomTotal()
{
    return chara_ptr->getWisdomTotal();
}
QString Character::getWisdomScorePlusAbilityMod()
{
    return chara_ptr->getWisdomScorePlusAbilityMod();
}
QString Character::getWisdomEnhancementBonus()
{
    return chara_ptr->getWisdomEnhancementBonus();
}
QString Character::getWisdomMiscBonus()
{
    return chara_ptr->getWisdomMiscBonus();
}
QString Character::getWisdomMiscPenalties()
{
    return chara_ptr->getWisdomMiscPenalties();
}
QString Character::getWisdomModifier()
{
    return chara_ptr->getWisdomModifier();
}
QString Character::getCharismaTotal()
{
    return chara_ptr->getCharismaTotal();
}
QString Character::getCharismaScorePlusAbilityMod()
{
    return chara_ptr->getCharismaScorePlusAbilityMod();
}
QString Character::getCharismaEnhancementBonus()
{
    return chara_ptr->getCharismaEnhancementBonus();
}
QString Character::getCharismaMiscBonus()
{
    return chara_ptr->getCharismaMiscBonus();
}
QString Character::getCharismaMiscPenalties()
{
    return chara_ptr->getCharismaMiscPenalties();
}
QString Character::getCharismaModifier()
{
    return chara_ptr->getCharismaModifier();
}



QString Character::getFortitudeTotal()
{
    return chara_ptr->getFortitudeTotal();
}
QString Character::getFortitudeBaseSave()
{
    return chara_ptr->getFortitudeBaseSave();
}
QString Character::getFortitudeAbilityModifier()
{
    return chara_ptr->getFortitudeAbilityModifier();
}
QString Character::getFortitudeMagicModifier()
{
    return chara_ptr->getFortitudeMagicModifier();
}
QString Character::getFortitudeMiscModifier()
{
    return chara_ptr->getFortitudeMiscModifier();
}
QString Character::getFortitudeTempModifier()
{
    return chara_ptr->getFortitudeTempModifier();
}
QString Character::getReflexTotal()
{
    return chara_ptr->getReflexTotal();
}
QString Character::getReflexBaseSave()
{
    return chara_ptr->getReflexBaseSave();
}
QString Character::getReflexAbilityModifier()
{
    return chara_ptr->getReflexAbilityModifier();
}
QString Character::getReflexMagicModifier()
{
    return chara_ptr->getReflexMagicModifier();
}
QString Character::getReflexMiscModifier()
{
    return chara_ptr->getReflexMiscModifier();
}
QString Character::getReflexTempModifier()
{
    return chara_ptr->getReflexTempModifier();
}
QString Character::getWillTotal()
{
    return chara_ptr->getWillTotal();
}
QString Character::getWillBaseSave()
{
    return chara_ptr->getWillBaseSave();
}
QString Character::getWillAbilityModifier()
{
    return chara_ptr->getWillAbilityModifier();
}
QString Character::getWillMagicModifier()
{
    return chara_ptr->getWillMagicModifier();
}
QString Character::getWillMiscModifier()
{
    return chara_ptr->getWillMiscModifier();
}
QString Character::getWillTempModifier()
{
    return chara_ptr->getWillTempModifier();
}

void Character::setFortitudeTotal(QString fortitudeTotal)
{
    chara_ptr->setFortitudeTotal(fortitudeTotal);
}
void Character::setFortitudeBaseSave(QString fortitudeBaseSave)
{
    chara_ptr->setFortitudeBaseSave(fortitudeBaseSave);
}
void Character::setFortitudeAbilityModifier(QString fortitudeAbilityModifier)
{
    chara_ptr->setFortitudeBaseSave(fortitudeAbilityModifier);
}
void Character::setFortitudeMagicModifier(QString fortitudeMagicModifier)
{
    chara_ptr->setFortitudeMagicModifier(fortitudeMagicModifier);
}
void Character::setFortitudeMiscModifier(QString fortitudeMiscModifier)
{
    chara_ptr->setFortitudeMiscModifier(fortitudeMiscModifier);
}
void Character::setFortitudeTempModifier(QString fortitudeTempModifier)
{
    chara_ptr->setFortitudeTempModifier(fortitudeTempModifier);
}
void Character::setReflexTotal(QString reflexTotal)
{
    chara_ptr->setReflexTotal(reflexTotal);
}
void Character::setReflexBaseSave(QString reflexBaseSave)
{
    chara_ptr->setReflexBaseSave(reflexBaseSave);
}
void Character::setReflexAbilityModifier(QString reflexAbilityModifier)
{
    chara_ptr->setReflexAbilityModifier(reflexAbilityModifier);
}
void Character::setReflexMagicModifier(QString reflexMagicModifier)
{
    chara_ptr->setReflexMagicModifier(reflexMagicModifier);
}
void Character::setReflexMiscModifier(QString reflexMiscModifier)
{
    chara_ptr->setReflexMiscModifier(reflexMiscModifier);
}
void Character::setReflexTempModifier(QString reflexTempModifier)
{
    chara_ptr->setReflexTempModifier(reflexTempModifier);
}
void Character::setWillTotal(QString willTotal)
{
    chara_ptr->setWillTotal(willTotal);
}
void Character::setWillBaseSave(QString willBaseSave)
{
    chara_ptr->setWillBaseSave(willBaseSave);
}
void Character::setWillAbilityModifier(QString willAbilityModifier)
{
    chara_ptr->setWillAbilityModifier(willAbilityModifier);
}
void Character::setWillMagicModifier(QString willMagicModifier)
{
    chara_ptr->setWillMagicModifier(willMagicModifier);
}
void Character::setWillMiscModifier(QString willMiscModifier)
{
    chara_ptr->setWillMiscModifier(willMiscModifier);
}
void Character::setWillTempModifier(QString willTempModifier)
{
    chara_ptr->setWillTempModifier(willTempModifier);
}
