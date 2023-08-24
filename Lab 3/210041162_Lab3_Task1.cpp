#include <iostream>
using namespace std;

class Counter{
    private:
        int count;
        int incrmnt;

    public:
        void setIncrementStep(int step){
            incrmnt=step;
        }
        int getCount(){
            return count;
        }
        void increment(){
            count+=incrmnt;
        }
        void resetCount(){
            count=0;
        }
};

int main(){
    Counter cloak;
    int op, val;

    while(true){
        cout<<"1. Set Increment Value\n2. Get Count\n3. Increment\n4. reset count"<<endl;

        cin>>op;

        if(op==1){
            cin>>val;
            cloak.setIncrementStep(val);
        }else if(op==2){
            cout<<cloak.getCount()<<endl;
        }else if(op==3){
            cloak.increment();
        }else if(op==4){
            cloak.resetCount();
        }else {
            cout<<"Outta Range"<<endl;
        }
    }

}
