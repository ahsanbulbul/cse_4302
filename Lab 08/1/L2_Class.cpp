#ifndef L2_CLASS
#define L2_CLASS

#include "L1_Class.cpp"
#include <cstring>
#include <string>
using namespace std;

class CurrentAccount: public Account {
    private:
        const static int serviceCharge;
        const static int serial;
        static int nextAccount;


        string nextAccounter();

    public:
        CurrentAccount();

};


class SavingsAccount: public Account {
    private:
        int interestRate;
        int monthlydepositAmount;
        const static int serial;
        static int nextAccount;


        string nextAccounter();

    public:
        SavingsAccount();
};


class MonthlyDepositScheme: public Account {
    private:
        int interestRate;
        int monthlydepositAmount;
        const static int serial;
        static int nextAccount;


        string nextAccounter();

    public:
        MonthlyDepositScheme();

};



class LoanAccount: public Account {
    private:
        int interestRate;
        int monthlydepositAmount;
        const static int serial;
        static int nextAccount;


        string nextAccounter();

    public:

};
#endif