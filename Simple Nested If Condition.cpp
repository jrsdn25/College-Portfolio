#include <iostream>
#include <string>

using namespace std;

int main()
{
    string User ="Dane", Password = "ADMIN", UserUser, UserPass;
    cout<<"Enter Username: ";
    cin>>UserUser;
    cout<<"Enter Password: ";
    cin>>UserPass;
    if (UserUser == User && UserPass == Password) {
        cout<<"Welcome Boss Pogi Mapagmahal"<<endl;
        cout<<"Please Enter Grades: "<<endl;
        int sub1,sub2,sub3,sub4,sub5, ave, total;
        cout<<"Enter Fundamentals of Programming: ";
        cin>>sub1;
        cout<<"Enter Introduction to Computing: ";
        cin>>sub2;
        cout<<"Enter Living in the IT Era: ";
        cin>>sub3;
        cout<<"Mathematics in the Modern World: ";
        cin>>sub4;
        cout<<"Art Appreciation: ";
        cin>>sub5;
        ave = sub1 + sub2 + sub3 + sub4 + sub5;
        total = ave / 5;
        cout<<"Average: "<<total<<endl;
        if (total > 100) {
            cout<<"Invalid Grade:";
        } else if (total>=90 && total <= 100) {
            cout<<"You did an EXCELLENT job!!"<<endl;
        } else if (total >= 84 && total <= 89) {
            cout<<"You did a GREAT job!!"<<endl;
        } else if (total >= 75 && total <= 83) {
            cout<<"You did a GOOD job!"<<endl;
        } else {
            cout<<"Do you best next time.";
        }
        }else {
        cout<<"INVALID!!";
    }
    return 0;
}
