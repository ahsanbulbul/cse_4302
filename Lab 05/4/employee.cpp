#include "employee.h"
#include <iostream>

/*
Approach: init the values wanted for failing case as default, if anyone
fails, do nth. and if passes, assign provided value
*/


employee::employee() {
    name = "John Doe";
    birth.day = 1;
    birth.month = 1;
    birth.year = 2002;
    salary = 10000;
}
employee::~employee() {
}


void employee::setname(string nm) {
    if (nm.length() > 2) {
        name = nm;
    }
}
void employee::setdob(Date birthday) {

    if(birthday.year<1950 or birthday.month>12 or birthday.month<1 or birthday.day>31 or birth.day<1 or (2013-birthday.year) < 18)
        return;
    else
        birth = birthday;
}
void employee::setsalary(int amount) {
    if (amount >= 10000 and amount <= 100000) {
        salary = amount;
    }
}


string employee::getname() {
    return name;
}
Date employee::getdob() {
    return birth;
}
int employee::getsalary() {
    return salary;
}
void employee::setInfo(string nm, Date birthday, int amount){
    setname(nm);
    setdob(birthday);
    setsalary(amount);
}

void employee::getInfo() {
    cout << "Employee Name: " << getname() << endl;
    Date birth = getdob();
    cout << "Date of Birth: " << birth.day << "." << birth.month << "." << birth.year << endl;
    cout << "Salary: " << getsalary() << endl;
}
