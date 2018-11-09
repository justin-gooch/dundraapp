#ifndef CHARACTER_H
#define CHARACTER_H
#include <memory>
#include "ui_mainwindow.h"
using namespace std;

class Character{


public:
    Character();
    ~Character();

    Character(Character&&);
    Character& operator=(Character&&);
    void connectUi(Ui::MainWindow*);
    void setCharacterName(QString name);

private:
    class personalCharacter;
    personalCharacter* chara_ptr;
};
#endif // CHARACTER_H
