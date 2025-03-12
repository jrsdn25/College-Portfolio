#include "Ket.h"

#include <iostream>

Ket::Ket() {
    ketAffection = 0;
}

int Ket::getKetAffection() {
    return ketAffection;
}

void Ket::setKetAffection(int affection) {
    ketAffection = affection;
}

void Ket::ketAddAffection() {
    setKetAffection(getKetAffection() + 25);
}
