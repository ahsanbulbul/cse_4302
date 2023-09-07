#pragma once

#include <string>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
};

class employee{
    private:
        string name;
        Date birth;
        int salary;
    public:
        employee();
        ~ employee();

        void setname(string nm);
        void setdob(Date birthday);
        void setsalary(int amount);

        string getname();
        Date getdob();
        int getsalary();

        void setInfo(string nm, Date birthday, int amount);
        void getInfo();
};