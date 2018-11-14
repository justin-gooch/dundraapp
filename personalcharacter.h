#ifndef PERSONALCHARACTER_H
#define PERSONALCHARACTER_H

#include "character.h"
#include <QObject>
#include <QList>

class Character::personalCharacter : public QObject
{
    Q_OBJECT


public:
    personalCharacter(){}
    void connectUi(Ui::MainWindow*);
private:

    QString characterName;
    QString playerName;
    QString characterClass;
    QString characterRace;
    QString characterSize;
    QString characterGender;
    QString characterAlignment;
    QString characterReligion;
    QString characterHeight;
    QString characterWeight;
    QString characterLooks;
    QString baseAttackBonus;
    QString hitPoints;
    QString speed;
    QString initiativeModifier;
    QString xp;

    QString strengthTotal;
    QString strengthScorePlusAbilityMod;
    QString strengthEnhancementBonus;
    QString strengthMiscBonus;
    QString strengthMiscPenalties;
    QString strengthModifier;
    QString dexterityTotal;
    QString dexterityScorePlusAbilityMod;
    QString dexterityEnhancementBonus;
    QString dexterityMiscBonus;
    QString dexterityMiscPenalties;
    QString dexterityModifier;
    QString constitutionTotal;
    QString constitutionScorePlusAbilityMod;
    QString constitutionEnhancementBonus;
    QString constitutionMiscBonus;
    QString constitutionMiscPenalties;
    QString constitutionModifier;
    QString intelligenceTotal;
    QString intelligenceScorePlusAbilityMod;
    QString intelligenceEnhancementBonus;
    QString intelligenceMiscBonus;
    QString intelligenceMiscPenalties;
    QString intelligenceModifier;
    QString wisdomTotal;
    QString wisdomScorePlusAbilityMod;
    QString wisdomEnhancementBonus;
    QString wisdomMiscBonus;
    QString wisdomMiscPenalties;
    QString wisdomModifier;
    QString charismaTotal;
    QString charismaScorePlusAbilityMod;
    QString charismaEnhancementBonus;
    QString charismaMiscBonus;
    QString charismaMiscPenalties;
    QString charismaModifier;

    QString fortitudeTotal;
    QString fortitudeBaseSave;
    QString fortitudeAbilityModifier;
    QString fortitudeMagicModifier;
    QString fortitudeMiscModifier;
    QString fortitudeTempModifier;
    QString reflexTotal;
    QString reflexBaseSave;
    QString reflexAbilityModifier;
    QString reflexMagicModifier;
    QString reflexMiscModifier;
    QString reflexTempModifier;
    QString willTotal;
    QString willBaseSave;
    QString willAbilityModifier;
    QString willMagicModifier;
    QString willMiscModifier;
    QString willTempModifier;



    QList<inventory> inventoryList;
    QList<combatOption> combatOptionList;
    QList<QString> conditionalModifierList;

    QList<QString> featList;
    QList<QString> languageList;
    QList<QString> racialClassFeatureList;

public slots:
    void setCharacterName(QString characterName)
    {
        this->characterName = characterName;
    }
    QString getCharacterName()
    {
        return this->characterName;
    }
    void setPlayerName(QString playerName)
    {
        this->playerName = playerName;
    }
    QString getPlayerName()
    {
        return this->playerName;
    }
    void setCharacterClass(QString characterClass)
    {
        this->characterClass = characterClass;
    }
    QString getCharacterClass()
    {
        return this->characterClass;
    }
    void setCharacterRace(QString characterRace)
    {
        this->characterRace=characterRace;
    }
    QString getCharacterRace()
    {
        return this->characterRace;
    }
    void setCharacterSize(QString characterSize)
    {
        this->characterSize=characterSize;
    }
    QString getCharacterSize()
    {
        return this->characterSize;
    }
    void setCharacterGender(QString characterGender)
    {
        this->characterGender=characterGender;
    }
    QString getCharacterGender()
    {
        return this->characterGender;
    }
    void setCharacterAlignment(QString characterAlignment)
    {
        this->characterAlignment=characterAlignment;
    }
    QString getCharacterAlignment()
    {
        return this->characterAlignment;
    }
    void setCharacterReligion(QString characterReligion)
    {
        this->characterReligion=characterReligion;
    }
    QString getCharacterReligion()
    {
        return this->characterReligion;
    }
    void setCharacterHeight(QString characterHeight)
    {
        this->characterHeight=characterHeight;
    }
    QString getCharacterHeight()
    {
        return this->characterHeight;
    }
    void setCharacterWeight(QString characterWeight)
    {
        this->characterWeight=characterWeight;
    }
    QString getCharacterWeight()
    {
        return this->characterWeight;
    }
    void setCharacterLooks(QString characterLooks)
    {
        this->characterLooks=characterLooks;
    }
    QString getCharacterLooks()
    {
        return this->characterGender;
    }
    void setBaseAttackBonus(QString baseAttackBonus)
    {
        this->baseAttackBonus = baseAttackBonus;
    }
    QString getBaseAttackBonus()
    {
        return this->baseAttackBonus;
    }
    void setHitPoints(QString hitPoints)
    {
        this->hitPoints = hitPoints;
    }
    QString getHitPoints()
    {
        return this->hitPoints;
    }
    void setSpeed(QString speed)
    {
        this->speed=speed;
    }
    QString getSpeed()
    {
        return this->speed;
    }
    void setInitiativeModifier(QString initiativeModifier)
    {
        this->initiativeModifier = initiativeModifier;
    }
    QString getInitiativeModifier()
    {
        return this->initiativeModifier;
    }
    void setXp(QString xp)
    {
        this->xp=xp;
    }
    QString getXp()
    {
        return this->xp;
    }


    void addCombatOptions(combatOption combatItem)
    {
        this->combatOptionList.append(combatItem);
    }
    QList<combatOption> getCombatOptionList()
    {
        return this->combatOptionList;
    }
    void deleteCombatOptionByIndex(int index)
    {
        this->combatOptionList.removeAt(index);
    }





    void addInventoryItem(inventory inventoryItem)
    {
        this->inventoryList.append(inventoryItem);
    }
    QList<inventory> getInventoryList()
    {
        return this->inventoryList;
    }
    void deleteInventoryItemByIndex(int index)
    {
        this->inventoryList.removeAt(index);
    }


    void addConditionalModifier(QString conditionalModifier)
    {
        this->conditionalModifierList.append(conditionalModifier);
    }
    QList<QString> getConditionalModifier()
    {
        return this->conditionalModifierList;
    }
    void deleteConditionalModifierItembyIndex(int index)
    {
        this->conditionalModifierList.removeAt(index);
    }


    void addFeatItem(QString item)
    {
        this->featList.append(item);
    }
    QList<QString> getFeatList()
    {
        return this->featList;
    }
    void deleteFeatItemByIndex(int index)
    {
        this->featList.removeAt(index);
    }

    void addLanguageItem(QString item)
    {
        this->languageList.append(item);
    }
    QList<QString> getLanguageList()
    {
        return this->languageList;
    }
    void deleteLanguageItemByIndex(int index)
    {
        this->languageList.removeAt(index);
    }

    void addRacialClassFeatureItem(QString item)
    {
        this->racialClassFeatureList.append(item);
    }
    QList<QString> getRacialClassFeatureList()
    {
        return this->racialClassFeatureList;
    }
    void deleteRacialClassFeatureItemByIndex(int index)
    {
        this->racialClassFeatureList.removeAt(index);
    }






    void setStrengthTotal(QString strengthTotal)
    {
        this->strengthTotal = strengthTotal;
    }
    void setStrengthScorePlusAbilityMod(QString strengthScorePlusAbilityMod)
    {
        this->strengthScorePlusAbilityMod = strengthScorePlusAbilityMod;
    }
    void setStrengthEnhancementBonus(QString strengthEnhancementBonus)
    {
        this->strengthEnhancementBonus = strengthEnhancementBonus;
    }
    void setStrengthMiscBonus(QString strengthMiscBonus)
    {
        this->strengthMiscBonus = strengthMiscBonus;
    }
    void setStrengthMiscPenalties(QString strengthMiscPenalties)
    {
        this->strengthMiscPenalties = strengthMiscPenalties;
    }
    void setStrengthModifier(QString strengthModifier)
    {
        this->strengthModifier = strengthModifier;
    }
    void setDexterityTotal(QString dexterityTotal)
    {
        this->dexterityTotal = dexterityTotal;
    }
    void setDexterityScorePlusAbilityMod(QString dexterityScorePlusAbilityMod)
    {
        this->dexterityScorePlusAbilityMod = dexterityScorePlusAbilityMod;
    }
    void setDexterityEnhancementBonus(QString dexterityEnhancementBonus)
    {
        this->dexterityEnhancementBonus = dexterityEnhancementBonus;
    }
    void setDexterityMiscBonus(QString dexterityMiscBonus)
    {
        this->dexterityMiscBonus = dexterityMiscBonus;
    }
    void setDexterityMiscPenalties(QString dexterityMiscBonus)
    {
        this->dexterityMiscPenalties = dexterityMiscBonus;
    }
    void setDexterityModifier(QString dexterityModifier)
    {
        this->dexterityModifier = dexterityModifier;
    }
    void setConstitutionTotal(QString constitutionTotal)
    {
        this->constitutionTotal = constitutionTotal;
    }
    void setConstitutionScorePlusAbilityMod(QString constitutionScorePlusAbilityMod)
    {
        this->constitutionScorePlusAbilityMod = constitutionScorePlusAbilityMod;
    }
    void setConstitutionEnhancementBonus(QString constitutionEnhancementBonus)
    {
        this->constitutionEnhancementBonus = constitutionEnhancementBonus;
    }
    void setConstitutionMiscBonus(QString constitutionMiscBonus)
    {
        this->constitutionMiscBonus = constitutionMiscBonus;
    }
    void setConstitutionMiscPenalties(QString constitutionMiscPenalties)
    {
        this->constitutionMiscPenalties = constitutionMiscPenalties;
    }
    void setConstitutionModifier(QString constitutionModifier)
    {
        this->constitutionModifier = constitutionModifier;
    }
    void setIntelligenceTotal(QString intelligenceTotal)
    {
        this->intelligenceTotal = intelligenceTotal;
    }
    void setIntelligenceScorePlusAbilityMod(QString intelligenceScorePlusAbilityMod)
    {
        this->intelligenceScorePlusAbilityMod = intelligenceScorePlusAbilityMod;
    }
    void setIntelligenceEnhancementBonus(QString intelligenceEnhancementBonus)
    {
        this->intelligenceEnhancementBonus = intelligenceEnhancementBonus;
    }
    void setIntelligenceMiscBonus(QString intelligenceMiscBonus)
    {
        this->intelligenceMiscBonus = intelligenceMiscBonus;
    }
    void setIntelligenceMiscPenalties(QString intelligenceMiscPenalties)
    {
        this->intelligenceMiscPenalties = intelligenceMiscPenalties;
    }
    void setIntelligenceModifier(QString intelligenceModifier)
    {
        this->intelligenceModifier = intelligenceModifier;
    }
    void setWisdomTotal(QString wisdomTotal)
    {
        this->wisdomTotal = wisdomTotal;
    }
    void setWisdomScorePlusAbilityMod(QString wisdomScorePlusAbilityMod)
    {
        this->wisdomScorePlusAbilityMod = wisdomScorePlusAbilityMod;
    }
    void setWisdomEnhancementBonus(QString wisdomEnhancementBonus)
    {
        this->wisdomEnhancementBonus=wisdomEnhancementBonus;
    }
    void setWisdomMiscBonus(QString wisdomMiscBonus)
    {
        this->wisdomMiscBonus = wisdomMiscBonus;
    }
    void setWisdomMiscPenalties(QString wisdomMiscPenalties)
    {
        this->wisdomMiscPenalties=wisdomMiscPenalties;
    }
    void setWisdomModifier(QString wisdomModifier)
    {
        this->wisdomModifier=wisdomModifier;
    }
    void setCharismaTotal(QString charismaTotal)
    {
        this->charismaTotal=charismaTotal;
    }
    void setCharismaScorePlusAbilityMod(QString charismaScorePlusAbilityMod)
    {
        this->charismaScorePlusAbilityMod=charismaScorePlusAbilityMod;
    }
    void setCharismaEnhancementBonus(QString charismaEnhancementBonus)
    {
        this->charismaEnhancementBonus=charismaEnhancementBonus;
    }
    void setCharismaMiscBonus(QString charismaMiscBonus)
    {
        this->charismaMiscBonus=charismaMiscBonus;
    }
    void setCharismaMiscPenalties(QString charismaMiscPenalties)
    {
        this->charismaMiscPenalties=charismaMiscPenalties;
    }
    void setCharismaModifier(QString charismaModifier)
    {
        this->charismaModifier=charismaModifier;
    }

    QString getStrengthTotal()
    {
        return this->strengthTotal;
    }
    QString getStrengthScorePlusAbilityMod()
    {
        return this->strengthScorePlusAbilityMod;
    }
    QString getStrengthEnhancementBonus()
    {
        return this->strengthEnhancementBonus;
    }
    QString getStrengthMiscBonus()
    {
        return this->strengthMiscBonus;
    }
    QString getStrengthMiscPenalties()
    {
        return this->strengthMiscPenalties;
    }
    QString getStrengthModifier()
    {
        return this->strengthModifier;
    }
    QString getDexterityTotal()
    {
        return this->dexterityTotal;
    }
    QString getDexterityScorePlusAbilityMod()
    {
        return this->dexterityScorePlusAbilityMod;
    }
    QString getDexterityEnhancementBonus()
    {
        return this->dexterityEnhancementBonus;
    }
    QString getDexterityMiscBonus()
    {
        return this->dexterityMiscBonus;
    }
    QString getDexterityMiscPenalties()
    {
        return this->dexterityMiscPenalties;
    }
    QString getDexterityModifier()
    {
        return this->dexterityModifier;
    }
    QString getConstitutionTotal()
    {
        return this->constitutionTotal;
    }
    QString getConstitutionScorePlusAbilityMod()
    {
        return this->constitutionScorePlusAbilityMod;
    }
    QString getConstitutionEnhancementBonus()
    {
        return this->constitutionEnhancementBonus;
    }
    QString getConstitutionMiscBonus()
    {
        return this->constitutionMiscBonus;
    }
    QString getConstitutionMiscPenalties()
    {
        return this->constitutionMiscPenalties;
    }
    QString getConstitutionModifier()
    {
        return this->constitutionModifier;
    }
    QString getIntelligenceTotal()
    {
        return this->intelligenceTotal;
    }
    QString getIntelligenceScorePlusAbilityMod()
    {
        return this->intelligenceScorePlusAbilityMod;
    }
    QString getIntelligenceEnhancementBonus()
    {
        return this->intelligenceEnhancementBonus;
    }
    QString getIntelligenceMiscBonus()
    {
        return this->intelligenceMiscBonus;
    }
    QString getIntelligenceMiscPenalties()
    {
        return this->intelligenceMiscPenalties;
    }
    QString getIntelligenceModifier()
    {
        return this->intelligenceModifier;
    }
    QString getWisdomTotal()
    {
        return this->wisdomTotal;
    }
    QString getWisdomScorePlusAbilityMod()
    {
        return this->wisdomScorePlusAbilityMod;
    }
    QString getWisdomEnhancementBonus()
    {
        return this->wisdomEnhancementBonus;
    }
    QString getWisdomMiscBonus()
    {
        return this->wisdomMiscBonus;
    }
    QString getWisdomMiscPenalties()
    {
        return this->wisdomMiscPenalties;
    }
    QString getWisdomModifier()
    {
        return this->wisdomModifier;
    }
    QString getCharismaTotal()
    {
        return this->charismaTotal;
    }
    QString getCharismaScorePlusAbilityMod()
    {
        return this->charismaScorePlusAbilityMod;
    }
    QString getCharismaEnhancementBonus()
    {
        return this->charismaEnhancementBonus;
    }
    QString getCharismaMiscBonus()
    {
        return this->charismaMiscBonus;
    }
    QString getCharismaMiscPenalties()
    {
        return this->charismaMiscPenalties;
    }
    QString getCharismaModifier()
    {
        return this->charismaModifier;
    }





    QString getFortitudeTotal()
    {
        return this->fortitudeTotal;
    }
    QString getFortitudeBaseSave()
    {
        return this->fortitudeBaseSave;
    }
    QString getFortitudeAbilityModifier()
    {
        return this->fortitudeAbilityModifier;
    }
    QString getFortitudeMagicModifier()

    {
        return this->fortitudeMagicModifier;
    }
    QString getFortitudeMiscModifier()
    {
        return this->fortitudeMiscModifier;
    }
    QString getFortitudeTempModifier()
    {
        return this->fortitudeTempModifier;
    }
    QString getReflexTotal()
    {
        return this->reflexTotal;
    }
    QString getReflexBaseSave()
    {
        return this->reflexBaseSave;
    }
    QString getReflexAbilityModifier()
    {
        return this->reflexAbilityModifier;
    }
    QString getReflexMagicModifier()
    {
        return this->reflexMagicModifier;
    }
    QString getReflexMiscModifier()
    {
        return this->reflexMiscModifier;
    }
    QString getReflexTempModifier()
    {
        return this->reflexTempModifier;
    }
    QString getWillTotal()
    {
        return this->willTotal;
    }
    QString getWillBaseSave()
    {
        return this->willBaseSave;
    }
    QString getWillAbilityModifier()
    {
        return this->willAbilityModifier;
    }
    QString getWillMagicModifier()
    {
        return this->willMagicModifier;
    }
    QString getWillMiscModifier()
    {
        return this->willMiscModifier;
    }
    QString getWillTempModifier()
    {
        return this->willTempModifier;
    }

    void setFortitudeTotal(QString fortitudeTotal)
    {
        this->fortitudeTotal = fortitudeTotal;
    }
    void setFortitudeBaseSave(QString fortitudeBaseSave)
    {
        this->fortitudeBaseSave = fortitudeBaseSave;
    }
    void setFortitudeAbilityModifier(QString fortitudeAbilityModifier)
    {
        this->fortitudeAbilityModifier = fortitudeAbilityModifier;
    }
    void setFortitudeMagicModifier(QString fortitudeMagicModifier)
    {
        this->fortitudeMagicModifier = fortitudeMagicModifier;
    }
    void setFortitudeMiscModifier(QString fortitudeMiscModifier)
    {
        this->fortitudeMiscModifier = fortitudeMiscModifier;
    }
    void setFortitudeTempModifier(QString fortitudeTempModifier)
    {
        this->fortitudeTempModifier = fortitudeTempModifier;
    }
    void setReflexTotal(QString reflexTotal)
    {
        this->reflexTotal = reflexTotal;
    }
    void setReflexBaseSave(QString reflexBaseSave)
    {
        this->reflexBaseSave = reflexBaseSave;
    }
    void setReflexAbilityModifier(QString reflexAbilityModifier)
    {
        this->reflexAbilityModifier = reflexAbilityModifier;
    }
    void setReflexMagicModifier(QString reflexMagicModifier)
    {
        this->reflexMagicModifier = reflexMagicModifier;
    }
    void setReflexMiscModifier(QString reflexMiscModifier)
    {
        this->reflexMiscModifier = reflexMiscModifier;
    }
    void setReflexTempModifier(QString reflexTempModifier)
    {
        this->reflexTempModifier = reflexTempModifier;
    }
    void setWillTotal(QString willTotal)
    {
        this->willTotal = willTotal;
    }
    void setWillBaseSave(QString willBaseSave)
    {
        this->willBaseSave = willBaseSave;
    }
    void setWillAbilityModifier(QString willAbilityModifier)
    {
        this->willAbilityModifier = willAbilityModifier;
    }
    void setWillMagicModifier(QString willMagicModifier)
    {
        this->willMagicModifier = willMagicModifier;
    }
    void setWillMiscModifier(QString willMiscModifier)
    {
        this->willMiscModifier = willMiscModifier;
    }
    void setWillTempModifier(QString willTempModifier)
    {
        this->willTempModifier = willTempModifier;
    }






};
#endif // PERSONALCHARACTER_H
