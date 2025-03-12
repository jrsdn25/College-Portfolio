#ifndef CATPETTING_H_INCLUDED
#define CATPETTING_H_INCLUDED

#include "Ket.h"
#include "Hooman.h"

class Game {
private:
    Ket myKet;
    Hooman meHooman;
    int ketFood;
public:
    Game();
    bool gameRunning;
    void petKet();
    void feedKet();
    void buyKetFood();
    void gameQuit();
    void gameMain();
};


#endif // CATPETTING_H_INCLUDED
