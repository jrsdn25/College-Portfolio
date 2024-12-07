#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{

    string username, password, correctUsername;

    string correctPassword;

    string confirmPw = "";

    string checkUsername;

    string temporarilyHoldAnsForHasAccount;

    string temporarilyHoldAnsForIsUnsure;

    string currentPassword;

    string newPassword;
    string confirmNewPassword;

    int confirmLoan;

    bool hasAccount = 0;

    int isUnsure = 1;

    bool isLoggedIn = 0;

    int remainingAttempts = 3;

    int numForCase;

    double Loan = 0;

    float MyArray[] = {0.02, 0.07, 0.05, 0.03, 0.01};

    int chooseLoan;

    int amount;

    int balance = 0;

    int numCaseForAccountSetting;

    string continuePwChange = "0";

    string backToMainMenu = "1";

    bool runBanking = 1;

    bool exitWithdraw = 0;

    int subtractFromBalance;

    char loanTerm;

    double monthlyPayment;

    double monthlyInterest;

    int exponent;

    int finalizeLoan;

    double totalLoan;

    float typeOfLoan;

    bool isWithinLoanRange = 0;

    int varForRightShift = 16;

    bool exitReg = 0;

    int modulusAmount;

    double totalToBeReturned;

    bool exitConfirmPass;


    while (hasAccount == 0) //buong code
    {

        cout << fixed; // shown as decimal not scientifi c
        cout << setprecision(2); // num of numbers after decimal point

        cout << "------------------------------------------WELCOME TO OUR BANKING SYSTEM------------------------------------------" << endl;

        cout << "Do you already have an account with us? Please enter 1 if yes while 0 if no: ";

        cin >> hasAccount;

        cout << endl;

        while (cin.fail())
        {
            cin.clear(); //since if cin is in failed state, next ci  cant be run
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number.";
            cin >> hasAccount;
        }

        while (hasAccount == 1) //designed to make user say they habe no account
        {

            cout << endl;

            cout << "Enter username: ";

            cin >> checkUsername;

            cout << endl;

            cout << endl;

            cout << "Unfortunately, no such account exists. Are you sure you already have an account with us? Please enter 1 if yes while 0 if no. ";

            cin >> hasAccount;

            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid number.";
                cin >> hasAccount;
            }
        }

        exitReg = 0;

        while (exitReg == 0)
        {

            while (!(hasAccount) && hasAccount ^ isUnsure == 1) //hasAcc= 0, isUnsure = 1
            {

                cout << "------------------------------------------------------REGISTRATION------------------------------------------" << endl;

                cout << endl;

                cout << "You can always enter 0 to exit. " << endl;

                cout << "To register for an account, please provide the following information: " << endl;

                cout << endl;

                cout << endl;

                cout << "Username: ";

                cin >> correctUsername;

                if (correctUsername == "0")
                {

                    exitReg = 1;
                    break;
                }

                cout << endl;

                cout << endl;

                cout << "Password: ";

                cin >> correctPassword;

                if (correctPassword == "0")
                {

                    exitReg = 1;
                    break;
                }

                cout << endl;

                cout << endl;

                cout << "Confirm password: ";

                cin >> confirmPw;

                if (confirmPw == "0")
                {

                    exitReg = 1;
                    break;
                }

                cout << endl;

                cout << endl;

                while (correctPassword != confirmPw )
                {

                    cout << "Your password and the password you entered for confirmation do not align. Please try again.";

                    cout << endl;

                    cout << endl;

                    cout << "Password: ";

                    cin >> correctPassword;

                    cout << endl;

                    cout << endl;

                    if (correctPassword == "0")
                    {

                        exitReg = 1;
                        exitConfirmPass =1;
                        break;
                    }

                    cout << "Confirm password: ";

                    cin >> confirmPw;

                    if (confirmPw == "0")
                    {

                        exitReg = 1;
                        exitConfirmPass = 1;
                        break;
                    }

                    cout << endl;

                    cout << endl;


                }

                if (exitConfirmPass == 1) { // if user wants to exit in password confirmation
                    break;
                }

                cout << "Is there something that you would like to be changed? Please enter 1 if yes and 0 if no. ";

                cin >> temporarilyHoldAnsForIsUnsure;

                cout << endl;

                while (temporarilyHoldAnsForIsUnsure != "1" && temporarilyHoldAnsForIsUnsure != "0")//repeatedly ask user until they answer 0 or 1
                {

                    cout << "Please enter 1 if you would like to change something and 0 if no.";

                    cin >> temporarilyHoldAnsForIsUnsure;

                    cout << endl;

                    if (temporarilyHoldAnsForHasAccount == "1")
                    {

                        hasAccount = 0; // ensures hasAcccount is 0 first

                        hasAccount |= 1; // sets hasAccount = 1
                    }
                    else if (temporarilyHoldAnsForHasAccount == "0")
                    {

                        hasAccount = 1; // ensures hasAcccount is 1 first

                        hasAccount &= 0; // this will set hasAccount to 0

                        isUnsure = 0; // ensures isUnsure is 0 first

                        isUnsure ^= 1; // this will set isUnssure to 1

                        exitReg = 0;
                    }
                }

                if (temporarilyHoldAnsForIsUnsure == "1")
                {

                    hasAccount = 0;
                    isUnsure = 1;
                }
                else if (temporarilyHoldAnsForIsUnsure == "0")
                {

                    isUnsure--;

                    hasAccount = 1;

                    exitReg = 0;
                }
            }

            if (exitReg == 1)
            {

                break;
            }

            cout << "------------------------------------------LOG IN------------------------------------------" << endl;

            cout << endl;

            for (int i = 0; i <= 3; i++)
            {

                cout << "Please enter your username: ";

                cin >> username;

                cout << endl;

                cout << endl;

                cout << "Please enter your password: ";

                cin >> password;

                cout << endl;

                cout << endl;

                if (username != correctUsername | password != correctPassword)
                {

                    int a = 3;

                    if (i == 3) {
                        cout << "Your username or password is incorrect." << endl;
                        cout<< endl;

                    } else {

                        cout << "Your username or password is incorrect. Please try again." << endl;

                        cout << endl;

                        cout << endl;

                        cout << "Remaining attempts: " << a - i;

                        cout << endl;

                        cout << endl;




                    }


                }
                else
                {

                    cout << "Successfully logged in.";

                    isLoggedIn = 1;

                    runBanking = 1;

                    backToMainMenu = "1";

                    break;
                }
            }
            if (isLoggedIn != 1)
            {

                cout << "Too many attempts. Please try again later.";
                return 0;
            } else {
                while (runBanking == 1)
                {

                    while (backToMainMenu == "1")
                    {

                        exitWithdraw = 0;
                        isWithinLoanRange = 0;

                        cout << endl;

                        cout << endl;

                        cout << "------------------------------------------Bank Menu------------------------------------------" << endl;

                        cout << "1. Check Balance" << endl;

                        cout << "2. Deposit Money" << endl;

                        cout << "3. Withdraw Money" << endl;

                        cout << "4. Apply for a Loan" << endl;

                        cout << "5. Check Total Loaned Amount" << endl;

                        cout << "6. Account Settings" << endl;

                        cout << "7. Exit" << endl;

                        cout << "Enter your choice: ";

                        cin >> numForCase;
                        
                        while (cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Please enter a valid number.";
                            cin >> numForCase;
                        }

                        cout << endl;
                        cout << endl;

                        switch (numForCase)
                        {

                        case 1: // balance

                            cout << "Your current balance is: " << balance << endl;

                            cout << endl;

                            break;

                        case 2: // deposit

                            cout << "You can enter 0 to exit. You may only enter an amount that ends with 0. Enter amount to deposit: ";

                            cin >> amount;
                            while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Please enter a valid number." << endl;
                                cin >> amount;
                            }

                            cout << endl;
                            cout << endl;

                            modulusAmount = amount;

                            modulusAmount %= 10;

                            if ((amount > 0) && (modulusAmount == 0))
                            {

                                balance += amount;

                                cout << "You deposited " << amount << ". New balance: " << balance << endl;

                                cout << endl;
                            }
                            else if (amount == 0)
                            {
                                break;
                            }
                            else
                            {

                                cout << endl;
                                cout << "Invalid amount." << endl;

                                cout << endl;
                            }

                            break;

                        case 3: // withdraw

                            cout << "A maximum of P10, 000 can be withdrawn in a single transaction and each transaction has a fee of P18. The transaction fee would increase as the number of transactions increase. " << endl;
                            cout << endl;

                            cout << "You can enter 0 to exit. You may only enter an amount that ends with 0. Enter amount to withdraw: ";

                            while (exitWithdraw == 0)
                            {

                                cin >> amount;

                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number.";
                                    cin >> amount;
                                }

                                cout << endl;

                                cout << endl;

                                subtractFromBalance = balance - amount - (18);

                                if ((amount > 0 && amount <= 10000) && (subtractFromBalance >= 0) && (amount % 10 == 0))
                                {

                                    balance = subtractFromBalance;

                                    cout << "You withdrew " << amount << ". New balance: " << balance << endl;

                                    cout << endl;

                                    exitWithdraw = 1;
                                }
                                else if (amount > 10000)
                                {

                                    cout << "You may only withdraw a maximum of P10,000 per transaction. " << endl;

                                    cout << endl;

                                    exitWithdraw = 1;
                                }
                                else if ((amount + 18) > balance)
                                {

                                    cout << "Insufficient balance. Please check your balance. " << endl;

                                    cout << endl;

                                    cout << endl;

                                    exitWithdraw = 1;
                                }
                                else if (amount == 0)
                                {

                                    exitWithdraw = 1;
                                }
                                else if (amount % 10 != 0)
                                {

                                    cout << "You may only enter an amount ending with 0. " << endl;
                                    cout << endl;
                                }

                                else
                                {

                                    cout << endl;
                                    cout << "Invalid amount." << endl;

                                    cout << endl;

                                    exitWithdraw = 1;
                                }
                            }

                            break;

                        case 4: // Loan

                            cout << "\n";
                            cout << endl;
                            cout << "Welcome! This is our Loan System" << endl;
                            cout << "==========Loan system=========" << endl;

                            cout << "We're offering multiple purpose loans." << endl;

                            cout << "\n";
                            cout << "1. Personal Loan. \n";
                            cout << "   General use like emergencies, travel, or debt consolidation. \n";
                            cout << "   Amount that can be loaned: P10,000 - P2,000,000 \n";
                            cout << "   Monthly interest: 2% \n";
                            cout << "\n";

                            cout << "\n";
                            cout << "2. Home Loan. \n";
                            cout << "   For purchasing property or anything home-related. \n";
                            cout << "   Minimum amount for a loan: P500,000 \n";
                            cout << "   Monthly interest: 7% \n";
                            cout << "\n";

                            cout << "\n";
                            cout << "3. Auto Loan. \n";
                            cout << "   For purchasing vehicles. \n";
                            cout << "   Minimum amount for a loan: P100,000 \n";
                            cout << "   Monthly interest: 5% \n";
                            cout << "\n";

                            cout << "\n";
                            cout << "4. Business Loan. \n";
                            cout << "   For business purposes. \n";
                            cout << "   Amount that can be loaned: P100,000 - P1,000,000 \n";
                            cout << "   Monthly interest: 3% \n";
                            cout << "\n";

                            cout << "\n";
                            cout << "5. Student Loan. \n";
                            cout << "   For paying for tuition fees or anything education-related. \n";
                            cout << "   Amount that can be loaned: P10,000 - P300000 \n";
                            cout << "   Monthly interest: 1% \n";

                            cout << "\n";
                            cout << "6. Exit \n";
                            cout << "\n";


                            cin >> chooseLoan;
                            while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << endl;
                                cout << "Invalid input. Please enter a valid number.";
                                cin >> chooseLoan;
                            }

                            switch (chooseLoan)
                            {

                            case 1:

                                typeOfLoan = MyArray[0];


                                cout << "You can enter 0 to exit. Please enter loan amount: ";
                                cin >> Loan;
                                while ((cin.fail()))
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number.";
                                    cin >> Loan;
                                }

                                if (Loan == 0)
                                {

                                    isWithinLoanRange = 0;
                                    break;
                                }
                                else if (Loan >= 10000 & Loan <= 2000000)
                                {

                                    isWithinLoanRange = 1;
                                }
                                else if (Loan < 10000)
                                {
                                    cout << endl;
                                    cout << "Your loan is less than the minimum amount that can be loaned. " << endl;
                                    cout << endl;

                                    isWithinLoanRange = 0;
                                }
                                else if (Loan > 2000000)
                                {

                                    cout << endl;
                                    cout << "Your loan is greater than the maximum amount that can be loaned. " << endl;
                                    cout << endl;
                                    isWithinLoanRange = 0;
                                }
                                else
                                {
                                    cout << "Invalid amount\n";
                                    cout << endl;
                                }

                                break;

                            case 2: // home loan

                                typeOfLoan = MyArray[1];



                                cout << "\n";

                                cout << "You can enter 0 to exit. Please enter loan amount: ";
                                cin >> Loan;
                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number.";
                                    cin >> Loan;
                                }
                                if (Loan == 0)
                                {
                                    isWithinLoanRange = 0;
                                    break;
                                }
                                else if (Loan >= 500000)
                                {

                                    isWithinLoanRange = 1;
                                }
                                else if (Loan < 500000)
                                {
                                    cout << endl;
                                    cout << "Your loan is less than the minimum amount that can be loaned. " << endl;
                                    cout << endl;

                                    isWithinLoanRange = 0;
                                }
                                else
                                {
                                    cout << "Invalid amount\n";
                                    cout << endl;
                                }

                                break;

                            case 3: // autoloan

                                typeOfLoan = MyArray[2];

                                cout << "\n";

                                cout << "You can enter 0 to exit. Please enter loan amount: ";
                                cin >> Loan;
                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number.";
                                    cin >> Loan;
                                }

                                if (Loan == 0)
                                {
                                    isWithinLoanRange = 0;
                                    break;
                                }
                                else if (Loan >= 100000)
                                {

                                    isWithinLoanRange = 1;
                                }
                                else if (Loan < 100000)
                                {
                                    cout << endl;
                                    cout << "Your loan is less than the minimum amount that can be loaned. " << endl;
                                    cout << endl;

                                    isWithinLoanRange = 0;
                                }
                                else
                                {
                                    cout << "Invalid amount\n";
                                    cout << endl;
                                }

                                break;

                            case 4:
                                // business loan
                                typeOfLoan = MyArray[3];

                                cout << "\n";

                                cout << "You can enter 0 to exit. Please enter loan amount: ";
                                cin >> Loan;
                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number.";
                                    cin >> Loan;
                                }

                                if (Loan == 0)
                                {
                                    isWithinLoanRange = 0;
                                    break;
                                }
                                else if (Loan >= 100000 && Loan <= 1000000)
                                {

                                    isWithinLoanRange = 1;
                                }
                                else if (Loan < 100000)
                                {
                                    cout << endl;
                                    cout << "Your loan is less than the minimum amount that can be loaned. " << endl;
                                    cout << endl;

                                    isWithinLoanRange = 0;
                                }
                                else if (Loan > 1000000)
                                {

                                    cout << endl;
                                    cout << "Your loan is greater than the maximum amount that can be loaned. " << endl;
                                    cout << endl;
                                    isWithinLoanRange = 0;
                                }
                                else
                                {
                                    cout << "Invalid amount\n";
                                    cout << endl;
                                }

                                break;

                            case 5: // studennt loan

                                typeOfLoan = MyArray[4];

                                cout << "\n";

                                cout << "You can enter 0 to exit. Please enter loan amount: ";
                                cin >> Loan;
                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number.";
                                    cin >> Loan;
                                }

                                if (Loan == 0)
                                {
                                    isWithinLoanRange = 0;
                                    break;
                                }
                                else if (Loan >= 10000 && Loan <= 300000)
                                {

                                    isWithinLoanRange = 1;
                                }
                                else if (Loan < 10000)
                                {
                                    cout << endl;
                                    cout << "Your loan is less than the minimum amount that can be loaned. " << endl;
                                    cout << endl;

                                    isWithinLoanRange = 0;
                                }
                                else if (Loan > 300000)
                                {

                                    cout << endl;
                                    cout << "Your loan is greater than the maximum amount that can be loaned. " << endl;
                                    cout << endl;
                                    isWithinLoanRange = 0;
                                }

                                else
                                {
                                    cout << "Invalid amount\n";
                                    cout << endl;
                                }

                            case 6:

                                break;
                            }

                            if (isWithinLoanRange == 1)
                            {

                                cout << endl;

                                cout << "Please choose the loan term: " << endl;

                                cout << "a. 12 months" << endl;
                                cout << "b. 24 months" << endl;
                                cout << "c. 36 months" << endl;
                                cout << "d. 48 months" << endl;
                                cout << "e. 60 months" << endl;
                                cout << "Choice: ";
                                cin >> loanTerm;

                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cout << endl;
                                    cout << "Invalid input. Please enter a valid number. ";

                                    break;
                                }

                                if (loanTerm == 'a')
                                {
                                    varForRightShift = 16;
                                    exponent = 8 + (varForRightShift >>= 2);
                                }
                                else if (loanTerm == 'b')
                                {

                                    varForRightShift = 16;
                                    exponent = 20 + (varForRightShift >>= 2);
                                }
                                else if (loanTerm == 'c')
                                {

                                    varForRightShift = 16;
                                    exponent = 32 + (varForRightShift >>= 2);
                                    
                                    
                                }
                                else if (loanTerm == 'd')
                                {

                                    varForRightShift = 16;
                                    exponent = (varForRightShift <<= 2) - 16;
                                }
                                else if (loanTerm == 'e')
                                {

                                    varForRightShift = 16;
                                    exponent = (varForRightShift <<= 2) - 4;
                                }
                                else
                                {

                                    while (loanTerm != 'a' && loanTerm != 'b' && loanTerm != 'c' && loanTerm != 'd' && loanTerm != 'e')
                                    {
                                        cin.clear();
                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                        cout << "Invalid input. Please enter the letter of your choice. " << endl;
                                        cout << endl;
                                        cin >> loanTerm;
                                    }
                                }

                                monthlyInterest = typeOfLoan + 1; //+1 is needed for amortization formula
                                
                                

                                for (int i = --exponent; i >= 1; --i)
                                {
                                    monthlyInterest *= typeOfLoan + 1;
                                }

                                monthlyPayment = ((Loan * typeOfLoan) * monthlyInterest)/ (monthlyInterest - 1);

                                monthlyPayment = round(monthlyPayment * 100.0) / 100.0;

                                totalToBeReturned = round((monthlyPayment * exponent) * 100.0) / 100.0;

                                cout << endl;
                                cout << endl;

                                cout << "Your monthly payment is " << monthlyPayment << " and the payment date of this is every 16th day of every month.\n\n"
                                     << "The total amount you will have to return is "
                                     << totalToBeReturned << " and the due date of this is on the " << exponent << "th month from when you took this loan and on its 16th day. "
                                     << "Every 16th day of the month, the monthly payment would automatically be deducted from your balance. "
                                     << "Therefore, please ensure that there would be sufficient funds in your account before the 16th day of every month. Not doing so would result to a penalty charge of P500. "
                                     << "\n\nWould you like to continue applying for this loan? Enter 1 if yes, while 0 if no. ";
                                cin >> finalizeLoan;
                                cout << endl;

                                while (cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                                    cout << "Invalid input. Please enter a valid number.";

                                    cin >> finalizeLoan;
                                    cout << endl;
                                    cout << endl;
                                }

                                if (finalizeLoan == 1)
                                {
                                    totalLoan += monthlyPayment * exponent;
                                    cout << "The loan has been finalized. Your total loaned amount is " << totalLoan << endl;
                                    cout << endl;
                                }
                                else if (finalizeLoan == 0)
                                {

                                    cout << "The loan has been cancelled. " << endl;
                                    cout << endl;
                                }
                                else
                                {

                                    while (finalizeLoan != 0 && finalizeLoan != 1)
                                    {
                                        cout << "Invalid input. Please enter a valid number.";
                                        cin >> finalizeLoan;
                                        cout << endl;
                                        cout << endl;

                                        if (finalizeLoan == 1)
                                        {
                                            totalLoan += monthlyPayment * exponent;
                                            cout << "The loan has been finalized. Your total loaned amount is " << totalLoan << endl;
                                            cout << endl;
                                        }
                                        else if (finalizeLoan == 0)
                                        {

                                            cout << "The loan has been cancelled. " << endl;
                                            cout << endl;
                                        }
                                    }
                                }
                            }

                            break;

                        case 5: // check loan

                            cout << endl;
                            cout << endl;
                            cout << "Your total loaned amount is: P" << totalLoan << endl;
                            cout << endl;
                            cout << endl;

                            break;

                        case 6:

                            cout << "Account Settings" << endl;

                            cout << "" << endl;

                            cout << "1. Password Change" << endl;

                            cout << "2. Exit" << endl;

                            cout << "Please enter the number of your choice.";

                            cin >> numCaseForAccountSetting;

                            while (cin.fail())
                            {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << endl;
                                cout << "Invalid input. Please enter a valid number.";
                                cin >> numCaseForAccountSetting;
                            }
                            cout << endl;

                            cout << endl;

                            switch (numCaseForAccountSetting)
                            {

                            case 1: // Password change

                                do
                                {

                                    cout << "Please enter your current password: ";

                                    cin >> currentPassword;

                                    cout << endl;

                                    cout << endl;

                                    cout << "Please enter your new password: ";

                                    cin >> newPassword;

                                    cout << endl;

                                    cout << endl;

                                    cout << "Please confirm your new password: ";

                                    cin >> confirmNewPassword;

                                    cout << endl;

                                    cout << endl;

                                    if (currentPassword != correctPassword)
                                    {

                                        cout << "The current password you entered is invalid. Please enter 1 to try again and 0 to exit." << endl;

                                        cin >> continuePwChange;

                                        if (continuePwChange != "1" && continuePwChange != "0")
                                        {

                                            cout << "Please type 1 to continue changing your password while 0 to cancel it. " << endl;

                                            cout << endl;

                                            cin >> continuePwChange;

                                            cout << endl;

                                            cout << endl;
                                        }

                                        if (continuePwChange == "0")
                                        {

                                            numForCase = 0;
                                        }
                                    }
                                    else
                                    {

                                        (newPassword == confirmNewPassword) ? (
                                            correctPassword = confirmNewPassword,
                                            cout << "Successfully changed your password." << endl,
                                            continuePwChange = "0"

                                        )
                                        : (
                                            cout << "Your new password and the one you entered to confirm it do not match. " << endl,
                                            cout << endl,
                                            continuePwChange = "1"

                                        );
                                    }

                                } while (continuePwChange == "1");

                                break;

                            case 2:

                                break;

                            default:

                                break;

                            }

                            break;

                        case 7: // Exit

                            cout << "Thank you for using this Bank. Bye Bye!" << endl;

                            cout << endl;

                            return 0;

                            break;

                        default:

                            cout << endl;

                            cout << "Invalid input. Please enter a valid number. " << endl;
                            break;
                        }
                        break;

                        break;
                    }



                }
            }
        } // exitReg
    }
}
