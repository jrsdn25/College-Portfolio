#include <iostream>
#include <unistd.h>



using namespace std;



int main() {



    string username;


    string password;


    string correctUsername;


    string correctPassword;


    string confirmPw = "";


    string checkUsername;


    string temporarilyHoldAnsForHasAccount;


    string temporarilyHoldAnsForIsUnsure;


    string currentPassword;


    string newPassword;


    string confirmNewPassword;


    int confirmLoan;


    bool hasAccount= 0;


    bool isUnsure = 1;


    bool isLoggedIn = 0;




    int remainingAttempts = 3;

    int numForCase;

    double Loan = 0;
    int numLoan;
    int renewLoan;
    double payLoan;
    int applyLoan;
    double personalLoan = 0.1;
    double homeLoan = 0.07;
    double autoLoan = 0.05;
    double businessLoan = 0.06;
    double studentLoan = 0.01;
    int chooseLoan;
    int chosenLoan;
    int successLoan;
    double interestLoan;

    int amount;

    int balance = 0;

    int numCaseForAccountSetting;

    string continuePwChange = "0";

    string backToMainMenu = "1";

    bool runBanking = 1;

    bool continueAccountDeletion;

    bool exitWithdraw = 0;

    int numOfTransactions;

    int subtractFromBalance;





   while (hasAccount == 0) {




    cout<<"------------------------------------------WELCOME TO OUR BANKING SYSTEM------------------------------------------"<<endl;



    cout<<"Do you already have an account with us? Please enter 1 if yes while 0 if no: ";



    cin>>temporarilyHoldAnsForHasAccount;


    cout<<endl;





        while(temporarilyHoldAnsForHasAccount != "1" & temporarilyHoldAnsForHasAccount != "0") {





            cout<<"Please enter 1 if you already have an account with us and 0 if no.";


            cout<<endl;


            cout<<endl;


            cin>>temporarilyHoldAnsForHasAccount;


            cout<<endl;




            if (temporarilyHoldAnsForHasAccount == "1") {



                    hasAccount = 1;



            } else if (temporarilyHoldAnsForHasAccount == "0") {


                hasAccount = 0;


                 isUnsure = 1;



            }




        }



        if (temporarilyHoldAnsForHasAccount == "1") {



                hasAccount = 1;



        } else if (temporarilyHoldAnsForHasAccount == "0") {



            hasAccount = 0;


            isUnsure = 1;



            //cout<<"0 has been assigned"<<"isUnsure is : "<<isUnsure<<"hasAccount is: "<<hasAccount<<endl;



        } else{


            cout<<"debug: hasAccount has no value"<<endl;

        }



        while (hasAccount== 1) {



            cout<<"Enter username: ";


            cin>>checkUsername;


            cout<<endl;


            cout<<endl;




            cout<<"Unfortunately, no such account exists. Are you sure you already have an account with us? Please enter 1 if yes while 0 if no. ";





            cin>>temporarilyHoldAnsForHasAccount;


            cout<<endl;






                while(temporarilyHoldAnsForHasAccount != "1" && temporarilyHoldAnsForHasAccount != "0") {





                    cout<<"Please enter 1 if you already have an account with us and 0 if no.";


                    cout<<endl;


                    cout<<endl;



                    cin>>temporarilyHoldAnsForHasAccount;


                    cout<<endl;






                        if (temporarilyHoldAnsForHasAccount == "1") {



                                hasAccount = 1;



                        } else if (temporarilyHoldAnsForHasAccount == "0") {



                            hasAccount = 0;


                             isUnsure = 1;



                        }



                }






        if (temporarilyHoldAnsForHasAccount == "1") {



                hasAccount = 1;



        } else if (temporarilyHoldAnsForHasAccount == "0") {



            hasAccount = 0;


            isUnsure = 1;





        }




    }



//    if (hasAccount == 0) {


//


//        while (isUnsure == 1) {


//




        while (hasAccount == 0 && hasAccount ^ isUnsure == 1) {




            cout<<"------------------------------------------------------REGISTRATION------------------------------------------"<<endl;


            cout<< endl;




            cout<<"To register for an account, please provide the following information: "<<endl;


            cout<<endl;


            cout<<endl;


            cout<<"Username: ";


            cin>>correctUsername;


            cout<<endl;


            cout<<endl;



            cout<<"Password: ";


            cin>>correctPassword;


            cout<<endl;


            cout<<endl;



            cout<<"Confirm password: ";


            cin>>confirmPw;


            cout<<endl;


            cout<<endl;





                while (correctPassword!=confirmPw) {




                    cout<<"Your password and the password you entered for confirmation do not align. Please try again.";


                    cout<<endl;


                    cout<<endl;




                    cout<<"Password: ";


                    cin>>correctPassword;


                    cout<<endl;


                    cout<<endl;



                    cout<<"Confirm password: ";


                    cin>>confirmPw;


                    cout<<endl;


                    cout<<endl;





                }




                cout<<"Is there something that you would like to be changed? Please enter 1 if yes and 0 if no. ";



                cin>>temporarilyHoldAnsForIsUnsure;


                cout<<endl;




                while(temporarilyHoldAnsForIsUnsure != "1" && temporarilyHoldAnsForIsUnsure != "0") {





                    cout<<"Please enter 1 if you would like to change something and 0 if no.";



                    cin>>temporarilyHoldAnsForIsUnsure;


                    cout<<endl;






                    if (temporarilyHoldAnsForIsUnsure == "1") {



                            isUnsure = 1;



                    } else if (temporarilyHoldAnsForIsUnsure == "0") {



                        isUnsure = 0;


                        hasAccount = 1;



                    }



                }




                if (temporarilyHoldAnsForIsUnsure == "1") {



                            isUnsure = 1;



                    } else if (temporarilyHoldAnsForIsUnsure == "0") {



                        isUnsure = 0;


                        hasAccount = 1;



                    }




        }



    //}


    //end of while has account= 0





    cout << "------------------------------------------LOG IN------------------------------------------" << endl;


    cout << endl;


    //cout<<"0 has been assigned"<<"isUnsure is : "<<isUnsure<<"hasAccount is: "<<hasAccount<<endl;



            for (int i= 0; i <= 3; i++) {



                       cout << "Please enter your username: ";


                       cin>>username;


                       cout<<endl;


                       cout<<endl;



                       cout << "Please enter your password: ";


                       cin>>password;


                       cout<<endl;


                       cout<<endl;



                    if (username != correctUsername | password!= correctPassword) {



                       int a = 3;



                       cout<<"Your username or password is incorrect. Please try again."<<endl;


                       cout << endl;


                       cout<<endl;


                       cout<<"Remaining attempts: "<<a-i;


                       cout << endl;


                        cout << endl;




                       } else {



                             cout<<"Successfully logged in.";



                       isLoggedIn = 1;


                       runBanking = 1;


                       backToMainMenu = "1";



                       break;





                       }


            }




                       //else {










                            while (runBanking == 1) {




                                    while(backToMainMenu == "1") {



                                    cout<<endl;


                                    cout<<endl;



                                    cout << "------------------------------------------Bank Menu------------------------------------------" << endl;


                                    cout << "1. Check Balance" << endl;


                                    cout << "2. Deposit Money" << endl;


                                    cout << "3. Withdraw Money" << endl;


                                    cout << "4. Appy for a Loan" << endl;


                                    cout << "5. Exit" << endl;


                                    cout << "6. Account Settings"<<endl;


                                    cout << "Enter your choice: "<<endl;


                                    cin >> numForCase;



                                    switch (numForCase) {

//                                        case 0:

//                                        break;

                                        case 1://balance

                                            cout << "Your current balance is: " << balance << endl;

                                            cout<<endl;

                                            break;



                                        case 2://deposit

                                            cout << "Enter amount to deposit: ";

                                            cout<<endl;

                                            cin >> amount;



                                            if (amount > 0) {

                                                balance += amount;

                                                cout << "You deposited " << amount << ". New balance: " << balance << endl;

                                                cout<<endl;



                                            } else {

                                                cout << "Invalid amount." << endl;

                                                cout<<endl;

                                            }

                                            break;


                                        case 3://withdraw

                                            while(exitWithdraw == 0) {

                                            cout << "Enter amount to withdraw: ";

                                            cin >> amount;

                                            cout<<endl;

                                            cout<<endl;

                                           numOfTransactions=  amount/1000;

                                            subtractFromBalance = balance - amount - 18 * numOfTransactions;

                                            if ((amount > 0 && amount <= 10000) && (subtractFromBalance >= 0)) {


                                                if (numOfTransactions < 1) {

                                                    numOfTransactions= 1;

                                                }

                                                balance = subtractFromBalance;


                                                cout << "You withdrew " << amount << ". New balance: " << balance << endl;

                                                cout<<endl;

                                                exitWithdraw = 1;



                                            } else if (amount > 10000) {

                                                cout<<"You may only withdraw a maximum of P10,000 per transaction. "<<endl;

                                                cout<<endl;



                                            } else if (!(subtractFromBalance >= 0)) {

                                                cout<<"There must be at least P18 left in your balance which would be taken as transaction charge. "<<endl;

                                                cout<<endl;

                                                cout<<endl;

                                            } else if (balance<amount ) {

                                                cout << "Insufficient balance. Please check your balance. " << endl;

                                                cout<<endl;

                                                cout<<endl;

                                            }

                                            else {

                                                cout << "Invalid amount." << endl;

                                                cout<<endl;

                                            }

                                           //break;

                                            }

                                             break;

                                        case 4: // Loan
                                            cout << endl;
                                            cout << "Welcome! This is our Loan System" << endl;
                                            cout << "Do you have an existing Loan? " << endl;
                                            cout << "1. Yes\n2. No\nChoice:";
                                            cin >> confirmLoan;

                                            if (confirmLoan == 1) {
                                                cout << "==========Loan system=========" << endl;
                                                cout << "1. Pay" << endl;
                                                cout << "2. Apply for a Loan" << endl;
                                                cout << "Choice: ";
                                                cin >> numLoan;

                                                if (numLoan == 1) { // Pay
                                                    if (Loan >= 1) {
                                                        cout << "Enter amount: ";
                                                        cin >> payLoan;

                                                        if (payLoan < 0) {
                                                            cout << "Incorrect amount." << endl;
                                                        } else if (payLoan > Loan) {
                                                            cout << "Incorrect amount." << endl;
                                                        } else {
                                                            Loan -= payLoan;
                                                            cout << "Your current Loan amount: " << Loan << endl;
                                                        }

                                                        if (Loan == 0) {
                                                            cout << "You have successfully paid your Loan!" << endl;
                                                        }
                                                        } else if (Loan == 0) {
                                                            cout << "You do not have an existing Loan." << endl;
                                                    }
                                                }
                                            } else if (numLoan == 2 | confirmLoan == 2) {
                                                cout << "We would like to present to you our new Loan System." << endl;
                                                cout << "We're offering multiple purpose Loans!" << endl;
                                                cout << "Would you like to apply for a Loan?" << endl;
                                                cout << "1. Yes\n2. No\nChoice: ";
                                                cin >> applyLoan;

                                                if (applyLoan == 1) {
                                                    cout << "We will check your information for a moment. Please wait";
                                                    for (int i = 0; i < 5; i++) {
                                                        cout << ".";
                                                        cout.flush();
                                                        sleep(1);
                                                    }
                                                    cout << "Done!" << endl;
                                                    cout << "You are qualified for our Loan service!" << endl;
                                                    cout << "\n \n \n";
                                                    cout << "==========Loans==========\n";
                                                    cout << "1. Personal Loan \n";
                                                    cout << "2. Home Loan \n";
                                                    cout << "3. Auto Loan \n";
                                                    cout << "4. Business Loan \n";
                                                    cout << "5. Student Loan \n";
                                                    cin >> chooseLoan;

                                                    switch (chooseLoan) {

                                                    case 1:
                                                        if (chooseLoan == 1) {
                                                            cout << "Personal Loan. \n";
                                                            cout << "General use like emergencies, travel, or debt consolidation. \n";
                                                            cout << "We have the lowest interest rate of 1%! \n";
                                                            cout << "Would you like to continue?\n";
                                                            cout << "1. Yes\n2. No\nChoice: ";
                                                            cin >> chosenLoan;
                                                                if (chosenLoan == 1) {
                                                                    cout << "We can offer you P10,000 up to 2 million pesos!\n";
                                                                    cout << "Please enter loan amount: ";
                                                                    cin >> Loan;
                                                                    interestLoan = Loan * personalLoan;
                                                                    if (Loan < 10000 && Loan >2000000) {
                                                                        cout << "Invalid amount \n";
                                                                    }
                                                                    cout << "You'll have an interest of "<< interestLoan << " and total of: " << interestLoan + Loan << endl;
                                                                    cout << "Would you like to proceed?\n";
                                                                    cout << "1. Yes\n2. No\nChoice: ";
                                                                    cin >> successLoan;
                                                                        if (successLoan == 1) {
                                                                            cout << "Thank you for using our Loan system services!\n";
                                                                        } else if (successLoan == 2) {
                                                                            cout << "Thank you for taking an interest on our Loan system!\n";
                                                                            } else {
                                                                                cout << "Invalid transaction." << endl;
                                                                                break;
                                                                                 }
                                                                } else if (chosenLoan == 2) {
                                                                    cout << "Thank you for taking an interest on our Loan system!\n";
                                                                }
                                                            }
                                                    case 2:
                                                        if (chooseLoan == 2) {
                                                            cout << "Home Loan. \n";
                                                            cout << "Purchasing property, renovation, and refinancing. \n";
                                                            cout << "We have the lowest interest rate of 7%! \n";
                                                            cout << "Would you like to continue?\n";
                                                            cout << "1. Yes\n2. No\nChoice: ";
                                                            cin >> chosenLoan;
                                                                if (chosenLoan == 1) {
                                                                    cout << "We can offer you a minimum of P500,000.\n";
                                                                    cout << "Please enter loan amount: ";
                                                                    cin >> Loan;
                                                                    if (Loan < 500000) {
                                                                        cout << "Invalid amount\n";
                                                                    }
                                                                    interestLoan = Loan * homeLoan;
                                                                    cout << "You'll have an interest of "<< interestLoan << " and total of: " << interestLoan + Loan << endl;
                                                                    cout << "Would you like to proceed?\n";
                                                                    cout << "1. Yes\n2. No\nChoice: ";
                                                                    cin >> successLoan;
                                                                        if (successLoan == 1) {
                                                                            cout << "Thank you for using our Loan system services!\n";
                                                                        } else if (successLoan == 2) {
                                                                            cout << "Thank you for taking an interest on our Loan system!\n";
                                                                            } else {
                                                                                cout << "Invalid transaction." << endl;
                                                                                break;
                                                                                 }
                                                                } else if (chosenLoan == 2) {
                                                                    cout << "Thank you for taking an interest on our Loan system!\n";
                                                                }
                                                            }

                                                        case 3:
                                                            if (chooseLoan == 3) {
                                                            cout << "Auto Loan. \n";
                                                            cout << "Buying new or used vehicle. \n";
                                                            cout << "We have the lowest interest rate of 5%! \n";
                                                            cout << "Would you like to continue?\n";
                                                            cout << "1. Yes\n2. No\nChoice: ";
                                                            cin >> chosenLoan;
                                                                if (chosenLoan == 1) {
                                                                    cout << "We can offer you a minimum of P500,000.\n";
                                                                    cout << "Please enter loan amount: ";
                                                                    cin >> Loan;
                                                                    if (Loan < 1) {
                                                                        cout << "Invalid amount\n";
                                                                    }
                                                                    interestLoan = Loan * autoLoan;
                                                                    cout << "You'll have an interest of "<< interestLoan << " and total of: " << interestLoan + Loan << endl;
                                                                    cout << "Would you like to proceed?\n";
                                                                    cout << "1. Yes\n2. No\nChoice: ";
                                                                    cin >> successLoan;
                                                                        if (successLoan == 1) {
                                                                            cout << "Thank you for using our Loan system services!\n";
                                                                        } else if (successLoan == 2) {
                                                                            cout << "Thank you for taking an interest on our Loan system!\n";
                                                                            } else {
                                                                                cout << "Invalid transaction." << endl;
                                                                                break;
                                                                                 }
                                                                } else if (chosenLoan == 2) {
                                                                    cout << "Thank you for taking an interest on our Loan system!\n";
                                                                }
                                                            }

                                                        case 4:
                                                            if (chooseLoan == 4) {
                                                            cout << "Business Loan. \n";
                                                            cout << "For starting or expanding a business. \n";
                                                            cout << "We have the lowest interest rate of 6%! \n";
                                                            cout << "Would you like to continue?\n";
                                                            cout << "1. Yes\n2. No \nChoice: ";
                                                            cin >> chosenLoan;
                                                                if (chosenLoan == 1) {
                                                                    cout << "We can offer you a maximum of 2 million pesos! \n";
                                                                    cout << "Please enter loan amount: ";
                                                                    cin >> Loan;
                                                                    if (Loan > 2000000) {
                                                                        cout << "Invalid amount \n";
                                                                    }
                                                                    interestLoan = Loan * businessLoan;
                                                                    cout << "You'll have an interest of "<< interestLoan << " and total of: " << interestLoan + Loan << endl;
                                                                    cout << "Would you like to proceed?\n";
                                                                    cout << "1. Yes\n2. No\nChoice: ";
                                                                    cin >> successLoan;
                                                                        if (successLoan == 1) {
                                                                            cout << "Thank you for using our Loan system services!\n";
                                                                        } else if (successLoan == 2) {
                                                                            cout << "Thank you for taking an interest on our Loan system!\n";
                                                                            } else {
                                                                                cout << "Invalid transaction." << endl;
                                                                                break;
                                                                                 }
                                                                } else if (chosenLoan == 2) {
                                                                    cout << "Thank you for taking an interest on our Loan system!\n";
                                                                }
                                                            }

                                                        case 5:
                                                            if (chooseLoan == 5) {
                                                            cout << "Student Loan.\n";
                                                            cout << "Tuition and education-related expense\n";
                                                            cout << "We have the lowest interest rate of 1%!\n";
                                                            cout << "Would you like to continue?\n";
                                                            cout << "1. Yes\n2. No\nChoice: ";
                                                            cin >> chosenLoan;
                                                                if (chosenLoan == 1) {
                                                                    cout << "We can offer you a maximum of P500,000!\n";
                                                                    cout << "Please enter loan amount: ";
                                                                    cin >> Loan;
                                                                    if (Loan > 500000) {
                                                                        cout << "Invalid amount\n";
                                                                    }
                                                                    interestLoan = Loan * studentLoan;
                                                                    cout << "You'll have an interest of "<< interestLoan << " and total of: " << interestLoan + Loan << endl;
                                                                    cout << "Would you like to proceed? \n";
                                                                    cout << "1. Yes\n2. No\nChoice: ";
                                                                    cin >> successLoan;
                                                                        if (successLoan == 1) {
                                                                            cout << "Thank you for using our Loan system services!\n";
                                                                        } else if (successLoan == 2) {
                                                                            cout << "Thank you for taking an interest on our Loan system!\n";
                                                                            } else {
                                                                                cout << "Invalid transaction." << endl;
                                                                                break;
                                                                                 }
                                                                } else if (chosenLoan == 2) {
                                                                    cout << "Thank you for taking an interest on our Loan system!\n";
                                                                }
                                                            }

                                                            }
                                             } else {
                                                cout << "Invalid transaction." << endl;
                                                }
                                             }

                                        case 5://end


                                            cout << "Thank you for using this Bank. Bye Bye!" << endl;

                                            cout<<endl;

                                            return 0;

                                            break;


                                        case 6:

                                            cout <<"Account Settings"<<endl;

                                            cout << "" << endl;

                                            cout << "1. Password Change" << endl;

                                            cout<<"2. Deactivate Account"<<endl;

                                            cout<<"Please enter the number of your choice.";

                                            cin>>numCaseForAccountSetting;

                                            cout<<endl;

                                            cout<<endl;


                                            switch(numCaseForAccountSetting) {



                                            case 1: //Password change

                                                do {

                                                        cout<<"Please enter your current password: ";

                                                cin>>currentPassword;

                                                cout<<endl;

                                                cout<<endl;


                                                 cout << "Please enter your new password: ";

                                                   cin>>newPassword;

                                                   cout<<endl;

                                                   cout<<endl;

                                                   cout << "Please confirm your new password: ";

                                                   cin>>confirmNewPassword;

                                                   cout<<endl;

                                                   cout<<endl;

                                                if (currentPassword != correctPassword) {

                                                   cout<<"The current password you entered is invalid. Please enter 1 to try again and 0 to exit."<<endl;

                                                   cin>>continuePwChange;

                                                   if (continuePwChange != "1" && continuePwChange != "0" ) {

                                                       cout<<"Please type 1 to continue changing your password while 0 to cancel it. "<<endl;

                                                       cout<<endl;

                                                        cin>>continuePwChange;

                                                        cout<<endl;

                                                        cout<<endl;

                                                   }

                                                   if (continuePwChange == "0") {

                                                        numForCase = 0;
                                                   }

                                                   } else {

                                                       if (newPassword == confirmNewPassword) {

                                                            correctPassword = confirmNewPassword;

                                                            cout<<"Successfully changed your password."<<endl;

                                                            continuePwChange = "0";

                                                       } else {

                                                           cout<<"Your new password and the one you entered to confirm it do not match. "<<endl;

                                                           cout<<endl;

                                                           cout<<endl;

                                                           continuePwChange ="1";

                                                       }

                                            }

                                                } while (continuePwChange == "1");

                                                break;

                                                case 2:

                                                    for ( int i= 3; i > 0; i--) {

                                                    cout<<"For authentication purposes, please enter the username and password of the account you would like to delete. "<<endl;

                                                    cout<<endl;

                                                    cout << "Username: ";

                                                    cin>>username;

                                                    cout<<endl;

                                                    cout<<endl;

                                                    cout << "Password: ";

                                                    cin>>password;

                                                    cout<<endl;

                                                    cout<<endl;


                                                            if (username != correctUsername || password!= correctPassword) {

                                                               cout<<"Your username or password is incorrect. Please try again."<<endl;

                                                               cout << endl;

                                                               cout<<endl;

                                                               cout<<"Remaining attempts: "<<i;

                                                               cout << endl;

                                                               cout << endl;

                                                               } else {

                                                                   correctPassword = " ";

                                                                   correctUsername = " ";

                                                                   hasAccount = 0;

                                                                   runBanking = 0;

                                                                   backToMainMenu = "0";

                                                                   cout<<"Successfully deleted your account!"<<endl;

                                                                   cout << endl;

                                                                   break;

                                                               }


                                                    }

                                                    break;

                                        default:

                                            cout << "There seems to be a problem with the system right now. Please contact the customer service and ask for help." << endl;

                                    }


                                    break; //for case 5. account setting


                                }

                                                   }

                            }

                        //} else once insidw for loop in beginning of log in

            if (isLoggedIn!= 1) {

                cout<<"Too many attempts. Please try again later.";

            }

//} for loop after log in

   }

       //return 0;

}

