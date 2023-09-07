#include "student.h"
#include <string>
#include <iostream>

// -tructor

student::student(){
    name="";
    dob.day=0, dob.month=0, dob.year=0;
    id=0;
    cgpa=0;
}
student::~ student(){
}


// setter

void student::setname(const string& nm){
    name=nm;
}
bool student::setBirthDate(int dd, int mm, int yy){
    if(dd>31 or dd<1 or mm<1 or mm>12 or yy>2023 or yy<1970){
        return false;
    }else {
        dob.day=dd;
        dob.month=mm;
        dob.year=yy;
        return true;
    }
}
void student::setid(int idntt){
    id=idntt;
}
bool student::setcgpa(double cg){
    if(cg>4 or cg<0)
        return false;
    else{
        cgpa=cg;
        return true;
    }
}
void student::setInfo(const string& nm, int dd, int mm, int yy, int idntt, double cg){
    setname(nm);
    setBirthDate(dd, mm, yy);
    setid(idntt);
    setcgpa(cg);
}

// getter

string student::getname(){
    return name;
}
BirthDate student::getBirthDate(){
    return dob;
}
int student::getid(){
    return id;
}
double student::getcgpa(){
    return cgpa;
}
void student::getInfo(){
    cout<<"Name:\t"<<name<<endl;
    cout<<"Date of Birth:\t"<<dob.day<<"."<<dob.month<<"."<<dob.year<<endl;
    cout<<"ID:\t"<<id<<endl;
    cout<<"CGPA:\t"<<cgpa<<endl;
}