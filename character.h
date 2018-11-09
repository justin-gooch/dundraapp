#ifndef CHARACTER_H
#define CHARACTER_H
#include <memory>
using namespace std;

class Character{


public:
    Character();
    ~Character();

    Character(Character&&);
    Character& operator=(Character&&);

private:
    class personalCharacter;
    unique_ptr<personalCharacter> chara_ptr;

};
#endif // CHARACTER_H
