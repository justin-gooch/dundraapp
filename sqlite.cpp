#include <sqlite.h>

Sqlite::Sqlite(const QString &path)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if(!db.open())
    {
        qDebug() << "Danger Danger:: database connection failed" << endl;
    }
    else
    {
        qDebug() << "Successfully connected to database" << endl;

    }
}

Sqlite::~Sqlite()
{
    if(db.isOpen())
    {
        db.close();
    }
}

bool Sqlite::isOpen() const
{
    return db.isOpen();
}

bool Sqlite::createTable()
{
    bool success = true;

    QSqlQuery query;
    query.prepare("CREATE TABLE character(id INTEGER PRIMARY KEY, characterName TEXT,playerName TEXT,characterClass TEXT,characterRace TEXT,characterSize TEXT,characterGender TEXT,characterAlignment TEXT,characterReligion TEXT,characterHeight TEXT,characterWeight TEXT,characterLooks TEXT,baseAttackBonus TEXT,hitPoints TEXT,speed TEXT,initiativeModifier TEXT,xp TEXT,money TEXT,strengthTotal TEXT,strengthScorePlusAbilityMod TEXT,strengthEnhancementBonus TEXT,strengthMiscBonus TEXT,strengthMiscPenalties TEXT,strengthModifier TEXT,dexterityTotal TEXT,dexterityScorePlusAbilityMod TEXT,dexterityEnhancementBonus TEXT,dexterityMiscBonus TEXT,dexterityMiscPenalties TEXT,dexterityModifier TEXT,constitutionTotal TEXT,constitutionScorePlusAbilityMod TEXT,constitutionEnhancementBonus TEXT,constitutionMiscBonus TEXT,constitutionMiscPenalties TEXT,constitutionModifier TEXT,intelligenceTotal TEXT,intelligenceScorePlusAbilityMod TEXT,intelligenceEnhancementBonus TEXT,intelligenceMiscBonus TEXT,intelligenceMiscPenalties TEXT,intelligenceModifier TEXT,wisdomTotal TEXT,wisdomScorePlusAbilityMod TEXT,wisdomEnhancementBonus TEXT,wisdomMiscBonus TEXT,wisdomMiscPenalties TEXT,wisdomModifier TEXT,charismaTotal TEXT,charismaScorePlusAbilityMod TEXT,charismaEnhancementBonus TEXT,charismaMiscBonus TEXT,charismaMiscPenalties TEXT,charismaModifier TEXT,fortitudeTotal TEXT,fortitudeBaseSave TEXT,fortitudeAbilityModifier TEXT,fortitudeMagicModifier TEXT,fortitudeMiscModifier TEXT,fortitudeTempModifier TEXT,reflexTotal TEXT,reflexBaseSave TEXT,reflexAbilityModifier TEXT,reflexMagicModifier TEXT,reflexMiscModifier TEXT,reflexTempModifier TEXT,willTotal TEXT,willBaseSave TEXT,willAbilityModifier TEXT,willMagicModifier TEXT,willMiscModifier TEXT,willTempModifier TEXT,grappleModifierTotal TEXT,grappleModifierBaseAttackBonus TEXT,grappleModifierStrengthModifier TEXT,grappleModifierSizeModifier TEXT,grappleModifierMiscModifier TEXT,armorTotal TEXT,armorBonus TEXT,armorShieldBonus TEXT,armorDexModifier TEXT,armorSizeModifier TEXT,armorNaturalModifier TEXT,armorDeflectionModifier TEXT,armorMiscellaneousModifier TEXT,armorTouchAC TEXT,armorFlatFootedAC TEXT,armorWorn TEXT,armorMaxDex TEXT,armorCheckPenalty TEXT,armorWeight TEXT,armorShieldCarried TEXT,armorShieldMaxDex TEXT,armorShieldCheckPenalty TEXT,armorShieldWeight TEXT,headMagicItem TEXT,eyesMagicItem TEXT,neckMagicItem TEXT,shouldersMagicItem TEXT,ring1MagicItem TEXT,ring2MagicItem TEXT,handsMagicItem TEXT,armsWristsMagicItem TEXT,bodyMagicItem TEXT,torsoMagicItem TEXT,waistMagicItem TEXT,feetMagicItem TEXT);");

    if(!query.exec())
    {
        qDebug() << "looks like you either have a table here already, or otherwise you don't have access; who knows" << endl;
        success = false;
    }
    return success;
}

void Sqlite::updateCharacter(Character& userCharacter)
{

    if(userCharacter.getId() == 0)
    {
        qDebug() << "Character never set"

    }
}
