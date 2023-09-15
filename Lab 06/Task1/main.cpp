#include "Counter"
#include "Counter.cpp"

#include <iostream>
using namespace std;

int main(){

    Counter m(0,9), n(0, -7), p, w;
    m.increment();
    n.increment();
    n.increment();
    p.increment();
    cout<<m.getCount()<<endl;
    cout<<n.getCount()<<endl;
    cout<<p.getCount()<<endl;
    cout<<w.getCount()<<endl;

    // w+=n;
    //     cout<<w.getCount()<<endl;

    // w+=n;
    // cout<<w.getCount()<<endl;

    w=m+n;
    cout<<w.getCount()<<endl;

}