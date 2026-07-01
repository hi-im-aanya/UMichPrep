#include <iostream>
#include <fstream> // file stream library
using namespace std;


class BankAccount{
    private:
    string ownerName;
    double balance;
    
    public:
    BankAccount(string n, double b){
        ownerName = n;
        balance = b;
    }

    void deposit(int x){
        balance += x;
        cout << "Your balance is " << balance << " now." << endl;
    }

    void withdraw(int x){
        if(x <= balance){
            balance -= x;
            cout << "Your balance is " << balance << " now." << endl;
        }
        else{
            cout << "Not enough available balance to withdraw $" << x << endl;
        }
    }

    void getBalance(){
        cout << "Your balance is " << balance << endl;
    }

    // void printSummary() What would the summary print????



};

int main(){
    BankAccount aanya("Aanya", 10000000);
    BankAccount aman("Aman", 500000);
    BankAccount anjali("Anjali", 80000000);
    BankAccount aryana("Aryana", 500);

    aman.withdraw(800);
    aanya.deposit(100);
    anjali.deposit(5000);
    aryana.withdraw(500);

    aanya.getBalance();
    anjali.getBalance();
    aryana.getBalance();
    aman.getBalance();
}