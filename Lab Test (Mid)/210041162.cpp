#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name;
        int age;
        float gpa;
        static int total_students;

    public:
        // -tructors
        Student(): name(""), age(0), gpa(0){
            total_students++;
        }

        Student(string _name, int _age, float _gpa): name(_name), age(_age), gpa(_gpa){
            total_students++;
        }

        ~ Student(){}
        
        //setter
        void setname (string _name) {name=_name;}
        void setage (int _age) {
            if(_age>10 and _age<40)//assuming typical Uni
                age=_age;
            else cout << "Error"<<endl;
        }
        void setgpa(float _gpa) {
            if(_gpa>=0 and _gpa<=4)
                gpa=_gpa;        
            else cout << "Error"<<endl;
        }

        //getter
        string getname () const {return name;}
        int getage () const {return age;}
        float getgpa() const {return gpa;}


        void show(){
            cout<<"Name: "<<name<<"\tAge: "<<age<<"\tGPA: "<<gpa<<endl;
        }

        static void showtotal() {
            cout<<"Total student objects created : "<<total_students<<endl;
        }

        //operators
        bool operator<(Student obj) const {
            //compares using gpa
            if(gpa<obj.gpa)
                return true;

            return false;
        }
        



};

int Student::total_students=0;

class GradeConverter{
    private:
        string name;
        float bdgpa;
        float ukgpa;
    public:
        GradeConverter(Student st) {
            name=st.getname();
            bdgpa=st.getgpa();
            ukgpa=bdgpa/0.5;
        }
        float whatsDaUKgrade(){
            return ukgpa;
        }
        float whatsDaBDgrade(){
            return bdgpa;
        }
        string whatsDaname(){
            return name;
        }

};

void printstudent(Student arr[]){
    for(int i=0; i<5; i++){
        arr[i].show();
    }
    cout<<endl;
}

int main(){
    Student arr[5], temp;

    arr[0].setname("Khalil");
    arr[0].setage(22);
    arr[0].setgpa(3.2);

    arr[1].setname("Shadab");
    arr[1].setage(21);
    arr[1].setgpa(3.8);

    arr[2].setname("Rupom");
    arr[2].setage(23);
    arr[2].setgpa(3.9);

    arr[3].setname("Ali");
    arr[3].setage(20);
    arr[3].setgpa(3.1);

    arr[4].setname("Fatin");
    arr[4].setage(23);
    arr[4].setgpa(3.85);

    cout<<"After insertion:\n-------------------------------"<<endl;
    printstudent(arr);


    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"After sorting:\n-------------------------------"<<endl;
    printstudent(arr);

    //check uk grade
    GradeConverter a=arr[0];
    cout<<"The UK grade for Student "<<a.whatsDaname()<<", BD standard GPA "<<a.whatsDaBDgrade()<<" is "<<a.whatsDaUKgrade()<<endl;



    Student::showtotal();

}