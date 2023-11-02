#include <iostream>
#include <string>
using namespace std;

#define MAX 20

class Product{
private:
    string title;
    long long UID; //unique identifier
    static int total;

public:
    Product(string _title, long long _uid, string _creator): title(_title), UID(_uid){
        setcreator(_creator);
        total++;
    }
    Product(string _title, long long _uid): title(_title),UID(_uid){
        total++;
    }

    ~ Product(){}

    virtual void displayInfo() const = 0;
    virtual void setcreator(string creator){} //pure virtual fn cant be called from constructors.
    virtual string getcreator() = 0;
    long long getuid() const { return UID;}
    string gettitle() const { return title;}
    static int getTotalProducts() { return total;}


    bool operator<(Product& obj){ //needs test
        if(UID<obj.UID)
            return true;

        return false;
    }

    Product& operator=(Product& obj){ 
        title=obj.title;
        UID=obj.UID;
        setcreator(obj.getcreator());

        return obj;
    }

    Product(Product& obj){
        string k=obj.getcreator();
        title=obj.title;
        UID=obj.UID;
        setcreator(k);
        total++; //default copy constructor dont increment obj count
    }

};

int Product::total=0;

inline void line(){cout<<"---------------------------"<<endl;}

class Book: public Product{
private:
    string author;
public:
    Book(string _title, long long _uid, string _creator): Product(_title,_uid){
        author=_creator;
    }

    ~ Book(){}

    void displayInfo() const{
        cout<<"Product Category: Books"<<endl;
        cout<<"Title: "<<gettitle()<<endl;
        cout<<"Book ID: "<<getuid()<<endl;
        cout<<"Author: "<<author<<endl;
        line();

    };

    void setcreator(string creator){
        author=creator;
    }

    string getcreator(){
        return author;
    }
};

class DVD: public Product{
private:
    string director;
public:
    DVD(string _title, long long _uid, string _creator): Product(_title,_uid){
        director=_creator;
    }
    ~ DVD(){}

    void displayInfo() const{
        cout<<"Product Category: DVD"<<endl;
        cout<<"Title: "<<gettitle()<<endl;
        cout<<"Book ID: "<<getuid()<<endl;
        cout<<"Director: "<<director<<endl;
        line();
    };

    void setcreator(string creator){
        director=creator;
    }
    string getcreator(){
        return director;
    }
};

void sort(Product** ptr, int count){
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            if(ptr[i]->getuid()>ptr[j]->getuid()){
                swap(ptr[i], ptr[j]);
            }
        }
    }
}


int main(){
    int op, items=0;
    Product* array[MAX];
    

    string name, creator;
    long long id;

    cout<<"Welcome to Inventory System"<<endl;
    line();

    while(true){
        cout<<"\t1. Add Book"<<endl;
        cout<<"\t2. Add DVD"<<endl;
        cout<<"\t3. Sort by ID"<<endl;
        cout<<"\t4. Show total Products count"<<endl;
        cout<<"\t5. Product details"<<endl;
        cout<<"\t0. Exit"<<endl;

        cin>>op;

        switch(op){
            case (0):
                return 0;

            case(1):

                if(Product::getTotalProducts()>=MAX){
                    cout << "Array is full" << endl;
                    break;
                }

                cout<<"Enter Title:"<<endl;
                cin>>name;
                cout<<"Enter ID"<<endl;
                cin>>id;
                cout<<"Enter Writer"<<endl;
                cin>>creator;


                array[items]=new Book(name,id,creator);
                break;

            case (2):

                if(Product::getTotalProducts()>=MAX){
                    cout << "Array is full" << endl;
                    break;
                }

                cout<<"Enter Title:"<<endl;
                cin>>name;
                cout<<"Enter ID"<<endl;
                cin>>id;
                cout<<"Enter Director"<<endl;
                cin>>creator;

                array[items]=new DVD(name,id,creator);
                break;

            case (3):
                sort(array, Product::getTotalProducts());
                break;
            
            case (4):
                cout<<"Total "<<Product::getTotalProducts()<<" Products Added"<<endl;
                break;

            case (5):
                for(int i=0; i<=items; i++){
                    array[i]->displayInfo();
                }
                break;
                
        }
    }
    // array[0]=new Book("Harry Peter", 1234567, "JK Rolling");
    // array[1]=new DVD("How to tame your Dragon 2", 8706854, "Dragon King");
    // array[2]=new DVD("Dragon BallZ", 3456789, "Studio");
    // array[3]=new DVD("Bleach", 8765314, "Yamamoto");
    // array[4]=new Book("Neva Gonna Give You Up", 131666, "Rick Ashley");

    // sort(array, 5);

}