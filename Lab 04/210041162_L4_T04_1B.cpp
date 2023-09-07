#include <iostream>
#include <string>

using namespace std;

class ZooANimal{

    private:
        string nameOfAnimal;
        int birthYear, cageNumber, weight, height;
    public:
        ZooANimal(string name="", int birth=2023, int cage=0,int wt=1, int ht=1){
            nameOfAnimal=name;
            cageNumber=cage;
            weight=wt;
            height=ht;
            birthYear=birth;
        }
        ~ ZooANimal(){
            displayInfo();
        }
        int getAge(){
            return 2023-birthYear;
        }
        void setName(string nm){
            nameOfAnimal=nm;
        }
        void setBY(int y){
            if(y>2023){
                cout<<"Not Possible"<<endl;
            }
            else birthYear=y;
        }
        void setCage(int k){
            cageNumber=k;
        }
        void setW(int y){
            weight=y;
        }
        void setH(int y){
            height=y;
        }
        string getName(){
            return nameOfAnimal;
        }
        int getBY(){
            return birthYear;
        }
        int getW(){
            return weight;
        }
        int getH(){
            return height;
        }       
        int getCage(){
            return cageNumber;
        } 
        void displayInfo(){
            cout<<"Animal Name: "<<nameOfAnimal<<endl;
            cout<<"Birth Year: "<<birthYear<<endl;
            cout<<"Cage Number: "<<cageNumber<<endl;
            cout<<"Weight: "<<weight<<endl;
            cout<<"Height: "<<height<<endl;
        }
};
int main(){
    ZooANimal monkey;
    monkey.displayInfo();
    monkey.setName("Monke");
    monkey.setCage(45);
    monkey.setW(90);
    monkey.setH(30);
    monkey.setBY(1330);
    monkey.displayInfo();
    cout<<monkey.getName()<<" age is: "<<monkey.getAge()<<endl;
    monkey.setBY(4043);

    ZooANimal dog("Dogesh", 1800, 5, 40, 60);
    dog.displayInfo();
    cout<<"============================================="<<endl;
}