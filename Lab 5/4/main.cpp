#include <iostream>
#include "employee.cpp"
using namespace std;


int main() {

    employee valid, invalid;
    valid.setInfo("Mel", {12, 04, 1993}, 70000);
    valid.getInfo();
    cout<<"==========================="<<endl;
    invalid.setInfo("Me", {47, 04, 1993}, 1234567);
    invalid.getInfo();
}
