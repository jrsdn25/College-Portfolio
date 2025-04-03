#ifndef TEST_H
#define TEST_H

#include "Player.h"
#include "Computer.h"

#include <iostream>
#include <string>

class punch {
public:
    Player player;
    Computer computer;
    punch();
    bool gameRun;
    void gameGame();

};
#endif // TEST_H
