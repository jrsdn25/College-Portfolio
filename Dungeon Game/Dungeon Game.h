#ifndef DUNGEON_GAME_H_INCLUDED
#define DUNGEON_GAME_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unistd.h>

using namespace std;

class dungeon {
private:
    int HPots;
    int MPots;
    int HP;
    int MP;
    bool running;
public:
    dungeon();
    void stats();
    void inventory();
    void openchest();
    void usepots();
    void gamestop();
    void gamerun();
};

#endif // DUNGEON_GAME_H_INCLUDED
