#include "Dungeon Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unistd.h>

using namespace std;

dungeon::dungeon() {
    srand(time(0));
    running = true;
    HPots = 0;
    MPots = 0;
    HP = 25;
    MP = 25;
}

void dungeon::gamestop() {
    running = false;
}

void dungeon::stats(){
    bool showstats = true;
    string anykey;
    while (showstats) {
        cout << "Health: " << HP << endl;
        cout << "Mana: " << MP << endl;
        cout << "Press any key to continue: ";
        cin >> anykey;
        if (anykey == "Q") {
            showstats = false;
        } else {
            showstats = false;
            system("cls");
        }
    }
}

void dungeon::inventory() {
    bool showinventory = true;
    string Qexit;
    for (char q : Qexit) q = toupper(q);
    while (showinventory) {
        cout << "Health Potion: " << HPots << endl;
        cout << "Mana Potion: " << MPots << endl;
        cout << "Enter any key to continue: ";
        cin >> Qexit;
        if (Qexit == "Q") {
            showinventory = false;
            system("cls");
        } else {
            cout << "Invalid input\n";
            showinventory = false;
            system("cls");
        }
    }
}

void dungeon::openchest() {
    int itemfound = rand() % 4 + 1;
    system("cls");
    cout << "Unlocking the chest.";
    for (int a = 0; a < 2; a++) {
        cout << ".";
        sleep(1);
    }
    if (itemfound == 1) {
        cout << "\nHealth Potion found!";
        HPots++;
        sleep(2);
        system("cls");
        return;
    } else if (itemfound == 3) {
        cout << "\nMana Potion found!";
        MPots++;
        sleep(2);
        system("cls");
        return;
    } else {
        cout << "\nIt's a dud...";
        sleep(2);
        system("cls");
        return;
    }
}

void dungeon::usepots() {
    bool usingpots = true;
    string usedpots;
    system("cls");
    while (usingpots == true) {
        cout << "1. Health Potion: " << HPots << endl;
        cout << "2. Mana Potion: " << MPots << endl;
        cout << "Enter 1 or 2 to use: ";
        cin >> usedpots;
        if (usedpots == "1" && HPots != 0){
            cout << "Health Potion used!";
            HPots--;
            HP += 25;
            system("cls");
            usingpots = false;
        } else if (usedpots == "2" && MPots != 0){
            cout << "Mana Potion used!";
            MPots--;
            MP += 25;
            system("cls");
            usingpots = false;
        } else {
            cout << "Invalid or not enough potion";
            sleep(1);
            system("cls");
            usingpots = false;
        }
    }
}

void dungeon::gamerun() {
    int action;
    cout << "Welcome to Dungeon\n";
    while (running == true) {
        cout << "1. Stats\n";
        cout << "2. Inventory\n";
        cout << "3. Open chest\n";
        cout << "4. Use an item\n";
        cout << "5. Quit\n";
        cout << "Enter 1, 2, 3, 4 or 5 to choose an action: ";
        cin >> action;
        switch (action){
            case 1: system("cls"); stats(); break;
            case 2: system("cls"); inventory(); break;
            case 3: system("cls"); openchest(); break;
            case 4: system("cls"); usepots(); break;
            case 5: system("cls"); cout << "\nYou're too weak for this dungeon.\n"; running = false; break;
            default: system("cls"); cout << "Invalid action."; break;
        }
    }
}



