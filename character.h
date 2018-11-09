#ifndef CHARACTER_H
#define CHARACTER_H
#include <memory>
using namespace std;
#endif // CHARACTER_H
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
