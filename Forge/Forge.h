#ifndef FORGE_H_INCLUDED
#define FORGE_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <unistd.h>



using namespace std;

class Forge {
private:
    int Metal;
public:
    Forge();
    void Menu();
    void FindingMetal();
    void Forging();
    void start();

};


#endif // FORGE_H_INCLUDED
