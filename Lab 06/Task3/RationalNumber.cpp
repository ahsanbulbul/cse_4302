#include "RationalNumber"

#include <iostream>
using namespace std;


RationalNumber::RationalNumber(int numerator, int denominator){
    setNum(numerator, denominator);
}
void RationalNumber::setNum(int numerator, int denominator){
    if(denominator==0)
        cout<<"ERROR !!! Can't store undefined value."<<endl;
    else{
        p=numerator;
        q=denominator;
    }
}
void RationalNumber::mutator(int numer, int denom){
    setNum(numer, denom);
}
void RationalNumber::getNum() const{
    cout<<p<<"/"<<q<<endl;
}
int RationalNumber::getNumerator() const{
    return p;
}
int RationalNumber::getDenominator() const{
    return q;
}


RationalNumber RationalNumber::operator+(const RationalNumber operand) const {
    int m, n;
    m=p+operand.p;
    n=q+operand.q;

    return RationalNumber(m, n);
}
RationalNumber RationalNumber::operator-(const RationalNumber operand) const{
    int m, n;
    m=p-operand.p;
    n=q-operand.q;

    return RationalNumber(m, n);
}
RationalNumber RationalNumber::operator*(const RationalNumber operand) const{
    int m, n;
    m=p*operand.p;
    n=q*operand.q;

    return RationalNumber(m, n);
}
RationalNumber RationalNumber::operator/(const RationalNumber operand) const{
    int m, n;
    m=p/operand.p;
    n=q/operand.q;

    return RationalNumber(m, n);
}