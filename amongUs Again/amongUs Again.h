#ifndef AMONGUS_AGAIN_H_INCLUDED
#define AMONGUS_AGAIN_H_INCLUDED

#include <vector>
#include <string>
#include <iostream>

class amongUs {
public:
    amongUs();
    void gameQuit();
    bool gameRunning;
    void gameMain();
    int playerCount;
    std::vector<std::string> playerNames;
    void playerInputCount();
    void playerInputNames();
    void playerVictim();
    void typeD(const std::string& text);
};


#endif // AMONGUS_AGAIN_H_INCLUDED
