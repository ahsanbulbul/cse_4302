#include "L3_Class.cpp"

int TwoYearMDS::getmaximuminterest() const{
    return maximuminterest;
}
void TwoYearMDS::setmaximuminterest(int maxintrst){
    maximuminterest=maxintrst;
}

int FiveYearMDS::getmaximuminterest() const{
    return maximuminterest;
}
void FiveYearMDS::setmaximuminterest(int maxintrst){
    maximuminterest=maxintrst;
}

int InitialDepositMDS::getmaximuminterest() const{
    return maximuminterest;
}
void InitialDepositMDS::setmaximuminterest(int maxintrst){
    maximuminterest=maxintrst;
}
int InitialDepositMDS::getinitialdepositamount() const{
    return initialdepositamount;
}
void InitialDepositMDS::setinitialdepositamount(int initdeposit){
    initialdepositamount=initdeposit;
}