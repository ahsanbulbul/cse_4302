#ifndef L3_CLASS
#define L3_CLASS

#include "L1_Class.cpp"
#include "L2_Class.cpp"
#include <cstring>
#include <string>
using namespace std;

class TwoYearMDS: public MonthlyDepositScheme{
    private:
        int maximuminterest;

    public:
        int getmaximuminterest() const;
        void setmaximuminterest(int maxintrst);

};

class FiveYearMDS: public MonthlyDepositScheme{
    private:
        int maximuminterest;

    public:
        int getmaximuminterest() const;
        void setmaximuminterest(int maxintrst);

};

class InitialDepositMDS: public MonthlyDepositScheme{
    private:
        int maximuminterest;
        int initialdepositamount;
    public:
        int getmaximuminterest() const;
        int getinitialdepositamount() const;
        
        void setmaximuminterest(int maxintrst);
        void setinitialdepositamount(int initdeposit);

};

#endif