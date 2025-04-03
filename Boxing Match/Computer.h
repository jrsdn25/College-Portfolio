#ifndef COMPUTER_H_INCLUDED
#define COMPUTER_H_INCLUDED

#include "Player.h"

class Player;

class Computer {
private:
    int computerDmg;
    int HP;
    int maxHP;
public:
    Computer();
    int getComputerHP();
    int getComputerDmg();
    void setComputerDmg(int damageDmg);
    void setComputerHP(int healthHP);
    void displayHP();
    void takeDmg(int playerDmg);
    void computerPunch();
    void computerRest();
    int computerBlock(int playerDmg);
};

#endif // COMPUTER_H_INCLUDED
