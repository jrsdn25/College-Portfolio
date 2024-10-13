#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double math,scie,fil,eng,phyed,socstudy,arts,result,total;
    string Fullname;
    cout<<"============================"<<"\n";
    cout<<"   Simple Grading System"<<"\n";
    cout<<"============================"<<"\n";
    cout<<"Enter Full name: \n\*Enter last name first. e.g: Doe, John O.\* "<<"\n";
    getline (cin, Fullname);
    cout<<"============================"<<"\n";
    cout<<"Math: ";
    cin>>math;
    cout<<"Science: ";
    cin>>scie;
    cout<<"Filipino: ";
    cin>>fil;
    cout<<"English: ";
    cin>>eng;
    cout<<"P.E.: ";
    cin>>phyed;
    cout<<"Social Studies: ";
    cin>>socstudy;
    cout<<"Arts: ";
    cin>>arts;
    cout<<"============================"<<"\n";
    result = math+scie+fil+eng+phyed+socstudy+arts;
    total = result / 7;
    total = round(total*100) / 100.0;
    PassFail=(total>=75)?"Grade PASSED!":"Grade FAILED.";
    cout<<"\n";
    cout<<"============================"<<"\n";
    cout<<Fullname<<"\n";
    cout<<"============================"<<"\n";
    cout<<"Math: "<<math<<"\n";
    cout<<"Science: "<<scie<<"\n";
    cout<<"Filipino: "<<fil<<"\n";
    cout<<"English: "<<eng<<"\n";
    cout<<"P.E: "<<phyed<<"\n";
    cout<<"Social Studies: "<<socstudy<<"\n";
    cout<<"Arts: "<<arts<<"\n";
    cout<<"============================"<<"\n";
    cout<<"Overall Grade: "<<total<<"\n";
    cout<<PassFail<<"\n";
    cout<<"============================";
    return 0;
}
