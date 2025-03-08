#include "Revised Pokemon.h"

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <string>

using namespace std;

RevPokemon::RevPokemon() {
    srand(time(0));
    PokeRunning = true;
}



void RevPokemon::FindPoke() {
    int LookPoke = rand() % 4;
    if (LookPoke == 0) {
        PokeLvl = rand() % 15 + 1;
        MovePoke();
    } else {
        cout << "\nNo Pokemon found." << endl;
        sleep(1);
        return;
    }
}

void RevPokemon::MovePoke(){
    int action;
    cout << "\nPokemon Level: " << PokeLvl << endl;
    cout << "\n1. Catch Pokemon\n";
    cout << "2. Move\n";
    cout << "3. Quit\n";
    cout << "Action: ";
    cin >> action;
    switch (action) {
    case 1:
        CatchPoke();
        break;
    case 2:
        return;
    case 3:
        PokeStop();
        break;
    default:
        cout << "Invalid action!";
        sleep(1);
        break;
    }
}

void RevPokemon::CatchPoke(){
    if (PokeLvl >= 10) {
        cout << "You can't catch a Pokemon Level 10 or higher.";
        sleep(2);
        GamePoke();
    } else {
    int CatchChance = rand() % 5;
        if (CatchChance == 0 || CatchChance == 4) {
            cout << "You've successfully catch the Pokemon!!";
            sleep(2);
            PokeStop();
        } else {
        cout << "Pokemon fled.";
        sleep(1);
        return;
        }
    }
}


void RevPokemon::GamePoke(){
    while (PokeRunning) {
    system("cls");
    string EnterW;
    cout << "Enter W to move, Q to exit: ";
    cin >> EnterW;
    for (char& c : EnterW) c = toupper(c);
    system("cls");
    if (EnterW == "W") {
        cout << "Looking for a Pokemon";
        for (int i = 0; i < 2; i++) {
        cout << ".";
        sleep(1);
    }
        FindPoke();
        break;
    } else if (EnterW == "Q") {
        cout << "Exiting";
        for (int i = 0; i <2; i++) {
            cout << ".";
            sleep(1);
        }
        PokeRunning = false;
    } else {
        cout << "Invalid.";
        break;
    }
    }
}

void RevPokemon::PokeStop() {
   PokeRunning = false;
}
