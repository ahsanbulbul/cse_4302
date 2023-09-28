#include "Weight"
#include <iostream>

using namespace std;

Weight::Weight(): pound(0), ounce(0){}

Weight::Weight(double kg){
    double tmp=kg*kgToPound;
    pound=int(tmp);
    tmp-=pound;
    ounce= tmp*pound2ounce;
}

Weight::Weight(int pound, double ounce): pound(pound), ounce(ounce){}

void Weight::showWeight() const{
    cout<<pound<<" Pound "<<ounce<<" ounce"<<endl;
}

Weight::operator double() const {
    double kg=0;

    double total_pound=pound+(ounce/pound2ounce);
    kg=total_pound/kgToPound;

    return kg;
}