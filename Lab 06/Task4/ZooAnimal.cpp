#include <iostream>
#include <string>
#include "ZooAnimal"

// using namespace std;
ZooAnimal::ZooAnimal(string name, int birth, int cage, int wt, int ht){
    setName(name);
    setCage(cage);
    setW(wt);
    setH(ht);
    setBY(birth);
}
ZooAnimal::~ ZooAnimal(){
}
int ZooAnimal::getAge() const{
    return 2023-birthYear;
}
void ZooAnimal::setName(string nm){
    nameOfAnimal=nm;
}
void ZooAnimal::setBY(int y){
    if(y>2023){
        cout<<"Not Possible"<<endl;
    }
    else birthYear=y;
}
void ZooAnimal::setCage(int k){
    cageNumber=k;
}
void ZooAnimal::setW(int y){
    weightData=y;
}
void ZooAnimal::setH(int y){
    height=y;
}
string ZooAnimal::getName() const{
    return nameOfAnimal;
}
int ZooAnimal::getBY() const{
    return birthYear;
}
int ZooAnimal::getW() const{
    return weightData;
}
int ZooAnimal::getH() const{
    return height;
}       
int ZooAnimal::getCage() const{
    return cageNumber;
} 
void ZooAnimal::displayInfo() const{
    cout<<"Animal Name: "<<nameOfAnimal<<endl;
    cout<<"Birth Year: "<<birthYear<<endl;
    cout<<"Cage Number: "<<cageNumber<<endl;
    cout<<"weightData: "<<weightData<<endl;
    cout<<"Height: "<<height<<endl;
}

//overloaded

bool ZooAnimal::operator>(const ZooAnimal& z) const{
    return (weightData>z.weightData);
}
bool ZooAnimal::operator<(const ZooAnimal& z) const{
    return (weightData<z.weightData);
}
bool ZooAnimal::operator>=(const ZooAnimal& z) const{
    return (weightData>=z.weightData);
}
bool ZooAnimal::operator<=(const ZooAnimal& z) const{
    return (weightData<=z.weightData);
}
bool ZooAnimal::operator==(const ZooAnimal& z) const{
    return (weightData==z.weightData);
}
bool ZooAnimal::operator!=(const ZooAnimal& z) const{
    return (weightData>z.weightData);
}
void ZooAnimal::operator+=(const int add){
    weightData+=add;
}
void ZooAnimal::operator-=(const int rmv){
    weightData-=rmv;
}