#include "Employee"
#include "DerivedClasses"

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
