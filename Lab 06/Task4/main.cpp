#include <iostream>
#include <string>
#include "ZooAnimal"
#include "ZooAnimal.cpp"

using namespace std;

int main(){
    ZooAnimal monkey("Monke", 1800, 5, 40, 60);
    ZooAnimal gato("HelloKitty", 1900, 2, 10, 12);

    monkey.displayInfo();
    monkey-=7;
    cout<<"Monkey become"<<monkey.getW()<<endl;

    if(gato<monkey)
        cout<<"Monkey is heavier"<<endl;

}