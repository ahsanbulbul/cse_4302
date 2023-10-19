#include "L1_Class.cpp"

string Account::getaccountNo() const {return accountNo;}
string Account::getaccountName() const {return accountName;}
float Account::getbalance() const {return balance;}

void Account::setaccountNo(const string& accno) {accountNo=accno;}
void Account::setaccountName(const string& name) {accountName=name;}
void Account::setbalance(float blnc) {balance=blnc;}

