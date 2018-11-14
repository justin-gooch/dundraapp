#ifndef CHARACTER_H
#define CHARACTER_H
#include <memory>
#include "ui_mainwindow.h"
using namespace std;

struct inventory
{
    QString item;
    QString location;
    QString weight;
};

struct combatOption
{
    QString weapon;
    QString attackBonus;
    QString damage;
    QString critical;
    QString rangeIncrement;
    QString type;
    QString notesAmmo;

};



class Character{


public:
    Character();
    ~Character();

    Character(Character&&);
    Character& operator=(Character&&);
    void connectUi(Ui::MainWindow*);
    void setCharacterName(QString name);
    QString getCharacterName();
    void setPlayerName(QString playerName);
    QString getPlayerName();
    void setCharacterClass(QString characterClass);
    QString getCharacterClass();
    void setCharacterRace(QString characterRace);
    QString getCharacterRace();
    void setCharacterSize(QString characterSize);
    QString getCharacterSize();
    void setCharacterGender(QString characterGender);
    QString getCharacterGender();
    void setCharacterAlignment(QString characterAlignment);
    QString getCharacterAlignment();
    void setCharacterReligion(QString characterReligion);
    QString getCharacterReligion();
    void setCharacterHeight(QString characterHeight);
    QString getCharacterHeight();
    void setCharacterWeight(QString characterWeight);
    QString getCharacterWeight();
    void setCharacterLooks(QString characterLooks);
    QString getCharacterLooks();
    void setBaseAttackBonus(QString baseAttackBonus);
    QString getBaseAttackBonus();
    void setHitPoints(QString hitPoints);
    QString getHitPoints();
    void setSpeed(QString speed);
    QString getSpeed();
    void setInitiativeModifier(QString initiativeModifier);
    QString getInitiativeModifier();
    void setXp(QString xp);
    QString getXp();


    void addCombatOption(combatOption);
    QList<combatOption> getCombatOptions();
    void deleteCombatOptionsByIndex(int index);

    void addInventoryItem(inventory);
    QList<inventory> getInventoryList();
    void deleteInventoryItemByIndex(int index);

    void addConditionalModifier(QString);
    QList<QString> getConditionalModifier();
    void deleteConditionalModifierItembyIndex(int index);

    void addFeatItem(QString);
    QList<QString> getFeatList();
    void deleteFeatItemByIndex(int index);

    void addLanguageItem(QString);
    QList<QString> getLanguageList();
    void deleteLanguageItemByIndex(int index);

    void addRacialClassFeatureItem(QString);
    QList<QString> getRacialClassFeatureList();
    void deleteRacialClassFeatureItemByIndex(int index);




    void setStrengthTotal(QString total);
    void setStrengthScorePlusAbilityMod(QString total);
    void setStrengthEnhancementBonus(QString total);
    void setStrengthMiscBonus(QString total);
    void setStrengthMiscPenalties(QString total);
    void setStrengthModifier(QString total);
    void setDexterityTotal(QString total);
    void setDexterityScorePlusAbilityMod(QString total);
    void setDexterityEnhancementBonus(QString total);
    void setDexterityMiscBonus(QString total);
    void setDexterityMiscPenalties(QString total);
    void setDexterityModifier(QString total);
    void setConstitutionTotal(QString total);
    void setConstitutionScorePlusAbilityMod(QString total);
    void setConstitutionEnhancementBonus(QString total);
    void setConstitutionMiscBonus(QString total);
    void setConstitutionMiscPenalties(QString total);
    void setConstitutionModifier(QString total);
    void setIntelligenceTotal(QString total);
    void setIntelligenceScorePlusAbilityMod(QString total);
    void setIntelligenceEnhancementBonus(QString total);
    void setIntelligenceMiscBonus(QString total);
    void setIntelligenceMiscPenalties(QString total);
    void setIntelligenceModifier(QString total);
    void setWisdomTotal(QString total);
    void setWisdomScorePlusAbilityMod(QString total);
    void setWisdomEnhancementBonus(QString total);
    void setWisdomMiscBonus(QString total);
    void setWisdomMiscPenalties(QString total);
    void setWisdomModifier(QString total);
    void setCharismaTotal(QString total);
    void setCharismaScorePlusAbilityMod(QString total);
    void setCharismaEnhancementBonus(QString total);
    void setCharismaMiscBonus(QString total);
    void setCharismaMiscPenalties(QString total);
    void setCharismaModifier(QString total);

    QString getStrengthTotal();
    QString getStrengthScorePlusAbilityMod();
    QString getStrengthEnhancementBonus();
    QString getStrengthMiscBonus();
    QString getStrengthMiscPenalties();
    QString getStrengthModifier();
    QString getDexterityTotal();
    QString getDexterityScorePlusAbilityMod();
    QString getDexterityEnhancementBonus();
    QString getDexterityMiscBonus();
    QString getDexterityMiscPenalties();
    QString getDexterityModifier();
    QString getConstitutionTotal();
    QString getConstitutionScorePlusAbilityMod();
    QString getConstitutionEnhancementBonus();
    QString getConstitutionMiscBonus();
    QString getConstitutionMiscPenalties();
    QString getConstitutionModifier();
    QString getIntelligenceTotal();
    QString getIntelligenceScorePlusAbilityMod();
    QString getIntelligenceEnhancementBonus();
    QString getIntelligenceMiscBonus();
    QString getIntelligenceMiscPenalties();
    QString getIntelligenceModifier();
    QString getWisdomTotal();
    QString getWisdomScorePlusAbilityMod();
    QString getWisdomEnhancementBonus();
    QString getWisdomMiscBonus();
    QString getWisdomMiscPenalties();
    QString getWisdomModifier();
    QString getCharismaTotal();
    QString getCharismaScorePlusAbilityMod();
    QString getCharismaEnhancementBonus();
    QString getCharismaMiscBonus();
    QString getCharismaMiscPenalties();
    QString getCharismaModifier();



    QString getFortitudeTotal();
    QString getFortitudeBaseSave();
    QString getFortitudeAbilityModifier();
    QString getFortitudeMagicModifier();
    QString getFortitudeMiscModifier();
    QString getFortitudeTempModifier();
    QString getReflexTotal();
    QString getReflexBaseSave();
    QString getReflexAbilityModifier();
    QString getReflexMagicModifier();
    QString getReflexMiscModifier();
    QString getReflexTempModifier();
    QString getWillTotal();
    QString getWillBaseSave();
    QString getWillAbilityModifier();
    QString getWillMagicModifier();
    QString getWillMiscModifier();
    QString getWillTempModifier();

    void setFortitudeTotal(QString fortitudeTotal);
    void setFortitudeBaseSave(QString fortitudeTotal);
    void setFortitudeAbilityModifier(QString fortitudeTotal);
    void setFortitudeMagicModifier(QString fortitudeTotal);
    void setFortitudeMiscModifier(QString fortitudeTotal);
    void setFortitudeTempModifier(QString fortitudeTotal);
    void setReflexTotal(QString fortitudeTotal);
    void setReflexBaseSave(QString fortitudeTotal);
    void setReflexAbilityModifier(QString fortitudeTotal);
    void setReflexMagicModifier(QString fortitudeTotal);
    void setReflexMiscModifier(QString fortitudeTotal);
    void setReflexTempModifier(QString fortitudeTotal);
    void setWillTotal(QString fortitudeTotal);
    void setWillBaseSave(QString fortitudeTotal);
    void setWillAbilityModifier(QString fortitudeTotal);
    void setWillMagicModifier(QString fortitudeTotal);
    void setWillMiscModifier(QString fortitudeTotal);
    void setWillTempModifier(QString fortitudeTotal);

private:
    class personalCharacter;
    personalCharacter* chara_ptr;
};
#endif // CHARACTER_H
