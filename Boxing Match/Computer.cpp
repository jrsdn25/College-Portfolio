#include "Computer.h"

#include <iostream>
#include <string>

Computer::Computer(){
    computerDmg = 10;
    maxHP = 50;
    HP = 50;
}

int Computer::getComputerDmg(){
    return computerDmg;
}

int Computer::getComputerHP(){
    return HP;
}

void Computer::setComputerHP(int healthHP){
    HP = healthHP;
    if (HP < 0) HP = 0;
}

void Computer::setComputerDmg(int damageDmg){
    computerDmg = damageDmg;
}

void Computer::displayHP(){
    std::cout << "Computer Health: ";
    for(int i = 0; i < HP; i++){
        std::cout << "| ";
    }
    std::cout << std::endl;
}

int Computer::computerBlock(int playerDmg){
    std::cout << "The Computer defended the punch!\n";
    return playerDmg - 5;
}

void Computer::computerRest(){
    std::cout << "\n\nThe Computer rests.\n+8 Health\n\n";
    setComputerHP(HP + 8);
    if (HP > 50) HP = 50;
}

void Computer::computerPunch(){
    std::cout << "\nThe Computer threw a punch!!\n";
}

void Computer::takeDmg(int playerDmg){
    std::cout << "Computer received damage.\n\n";
    setComputerHP(HP - playerDmg);
}
