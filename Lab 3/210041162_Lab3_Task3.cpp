#include <iostream>
#include <string>
using namespace std;

class bankoAccount{
    private:
        string name;
        string type;
        string number;//account number
        int balance;
        
    public:
        void customerDetails(string name_of_customer, string account_id, int initial_deposit){
            name=name_of_customer;
            number=account_id;
            balance=initial_deposit;
        }
        void accountType(string accounttype_of_customer){
            type=accounttype_of_customer;
        }
        void balanceShow(){// blance is already in use
            cout<<"Current balance is: "<< balance<<endl;
        }
        void deposit(int add){
            balance+=add;
        }
        void withdraw(int rmv){
            balance-=rmv;
        }
        void display(){
            cout<<"Name :"<<name<<endl;
            cout<<"Account No. :"<<number<<endl;
            cout<<"Account Type :"<<type<<endl;
            cout<<"Current Balance :"<<balance<<endl;
        }
};

int main(){
    bankoAccount customer;
    
    string c_name, c_num, c_type;
    int c_bal, op, var;

    while(true){
        cout<<"1. CustomerDetails\n2. accountType\n3. balance\n4. deposit\n5. withdraw\n6. display"<<endl;

        cin>>op;

        if(op==1){
            cout<<"Name :"<<endl;
            cin>>c_name;
            cout<<"Account Number :"<<endl;
            cin>>c_num;
            cout<<"Add balance :"<<endl;
            cin>>c_bal;
            
            customer.customerDetails(c_name, c_num, c_bal);
        }else if(op==2){
            cout<<"Enter Your account type [Current/Savings]"<<endl;
            cin>>c_type;

            customer.accountType(c_type);
        }else if(op==3){
            customer.balanceShow();
        }else if(op==4){
            cin>>var;

            customer.deposit(var);
        }else if(op==5){
            cin>>var;

            customer.withdraw(var);
        }else if(op==6){
            customer.display();
        }else {
            cout<<"Outta Range"<<endl;
        }
    }
}