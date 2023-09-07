#pragma once

#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class student{
    private:
        string name;
        Date dob;
        int id;
        double cgpa;
    public:
        student();
        ~ student();

        void setInfo(const string& nm, int dd, int mm, int yy, int idntt, double cg);
        void setname(const string& nm);
        bool setDate(int dd, int mm, int yy);
        void setid(int idntt);
        bool setcgpa(double cg);

        //getter dont chnage values
        const void getInfo();
        const string getname();
        const Date getDate();
        const int getid();
        const double getcgpa();
        const int getage(Date today);
};