#include "L1_Class.cpp"
#include "L2_Class.cpp"
#include <string>


const int CurrentAccount::serviceCharge=100;
const int CurrentAccount::serial=100;
int CurrentAccount::nextAccount=1;


const int SavingsAccount::serial=200;
int SavingsAccount::nextAccount=1;

const int MonthlyDepositScheme::serial=300;
int MonthlyDepositScheme::nextAccount=1;

const int LoanAccount::serial=900;
int LoanAccount::nextAccount=1;



string SavingsAccount::nextAccounter() {
    return to_string(SavingsAccount::serial) + to_string(SavingsAccount::nextAccount);
}

string MonthlyDepositScheme::nextAccounter() {
    return to_string(MonthlyDepositScheme::serial) + to_string(MonthlyDepositScheme::nextAccount);
}

string CurrentAccount::nextAccounter() {
    return to_string(CurrentAccount::serial) + to_string(CurrentAccount::nextAccount);
}

string LoanAccount::nextAccounter() {
    return to_string(LoanAccount::serial) + to_string(LoanAccount::nextAccount);
}

CurrentAccount::CurrentAccount() {
    setaccountNo(nextAccounter());
}

SavingsAccount::SavingsAccount() {
    setaccountNo(nextAccounter());
}

MonthlyDepositScheme::MonthlyDepositScheme() {
    setaccountNo(nextAccounter());
}
