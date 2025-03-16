#ifndef AMONGUS_H_INCLUDED
#define AMONGUS_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

class amongUs {
public:
    amongUs();
    int userInputCount;
    std::vector<std::string> userInputName;
    bool gameRunning;
    bool playerInputName;
    void gameQuit();
    void playerGame();
    void playerCount();
    void playerGuess();
    void typeDelay(const std::string& type, int delay = 15);
};


#endif // AMONGUS_H_INCLUDED
