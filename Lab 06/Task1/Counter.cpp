#include "Counter"

#include <iostream>

using namespace std;

Counter::Counter(int kount , int init){

    if(init<0){
        init=1;
    }
    setIncrementStep(init);
    count=kount;
}

void Counter::setIncrementStep(int step){

    // Validation
    if (step <= 0) {
        cout << "Invalid Step Value" << endl;
        return;
    }

    incrmnt = step;
}

int Counter::getCount()  const{
    return count;
}

void Counter::increment () {
    count += incrmnt;
}

void Counter::resetCount() {
    count = 0;
}

Counter Counter::operator+(const Counter& c) const{
    Counter tmp(count+c.count);
    //cout<<tmp.getCount()<<"lll"<<endl;
    return tmp;
}

bool Counter::operator>(const Counter& c) const{
    return (count>c.count);
}
bool Counter::operator<(const Counter& c) const{
    return (count<c.count);
}
bool Counter::operator>=(const Counter& c) const{
    return (count>=c.count);
}
bool Counter::operator<=(const Counter& c) const{
    return (count<=c.count);
}
bool Counter::operator==(const Counter& c) const{
    return (count==c.count);
}
bool Counter::operator!=(const Counter& c) const{
    return (count!=c.count);
}

Counter Counter::operator+=(const Counter& c){
    if(c.incrmnt>incrmnt)
        incrmnt=c.incrmnt;

    return Counter(count+=c.count);
}

Counter Counter::operator++(int){
    return Counter(count++);
}
Counter Counter::operator++(){
    return Counter(++count);
}