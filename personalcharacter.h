#ifndef PERSONALCHARACTER_H
#define PERSONALCHARACTER_H

#include "character.h"
#include <QObject>
#include <QList>

class Character::personalCharacter : public QObject
{
    Q_OBJECT
public:
    personalCharacter();
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
    QList<QString> inventory;

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
    void addInventoryItem(QString inventoryItem)
    {
        this->inventory.append(inventoryItem);
    }

signals:
    void characterNameChange(QString strings);
    void playernameChange(QString strings);
    void characterClassChange(QString strings);
    void characterRaceChange(QString strings);
    void characterSizeChange(QString strings);
    void characterGenderChange(QString strings);
    void characterAlignmentChange(QString strings);
    void characterReligionChange(QString strings);
    void characterHeightChange(QString strings);
    void characterWeightChange(QString strings);
    void characterLooksChange(QString strings);


};
#endif // PERSONALCHARACTER_H
