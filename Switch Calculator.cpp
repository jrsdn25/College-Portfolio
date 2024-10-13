#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout<<"Enter 1st numbers: ";
    cin>>num1;
    cout<<"Enter 2nd numbers: ";
    cin>>num2;
    cout<<"Choose operation (+, -, *, /): ";
    cin>>operation;

    switch(operation) {
        case '+':cout<<"Result: "<<num1+num2;
        break;
        case '-':cout<<"Result: "<<num1-num2;
        break;
        case '*':cout<<"Result: "<<num1*num2;
        break;
        case '/':cout<<"Result: "<<num1/num2;
        break;
        default:cout<<"Invalid operation.";
    }
    return 0;
}
