#include <iostream>
#include <vector>
using namespace std;


template <typename Typ>

class my_stack{
private:
    vector<Typ> varray;

public:

    class StackException{
    public:
        string error_type;

        StackException(string _error): error_type(_error){}
    };

    void push(const Typ& in){
        varray.push_back(in);
    }

    void pop(){
        if(varray.empty())
            throw StackException("[ERROR]: Stack Empty");
        
        varray.pop_back();
    }

    Typ peek(){
        if(varray.empty())
            throw StackException("[ERROR]: Stack Empty");
        return varray.back();
    }
};


int main(){
    my_stack<char> charstack;

    try{
        charstack.push('A');
        charstack.push('i');
        charstack.push('z');
        charstack.push('e');
        charstack.push('n');
        cout<<charstack.peek()<<endl;
        charstack.pop();
        cout<<charstack.peek()<<endl;
        charstack.pop();
        cout<<charstack.peek()<<endl;
        charstack.pop();
        cout<<charstack.peek()<<endl;
        charstack.pop();
        cout<<charstack.peek()<<endl;
        charstack.pop();
        cout<<charstack.peek()<<endl; //Will cause exception

    }catch(my_stack<char>::StackException obj){
        cout<<obj.error_type<<endl;
    }
}