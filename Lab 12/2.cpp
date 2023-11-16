#include <iostream>
#include <vector>
using namespace std;

template <typename Typ>

class my_stack{
private:
    vector<Typ> varray;

public:

    void push(const Typ& in){
        varray.push_back(in);
    }

    void pop(){

        if(varray.empty()){
            cout<<"Underflow"<<endl;
            return;
        }else{
            varray.pop_back();
        }
    }
    Typ peek(){
        if(varray.empty()){
            cout<<"Underflow"<<endl;
            return Typ(NULL);
        }
        return varray.back();
    }
};


int main(){
    my_stack<char> charstack;
    charstack.push('H');
    charstack.push('e');
    charstack.push('r');
    charstack.push('r');
    charstack.push('o');
    charstack.push(' ');
    charstack.push('E');
    charstack.push('b');
    charstack.push('u');
    charstack.push('r');
    charstack.push('y');
    charstack.push('n');
    charstack.push('y');
    charstack.push('a');
    charstack.push('n');

    cout<<charstack.peek()<<endl;
}