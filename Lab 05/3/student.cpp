#include "student.h"
#include <cstddef>
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
bool student::setDate(int dd, int mm, int yy){
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
    setDate(dd, mm, yy);
    setid(idntt);
    setcgpa(cg);
}

// getter

const string student::getname(){
    return name;
}
const Date student::getDate(){
    return dob;
}
const int student::getid(){
    return id;
}
const double student::getcgpa(){
    return cgpa;
}
const void student::getInfo(){
    cout<<"Name:\t"<<name<<endl;
    cout<<"Date of Birth:\t"<<dob.day<<"."<<dob.month<<"."<<dob.year<<endl;
    cout<<"ID:\t"<<id<<endl;
    cout<<"CGPA:\t"<<cgpa<<endl;
}
const int student::getage(Date today){
    if(today.year>2023 or today.year<dob.year or today.month>12 or today.month<1 or today.day>31 or today.day<1){
        return -1;
    }else{
        return today.year-dob.year;
    }    
}