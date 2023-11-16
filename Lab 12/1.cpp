#include <algorithm>
#include <iostream>
using namespace std;

template <typename Typ>
Typ amax(Typ* array, int size, int n){
    Typ* helper = array;

    for(int i = 0; i < size; ++i){
        helper[i] = array[i];
    }

    sort(helper, helper+size, greater<Typ>()); //sort in descending order

    return helper[n-1];
}


int main(){
    enum Sz {size=8};
    int n=3, q=4;

    int intarr[size]={17, 32, 5, 9, 11, 31, 6, 14};
    cout<<"The "<<n<<"th largest element is "<< amax(intarr, size ,n)<<endl;

    float fltarr[size]={18.42, 21.62, 31.97, 12.3, 3.8567, 3.14159, 1.618033, 1312.15};
    cout<<"The "<<q<<"th largest element is "<< amax(fltarr, size ,q)<<endl;
}