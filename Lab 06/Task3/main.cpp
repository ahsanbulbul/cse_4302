#include "RationalNumber"
#include "RationalNumber.cpp"

#include <iostream>
using namespace std;
int main(){
    RationalNumber f(3, 7), g(7, 3), x(1,1);
    f.getNum();
    g.getNum();

    x=f+g;
    x.getNum();

    f.getNum();


}