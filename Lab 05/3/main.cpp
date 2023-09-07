#include <iostream>
#include "student.cpp"
#include "student.h"

int main(){
    student u;

    u.setInfo("Nicolast Tesla", 19, 07, 1990, 199021345, 3.99);
    u.getInfo();


    cout<<"Enter date[dd mm yyyy]: ";
    Date today;
    cin>>today.day;
    cin>>today.month;
    cin>>today.year;

    int k=u.getage(today);
    
    if(k==-1)
        cout<<"Invalid current date"<<endl;
    else
        cout<<"The age is: "<<k<<endl;
}