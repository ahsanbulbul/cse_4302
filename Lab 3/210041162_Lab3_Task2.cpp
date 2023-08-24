#include <iostream>
using namespace std;

class RationalNumber{
    private:
        int p, q, tmp;
        double d;
    public:
        void assign(int numerator, int denominator){
            if(denominator==0)
                cout<<"ERROR !!! Can't store undefined value."<<endl;
            else{
                p=numerator;
                q=denominator;
            }
        }
        double convert(){
            return d=(double(p)/double(q));
        }
        void invert(){
            if(p==0)
                cout<<"ERROR !!! Undefined value."<<endl;
            else{
                tmp=p;
                p=q;
                q=tmp;
            }
        }
        void print(){
            //by default uses 0/0
            cout<<p<<"/"<<q<<endl;
        }
};

int main(){
    int op, val, a, b;
    RationalNumber fraction; 

    while(true){
        cout<<"1. Assign\n2. Convert\n3. Invert\n4. print"<<endl;

        cin>>op;

        if(op==1){
            cout<<"p q :"<<endl;
            cin>>a>>b;
            fraction.assign(a, b);
        }else if(op==2){
            cout<<fraction.convert()<<endl;
        }else if(op==3){
            fraction.invert();
        }else if(op==4){
            fraction.print();
        }else {
            cout<<"Outta Range"<<endl;
        }
    }
}