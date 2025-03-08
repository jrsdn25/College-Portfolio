#ifndef REVISED_POKEMON_H_INCLUDED
#define REVISED_POKEMON_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <string>

using namespace std;

class RevPokemon {
private:
    int PokeLvl;
public:
    RevPokemon();
    bool PokeRunning;
    void FindPoke();
    void CatchPoke();
    void MovePoke();
    void GamePoke();
    void PokeStop();
};

#endif // REVISED_POKEMON_H_INCLUDED
