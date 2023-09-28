#include "Weight"
#include "Weight.cpp"
#include <iostream>

using namespace std;

int main(){

    Weight neko(42);
    cout<<"Neko in pound-ounce is ";
    neko.showWeight();
    cout<<"Neko in KG is "<<double(neko)<<endl;

    Weight doge(62, 11);
    cout<<"Doge in KG is "<<double(doge)<<endl;
}