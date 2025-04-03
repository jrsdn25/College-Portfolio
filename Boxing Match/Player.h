#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Computer.h"

#include <iostream>

class Computer;

class Player {
private:
    int playerDmg;
    int HP;
    int maxHP;
public:
    Player();
    int getPlayerHP();
    int getPlayerDmg();
    void setPlayerDmg(int damageDmg);
    void setPlayerHP(int healthHP);
    void displayHP();
    void takeDmg(int computerDmg);
    void playerPunch();
    void playerRest();
    int playerBlock(int computerDmg);
};

#endif // PLAYER_H_INCLUDED
