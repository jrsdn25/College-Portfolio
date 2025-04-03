#include "Player.h"

#include <iostream>

Player::Player(){
    playerDmg = 10;
    maxHP = 50;
    HP = 50;
}

int Player::getPlayerDmg(){
    return playerDmg;
}

void Player::setPlayerDmg(int damageDmg){
    playerDmg = damageDmg;
}

int Player::getPlayerHP() {
    return HP;
}

void Player::setPlayerHP(int healthHP){
    HP = healthHP;
    if (HP < 0) HP = 0;
}

void Player::displayHP(){
    std::cout << "\nPlayer Health:   ";
    for(int i = 0; i < HP; i++){
        std::cout << "| ";
    }
    std::cout << std::endl;
}

int Player::playerBlock(int computerDmg){
    std::cout << "\nThe Player defended the punch!\n";
    return computerDmg - 5;
}

void Player::playerRest(){
    std::cout << "\nThe Player rests.\n+8 Health\n\n";
    setPlayerHP(HP + 8);
    if (HP > 50) HP = 50;
}

void Player::playerPunch(){
    std::cout << "The Player threw a punch!!\n";
}

void Player::takeDmg(int computerDmg){
    std::cout << "Player received damage.\n\n";
    setPlayerHP(HP - computerDmg);
}
