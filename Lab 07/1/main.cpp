#include "StudentCollection"
#include "StudentCollection.cpp"
#include <iostream>

int main(){
    StudentCollection gandalf;
    gandalf.addStudent(string("HerryPutter"), 78);
    gandalf.addStudent("Hermoine", 99.999);
    gandalf.addStudent("Ron", -13.7);

    cout<<gandalf["Hermoine"]<<endl;

    cout<<gandalf["DOn"]<<endl;

    gandalf["Ron"]=65;

    cout<<gandalf["Ron"]<<endl;

}
