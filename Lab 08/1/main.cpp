#include "L1_Class.cpp"
#include "L2_Class.cpp"
#include "L3_Class.cpp"

#include "L1_Codes.cpp"
#include "L2_Codes.cpp"
#include "L3_Codes.cpp"

#include <iostream>
using namespace std;

int main() {
    CurrentAccount currentAcc;
    currentAcc.setaccountName("Moon Knight");
    currentAcc.setbalance(1000.0);

    SavingsAccount savingsAcc;
    savingsAcc.setaccountName("Jake Lockley");
    savingsAcc.setbalance(5000.0);

    TwoYearMDS twoYearMDS;
    twoYearMDS.setaccountName("Steven Grunt");
    twoYearMDS.setbalance(20000.0);
    twoYearMDS.setmaximuminterest(5);

    cout << "Account Number: " << currentAcc.getaccountNo() << endl;
    cout << "Account Name: " << currentAcc.getaccountName() << endl;
    cout << "Balance: " << currentAcc.getbalance() << endl;


    cout << "Account Number: " << savingsAcc.getaccountNo() << endl;
    cout << "Account Name: " << savingsAcc.getaccountName() << endl;
    cout << "Balance: " << savingsAcc.getbalance() << endl;


    cout << "Account Number: " << twoYearMDS.getaccountNo() << endl;
    cout << "Account Name: " << twoYearMDS.getaccountName() << endl;
    cout << "Balance: " << twoYearMDS.getbalance() << endl;
    cout << "Maximum Interest: " << twoYearMDS.getmaximuminterest() << "%" << endl;

    return 0;
}
