#include <iostream>

using namespace std;

class Calculator{

    private:
        int result;
        

    public:
        Calculator(){
            result= 0;
            display();
        }
        Calculator(int val){
            result=val;
            display();
        }
        ~Calculator(){
            cout<<"Calculator object is destroyed"<<endl;
        }
        int getValue(){
            return result;
        }
        void setValue(int val){
            result=val;
            display();
        }
        void add( int Value ){
            result+=Value;
            display();
        }
        void subtract( int Value ){
            result+=Value;
            display();
        }
        void multiply( int Value ){
            result*=Value;
            display();
        }
        void divideBy( int Value ){
            if(Value==0){
                cout<<"Error : divide by 0 is undefined."<<endl;
            }else {
                result/=Value;
            }
            display();
        }
        void clear(){
            result=0;
            display();
        }
        void display(){
            cout<<"Calculator display: "<<result<<endl;
        }
};
int main(){
    Calculator abasuss;
    Calculator babasuss(7);
    abasuss.add(7);
    abasuss.multiply(31);
    abasuss.subtract(42);
    abasuss.divideBy(7);
    abasuss.divideBy(0);
    abasuss.clear();
    abasuss.add(9);
    cout<<"Get Value: "<<abasuss.getValue()<<endl;

}