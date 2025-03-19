#include "amongUs Again.h"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <windows.h>

amongUs::amongUs(){
    srand(time(0));
    gameRunning = true;
}

void amongUs::typeD(const std::string& text){
    for(char c : text) {
        std::cout << c << std::flush;
        Sleep(1);
    }
}

void amongUs::gameQuit(){
    gameRunning = false;
}

void amongUs::playerInputCount(){
    typeD("Please Input player count: ");
    std::cin >> playerCount;
    std::cin.ignore();

    if (playerCount == 1){
        system("cls");
        typeD("You cannot play alone.");
        Sleep(500);
        return;
    }

    this->playerNames.resize(playerCount);




    playerInputNames();
}

void amongUs::playerInputNames() {
    system("cls");

    typeD("Please enter " + std::to_string(playerCount) + ": \n\n");
    for (int InputNames = 0; InputNames < playerCount; InputNames++){
        typeD("Player " + std::to_string(InputNames + 1) + ": ");
        getline(std::cin, playerNames[InputNames]);
    }
    playerVictim();
}

void amongUs::playerVictim(){
    int player = 0;
    std::string playerName = playerNames[player];

    int imposterRand = rand() % playerCount;
    std::string imposterName = playerNames[imposterRand];

    int victimRand = rand() % playerCount;
    std::string victimName = playerNames[victimRand];

    if (imposterName == victimName){
        victimRand = rand() % playerCount;
        victimName = playerNames[victimRand];
    }
    while (gameRunning){
        if (playerCount <= 0){
            system("cls");
            typeD("The imposter killed all players...\n");
            typeD("\n\nYou lose.");
            gameQuit();
            return;
        }

        system("cls");

        if (playerCount <= 2 && imposterName == playerName){
            system("cls");
            typeD(imposterName + " is the imposter!\n\n");
            Sleep(500);
            typeD("You won!");
            gameQuit();
            break;
        }

        typeD("Guess the Imposter:\n\n");
        for (int ListOfPlayers = 0; ListOfPlayers < playerCount; ListOfPlayers++){
            typeD("Player " + std::to_string(ListOfPlayers + 1) + ": " + playerNames[ListOfPlayers]);
            std::cout << "\n";
        }
        typeD("The imposter is " + imposterName + ".\n");
        typeD("\nEnter your guess: ");
        std::string guessName;
        std::getline(std::cin, guessName);

        bool nameExist = false;
        for(const std::string& FindingName : playerNames){
            if (FindingName == guessName){
                nameExist = true;
                break;
            }
        }
        if (!nameExist){
            system("cls");
            typeD("Invalid choice.");
            Sleep(500);
            continue;
        }


        if (guessName == playerName) {

            system("cls");
            typeD("You cannot eliminate yourself...");
            Sleep(500);
            continue;
        }

        system("cls");

        typeD("Player " + guessName + " ejected to space...");
        Sleep(500);

        if (guessName != imposterName){
            typeD("\n\nPlayer " + guessName + " is not the imposter.\n");
            Sleep(500);
            for (int FindToRemove = 0; FindToRemove < playerCount; FindToRemove++){
                if(playerNames[FindToRemove] == guessName){
                    for (int FoundAndRemove = FindToRemove; FoundAndRemove < playerCount - 1; FoundAndRemove++){
                        playerNames[FoundAndRemove] = playerNames[FoundAndRemove + 1];
                    }
                }
            }
            playerNames.pop_back();
            playerCount--;
        } else {
            system("cls");
            typeD("You have eliminated the imposter!!!\n\n");
            Sleep(500);
            typeD("Gz! You won the game!");
            Sleep(200);
            gameQuit();
            break;
        }

        int imposterKill = rand() % playerCount;
        std::string imposterKillName = playerNames[imposterKill];

        if (imposterName == imposterKillName){
            imposterKill = rand() % playerCount;
            imposterKillName = playerNames[imposterKill];
        } else if (imposterKillName == playerName) {
            if(playerCount == 2) {
                imposterKill = rand() % playerCount;
                imposterKillName = playerNames[imposterKill];
            }
            system("cls");
            typeD("The imposter have killed you...\n\n\n");
            Sleep(500);
            typeD("You lost.");
            Sleep(500);
            gameQuit();
            break;
        } else {
            system("cls");
            typeD("The imposter killed " + imposterKillName + "...");
            Sleep(500);
            for (int FindToRemove = 0; FindToRemove < playerCount; FindToRemove++){
                if(playerNames[FindToRemove] == guessName){
                    for (int FoundAndRemove = FindToRemove; FoundAndRemove < playerCount - 1; FoundAndRemove++){
                        playerNames[FoundAndRemove] = playerNames[FoundAndRemove + 1];
                    }
                }
            }
            playerNames.pop_back();
            playerCount--;
        }
    }
}

void amongUs::gameMain(){
    char action;
    bool game = true;
    while (game) {
    system("cls");
    std::cout << "=============================================\n";
    typeD("     Welcome to C++ text based Among Us\n");
    std::cout << "=============================================\n\n\n";
    typeD("Would you like to player?(y/n): ");
    std::cin >> action;
    switch (action) {
            case 'y': system("cls"); playerInputCount();  game = false; break;
            case 'n': system("cls"); typeD("This game is not for the weak minded."); Sleep(300); game = false; break;
            default: system("cls"); typeD("Invalid choice."); Sleep(500); break;
    }
    }
}
