#pragma once

class SavingsAccount {
private:
    double balance;
    static double interestRate;
    static int objectCreated; 
    static int objectDestroyed;

public:
    SavingsAccount();
    ~SavingsAccount();

    double Getbalance() { return balance; }
    void Setbalance(double val) { balance = val; }
    static double GetinterestRate() { return interestRate; }
    void SetinterestRate(double val) { interestRate = val; }
    static int getCreated();
    static int getDestroyed();
    double calculateMonthlyInterest();
};