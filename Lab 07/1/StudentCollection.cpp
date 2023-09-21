#include "StudentCollection"
#include <iostream>
#include <string>

using namespace std;

double& StudentCollection::operator[]( string name){
    for(int i=0; i<10; i++){
        if(name==names[i]){
            return grades[i];
        }
    }
    cout<<"Name doesn't exist!"<<endl;
    return *nl;
    // return nullptr;
}

void StudentCollection::addStudent(string name, double grade){
    if(counter>=9){
        cout<<"Data Full!"<<endl;
        return;
    }

    names[counter]=name;
    grades[counter]=grade;
    counter++;
}
