#pragma once

#include <string>
using namespace std;

struct BirthDate {
    int day;
    int month;
    int year;
};

class student{
    private:
        string name;
        BirthDate dob;
        int id;
        double cgpa;
    public:
        student();
        ~ student();

        void setInfo(const string& nm, int dd, int mm, int yy, int idntt, double cg);
        void setname(const string& nm);
        bool setBirthDate(int dd, int mm, int yy);
        void setid(int idntt);
        bool setcgpa(double cg);

        void getInfo();
        string getname();
        BirthDate getBirthDate();
        int getid();
        double getcgpa();
};