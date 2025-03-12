#include "Hooman.h"

#include <iostream>

Hooman::Hooman() {
    HoomanHP = 100;
}

int Hooman::getHoomanHP() {
    return HoomanHP;
}

void Hooman::setHoomanHP(int hp) {
    HoomanHP = hp;
}

void Hooman::hoomanPetFail() {
    setHoomanHP(getHoomanHP() - 20);
}
