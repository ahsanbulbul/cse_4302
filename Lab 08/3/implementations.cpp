#include "Employee"
#include "DerivedClasses"
#include <endian.h>

Employee::Employee(string nm, string eid, float msal,bool duty):name(nm), emp_id(eid), monthly_salary(msal), onDuty(duty){}

string Employee::getname(){
    return name;
}
string Employee::getemp_id(){
    return emp_id;
}
float Employee::getmonthly_salary(){
    return monthly_salary;
}
bool Employee::getonDuty(){
    return onDuty;
}
float Employee::getyearly_salary(){
    return monthly_salary*12;
}

Manager::Manager(string nm, string eid, bool duty): Employee(nm, eid, 10000, duty){};
Engineer::Engineer(string nm, string eid, bool duty): Employee(nm, eid, 8000, duty){};
Designer::Designer(string nm, string eid, bool duty): Employee(nm, eid, 7000, duty){};



string Address::gethouse() const {return house;}
string Address::getroad() const {return road;}
string Address::getcity() const {return city;}
int Address::getzip_code() const {return zip_code;}
string Address::getDistrict() const {return District;}
string Address::getCountry() const {return Country;}

void Address::sethouse(const string& in){house=in;}
void Address::setroad(const string& in){road=in;}
void Address::setcity(const string& in){city=in;}
void Address::setzip_code(int in){zip_code=in;}
void Address::setDistrict(const string& in){District=in;}
void Address::setCountry(const string& in){Country=in;}
void Address::setAddress(const string& _house, const string& _road, const string& _city, const int _zipCode, const string& _district, const string& _country){
    Address::sethouse(_house);
    Address::setroad(_road);
    Address::setcity(_city);
    Address::setzip_code(_zipCode);
    Address::setDistrict(_district);
    Address::setCountry(_country);
}


string ContactInfo::getprimaryphone() const {return primaryphone;}
string ContactInfo::getsecondaryphone() const {return secondaryphone;}
string ContactInfo::getemail() const {return email;}
void ContactInfo::setprimaryphone(const string& in){primaryphone=in;}
void ContactInfo::setsecondaryphone(const string& in){secondaryphone=in;}
void ContactInfo::setemail(const string& in){email=in;}
void ContactInfo::setContactInfo(const string& _primPhone, const string& _secPhone, const string& _email){
    setprimaryphone(_primPhone);
    setsecondaryphone(_secPhone);
    setemail(_email);
}
