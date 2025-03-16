#include "AmongUs.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include <unistd.h>

amongUs::amongUs(){

    srand(time(0));

    gameRunning = true;

    playerInputName = true;
}

void amongUs::gameQuit(){

    gameRunning = false;
}

void amongUs::typeDelay(const std::string& type, int delay){

    for (char c : type){

        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));

    }
}

void amongUs::playerCount(){

    typeDelay("Enter Player count: ");
    std::cin >> userInputCount;

    system("cls");

    std::cin.ignore();

    this->userInputName.resize(userInputCount);

    typeDelay("Enter " + std::to_string(userInputCount) + " Players:\n");

    for (int Names = 0; Names < userInputCount; Names++){
        typeDelay("Player " + std::to_string(Names + 1) + ": ");
        getline(std::cin, userInputName[Names]);
    }

}

void amongUs::playerGuess(){
    while (gameRunning) {
    int imposterRandom = rand() % userInputCount;
    std::string imposterName = userInputName[imposterRandom];
    std::string guessName;

    while (true) {

    system("cls");
    std::cout << "===============================\n";
    typeDelay("Imposter is Among Us...\n");
    for(int displayToPick = 0; displayToPick < userInputCount; displayToPick++) {
            typeDelay("Player " + std::to_string(displayToPick + 1) + ": " + userInputName[displayToPick] + "\n");
    }
    std::cout << "===============================\n";

    typeDelay("Who's the imposter: ");
    getline(std::cin, guessName);

        bool nameExist = false;

        for(const std::string& playerNameExist : userInputName) {
            if (playerNameExist == guessName) {
                nameExist = true;
                break;
            }
        }

        if (nameExist) {
            break;
        } else {
            typeDelay("\n\nName does not exist.");
            sleep(1);
            system("cls");
        }
    }


    system("cls");

    for (int findToRemove = 0; findToRemove < userInputCount; findToRemove++){
        if (userInputName[findToRemove] == guessName) {
            for (int foundThenRemove = findToRemove; foundThenRemove < userInputCount - 1; foundThenRemove++){
                userInputName[foundThenRemove] = userInputName[foundThenRemove + 1];
            }

            userInputName.pop_back();
            userInputCount--;
            break;
        }
    }

        typeDelay(guessName + " is sent to space...\n\n");
        sleep(2);
        if (guessName == imposterName) {
            system("cls");
            typeDelay("\n\n" + guessName + " is the imposter!\n");
            sleep(2);
            std::cout << "===============================\n";
            typeDelay("         Gz, you win!\n");
            std::cout << "===============================\n";
            gameQuit();
        } else if (userInputCount == 1) {
            system("cls");
            std::cout << "===============================\n";
            typeDelay("The imposter " + imposterName + " wins!\n");
            std::cout << "===============================\n";
            gameQuit();
        } else if (guessName != imposterName) {
            typeDelay(guessName + " is not the imposter...\n");
            sleep(2);
        }
    }
}

void amongUs::playerGame(){
    char yesORno;
    std::cout << "===============================\n";
    typeDelay("   Welcome to C++ Among Us\n");
    std::cout << "===============================\n";
    std::cout << "\n\n";
   typeDelay("Would you like to play?(y/n): ");
    std::cin >> yesORno;
   switch (yesORno) {
       case 'y': system("cls"); playerCount(); system("cls"); playerGuess(); break;
       case 'n': system("cls"); typeDelay("Imposter..."); gameQuit(); break;
       default: system("cls"); typeDelay("Invalid Action."); sleep(1); system("cls");
   }
}
