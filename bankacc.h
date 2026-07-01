#ifndef BANKACC_H
#define BANKACC_H

#include <string>
using namespace std;

class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(string name, double startingBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    string getOwnerName() const;
};

#endif