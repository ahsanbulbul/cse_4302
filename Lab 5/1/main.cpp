#include <iostream>
#include "SavingsAccount.cpp"
//not working on my system (debian) in default system. so work-around

using namespace std;

int main() {
    SavingsAccount saver1, saver2;

    saver1.Setbalance(2000);
    saver2.Setbalance(3000);

    saver1.SetinterestRate(3);
    saver2.SetinterestRate(3);

    cout << "For rate=3" << endl;
    cout << "Saver1 monthly interest: " << saver1.calculateMonthlyInterest() << endl;
    cout << "Saver2 monthly interest: " << saver2.calculateMonthlyInterest() << endl;
    cout << "Saver1 balance: " << saver1.Getbalance() << endl;
    cout << "Saver2 balance: " << saver2.Getbalance() << endl;
    cout<<"===================================="<<endl;
    cout << "For rate=4" << endl;
    saver1.SetinterestRate(4);
    saver2.SetinterestRate(4);
    cout << "Saver1 monthly interest: " << saver1.calculateMonthlyInterest() << endl;
    cout << "Saver2 monthly interest: " << saver2.calculateMonthlyInterest() << endl;
    cout << "Saver1 balance: " << saver1.Getbalance() << endl;
    cout << "Saver2 balance: " << saver2.Getbalance() << endl;
    cout << "objects created : " << SavingsAccount::getCreated() << endl;
    cout << "objects destroyed : " << SavingsAccount::getDestroyed() << endl;
}
