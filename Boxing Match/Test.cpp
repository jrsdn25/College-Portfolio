#include "Test.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <windows.h>

punch::punch(){
    gameRun = true;
    srand(time(0));
}

void punch::gameGame(){
    int cToDamage = 10;
    int pToDamage = 10;

    char action;
    while(gameRun){
        std::cout << "\n\n\n";

        int computerAction = rand() % 3 + 1;

        bool actionReroll;

        if (computer.getComputerHP() > 45){

            actionReroll = true;

        while(actionReroll){

            if(computerAction != 1){
                computerAction = rand() % 3 + 1;
            } else {
                actionReroll = false;
            }
            break;

        }
        }

        if (player.getPlayerHP() <= 0){
            system("cls");
            std::cout << "Player is defeated...";
            gameRun = false;
            break;
        } else if (computer.getComputerHP() <= 0){
            system("cls");
            std::cout << "The computer is knocked out!!!\n\n\n";
            std::cout << "You won!";
            gameRun = false;
            break;
        }

        player.displayHP();
        computer.displayHP();
        std::cout << "\n\n\nChoose an action:\n";
        std::cout << "1. Punch (10 Damage)\n";
        std::cout << "2. Rest (+8 Health)\n";
        std::cout << "3. Block (-5 Damage)\n";
        std::cout << "Action: ";
        std::cin >> action;
        switch(action){
            case '1':
                system("cls");
                player.playerPunch();
                if (computerAction != 3){
                    computer.takeDmg(10);
                } else {
                    break;
                }
                Sleep(400);
                break;
            case '2': system("cls"); player.playerRest(); Sleep(400); break;
            case '3': system("cls"); std::cout << "The Player is in defense position!\n\n"; Sleep(400); break;
            default: system("cls"); std::cout << "Invalid action."; Sleep(300); system("cls"); continue;
        }

            if(computerAction == 1){
            computer.computerPunch();
            if (action == '3'){
                int reduceDamage = player.playerBlock(cToDamage);
                player.takeDmg(reduceDamage);
            } else {
                player.takeDmg(10);
            }
            Sleep(400);
        } else if (computerAction == 2){
            computer.computerRest();
            Sleep(400);
        } else if (computerAction == 3){
            std::cout << "\nThe computer is in defense position!\n";
            if(action == '1'){
                int reduceDamage = computer.computerBlock(pToDamage);
               computer.takeDmg(reduceDamage);
            }
            Sleep(400);
        }

    }
}
