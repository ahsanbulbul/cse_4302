#include "Classes"
#include <iostream>

int main(){
    CurrencyBDT p(1000, 70);
    CurrencyDollar q(34, 67);
    CurrencyEuro r(23, 14);

    CurrencyEuro Urofrombd=p;
    CurrencyDollar Dollanfrombd=p;

    std::cout<<"BDT\t";
    p.get();

    std::cout<<"In Euro\t";
    Urofrombd.get();

    std::cout<<"In Dollar\t";
    Dollanfrombd.get();
}