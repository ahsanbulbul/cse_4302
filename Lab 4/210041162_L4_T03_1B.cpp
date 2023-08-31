#include <iostream>
#include <string>
using namespace std;

class BankAccount{

    private:
        int account_number,
            holder_number,
            current_balance,
            minimum_balance;
            
        string holder_name,
                account_type;

    public:
        BankAccount(){
            account_number=8888;
            holder_number=8888;
            holder_name="Unknown";
            account_type="Unknown";
            current_balance=0;
            minimum_balance=0;
        }
        BankAccount(int number, string name ,int h_number, string type, int balance, int min_balance){
            account_number=number;
            holder_name=name;
            holder_number=h_number;
            account_type=type;
            current_balance=balance;
            minimum_balance=min_balance;
        }
        ~ BankAccount(){
            cout<<"[WARNING]!!!\tAccount of "<<holder_name<<" with account no "<<account_number<<" is destroyed with a balance "<<current_balance<<" Tk."<<endl;
        }
        void showInfo(){
            cout<<"INFO\nAccount Number:\t"<<account_number<<endl;
            cout<<"Account Holder Name:\t"<<holder_name<<endl;
            cout<<"Holder Number:\t"<<holder_number<<endl;
            cout<<"account type:\t"<<account_type<<endl;
            cout<<"current balance:\t"<<current_balance<<endl;
            cout<<"minimum balance:\t"<<minimum_balance<<endl;
        }
        void showBalance(){
            cout<<"The balance is "<<current_balance<<endl;
        }
        void deposit(int add){
            current_balance+=add;
        }
        void withdraw(int rmv){
            int tmp=current_balance-rmv;

            if(tmp<minimum_balance)
                cout<<"Sorry! Your account must have "<<minimum_balance<<" after transection"<<endl;
            else
                current_balance=tmp;
        }
        void update(){
            cout<<"Update:\n---------------"<<endl;
            cout<<"1.Account Holder Name"<<endl;
            cout<<"2.account type"<<endl;
            cout<<"3.current_balance"<<endl;
            cout<<"4.minimum_balance"<<endl;
            cout<<"5.Account Number"<<endl;
            cout<<"6.Holder number"<<endl;

            int choice, val;
            string input;
            cin>>choice;

            switch (choice){
                case 1:
                    cin>>input;
                    holder_name=input;
                    break;
                case 2:
                    cin>>input;
                    account_type=input;
                    break;
                case 3:
                    cin>>val;
                    current_balance=val;
                    break;
                case 4:
                    cin>>val;
                    minimum_balance=val;
                    break;
                case 5:
                    cin>>val;
                    account_number=val;
                    break;
                case 6:
                    cin>>val;
                    holder_number=val;
                    break;
            }
        }
        void giveInterst(int rate=3){
            int interest, tax;

            interest=(current_balance*3/100);
            tax=interest/10;
            current_balance=current_balance+interest-tax;
        }

};

int main(){
    BankAccount strawHat(420,"Monkey D Luffy", 1756, "Savings", 10000000, 9000);
    strawHat.showInfo();
    // strawHat.update();
    strawHat.deposit(59);
    strawHat.showBalance();
    strawHat.withdraw(1842);
    strawHat.withdraw(222222222);
    strawHat.showBalance();
    strawHat.giveInterst(7);
    strawHat.showBalance();
}