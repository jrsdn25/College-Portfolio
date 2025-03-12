#include "CatPetting.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <limits>

using namespace std;

Game::Game() {
    srand(time(0));
    gameRunning = true;
    ketFood = 0;
}

void Game::gameQuit() {
    gameRunning = false;
}

void Game::buyKetFood() {
    system("cls");
    int ketFoodStore = rand() % 3;
    if (ketFoodStore == 0) {
        ketFood++;
        cout << "==================================" << endl;
        cout << "        You bought ket food." << endl;
        cout << "==================================\n" << endl;
        sleep(1);
    } else {
        cout << "==================================" << endl;
        cout << "        The store is closed" << endl;
        cout << "==================================\n" << endl;
        sleep(1);
    }
}

void Game::feedKet() {
    system("cls");
    if (ketFood != 0) {
        ketFood--;
        cout << "==================================" << endl;
        cout << "          You fed the ket" << endl;
        cout << "==================================\n\n" << endl;
        myKet.ketAddAffection();
        sleep(1);
    } else {
        cout << "==================================" << endl;
        cout << "         No ket food left" << endl;
        cout << "==================================\n\n" << endl;
        sleep(1);
    }
}

void Game::petKet() {
    system("cls");
    if (myKet.getKetAffection()  != 100) {
        cout << "==================================" << endl;
        cout << "   Ket is still awkward to you" << endl;
        cout << "==================================\n\n" << endl;
        sleep(1);
        cout << "Ket scratches you" << endl;
        cout << "\n\n";
        cout << "Hooman received 20 damage\n" << endl;
        meHooman.hoomanPetFail();
        sleep(1);
    } else {
        cout << "==================================" << endl;
        cout << "Gz! You've successfully petted ket" << endl;
        cout << "==================================" << endl;
        gameQuit();
    }
}

void Game::gameMain() {
    cout << "==================================" << endl;
    cout << "    A ket is approaching you..." << endl;
    cout << "==================================\n\n" << endl;
    sleep(1);
    while (gameRunning) {
       if (meHooman.getHoomanHP() != 0) {
        int Action;
        cout << "==================================" << endl;
        cout << "Health: " << meHooman.getHoomanHP() << endl;
        cout << "Ket food: " << ketFood << endl;
        cout << "Ket's affection: " << myKet.getKetAffection()  << endl;
        cout << "==================================" << endl;
        cout << "\n\n\n";
        cout << "==================================" << endl;
        cout << "What do you want to do:" << endl;
        cout << "1. Buy a ket food" << endl;
        cout << "2. Feed the ket" << endl;
        cout << "3. Pet the ket" << endl;
        cout << "==================================" << endl;
        cout << "Action: ";
        cin >> Action;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }
        switch (Action) {
            case 1: buyKetFood(); break;
            case 2: feedKet(); break;
            case 3: petKet(); break;
            default: system("cls"); cout << "Invalid action\n" << endl; sleep(1); system("cls"); break;
        }
       } else {
        cout << "Ket got scared of you and left" << endl;
        gameQuit();
       }
    }
   }
