#include <iostream>
#include <string>

using namespace std;

const string DEFAULT_PASS = "ADMIN";
const string DEFAULT_USER = "Guce";

int main()
{
    string UserInput;
    string PassInput;
    int LogAttempt=0;
    do {
        cout<<"Enter Username: ";
        cin>>UserInput;
        cout<<"Enter Password: ";
        cin>>PassInput;
        if (UserInput == DEFAULT_USER && PassInput == DEFAULT_PASS) {
            cout<<" "<<endl;
            cout<<"Welcome Master!";
            break;
        } else {
            LogAttempt++;
            cout<<"Incorrect Password! Login Attempts "<<LogAttempt<<"of 5"<<endl;
            cout<<" "<<endl;
        }
        }   while (LogAttempt<5);
            if (LogAttempt == 5) {
                cout<<"Account has been Locked!";
        }
        return 0;
}
