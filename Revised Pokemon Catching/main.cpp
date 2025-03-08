#include "Revised Pokemon.h"
#include <iostream>

using namespace std;

int main()
{
    RevPokemon game;
    while (game.PokeRunning){
    game.GamePoke();
    }
    return 0;
}
