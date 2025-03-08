#include "Forge.h"
#include "windows.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

Forge::Forge() {
    Metal = 0;
    srand(time(0));
}

void Forge::Menu() {
    cout << "Welcome!\n";
    cout << "1. Forge a sword\n";
    cout << "2. Find an ore\n";
    cout << "3. Quit\n";
}

void Forge::FindingMetal() {
    system("cls");
    cout << "Ore: " << Metal << endl;
    int MetalFound = rand() % 3 + 1;
    cout << "Mining for an ore";
    for (int i = 0; i <= 4; i++){
        cout << ".";
        sleep(3);
    }
    if (MetalFound == 1) {
        Metal++;
        cout << "\nAn ore found!";
        sleep(2);
    } else {
        cout << "\nIt's a dud...";
        sleep(2);
    }
}

void Forge::Forging() {
    system("cls");
    if (Metal != 0) {
    cout << "Hammering the to a shape of a sword." << endl;
    for (int i = 1; i <= 5; i++){
        cout << "Clank!" << endl;
        sleep(1);
    }
    if (rand() % 3 + 1) {
        cout << "You've successfully created a sword!!!";
        sleep(2);
    } else {
        cout << "The sword broke.";
        sleep(2);
    }
    } else {
        cout << "Out of Metal!";
        sleep(2);
    }
}

void Forge::start() {
    while (true) {
    system("cls");
    Menu();
    int choice;
    cout << "Action: ";
    cin >> choice;
    switch (choice) {
        case 1:
            Forging();
            break;
        case 2:
            FindingMetal();
            break;
        case 3:
            cout << "Quiting game...";
            return;
        default: cout << "Invalid action."; break;
    }
    }
}
