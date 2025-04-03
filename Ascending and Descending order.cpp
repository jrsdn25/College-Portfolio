#include <iostream>
#include <vector>
#include <set>



int main()
{
    int numberCount;
    int numberHolder;
    std::set<int> numbers;

    std::cout << "Enter number count: ";
    std::cin >> numberCount;

    system("cls");

    std::cout << "Enter " << numberCount << " numbers:\n";
    for(int a = 0; a < numberCount; a++){
        std::cout << "Number " << a + 1 << " :";
        std::cin >> numberHolder;
        numbers.insert(numberHolder);
    }

    system("cls");

    char AD;

    std::cout << "Display in Ascending or Descending order? (A/D): ";
    std::cin >> AD;
    AD = toupper(AD);

    switch (AD){
    case 'A':
        for(int display : numbers){
            std::cout << display << std::endl;
        }
        break;
    case 'D':
        {
        std::set<int, std::greater<int>> numbersDescending(numbers.begin(), numbers.end());
        for (int disp : numbersDescending){
            std::cout << disp << std::endl;
        }
        }
        break;
    default:
        std::cout << "Invalid";
        system("cls");
        break;
    }

    return 0;


}
