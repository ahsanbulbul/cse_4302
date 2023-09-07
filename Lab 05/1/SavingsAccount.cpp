#include "SavingsAccount.h"

int SavingsAccount::objectCreated = 0;
int SavingsAccount::objectDestroyed = 0;
double SavingsAccount::interestRate = 0;

SavingsAccount::SavingsAccount() {
    balance = 0;
    objectCreated++;
}

SavingsAccount::~SavingsAccount() {
    objectDestroyed++;
}

int SavingsAccount::getCreated() {
    return objectCreated;
}

int SavingsAccount::getDestroyed() {
    return objectDestroyed;
    //probably will return 0 anyway as destructors are called after the code is exited
}

double SavingsAccount::calculateMonthlyInterest() {
    double intrst= (balance * interestRate / (12 * 100));
    balance+=intrst;
    return intrst;
}