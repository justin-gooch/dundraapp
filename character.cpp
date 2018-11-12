#include "personalcharacter.h"

Character::Character()
{
    chara_ptr = new personalCharacter();
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

void Character::connectUi(Ui::MainWindow* ui)
{
    chara_ptr->connectUi(ui);
}

void Character::personalCharacter::connectUi(Ui::MainWindow* ui)
{
    connect(ui->saveCharacterButton, SIGNAL(clicked(bool)), this, SLOT(onSaveCharacterSelected(setCharacterName(ui->characterNameLineEdit->text()))));
}
