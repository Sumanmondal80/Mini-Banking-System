#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
using namespace std;

class Account {
private:
    int accNumber;
    string name;
    double balance;
    int pin;
    vector<string> history;

public:
    Account(int accNo, string n, double b, int p);

    int getAccNumber() const;
    bool verifyPin(int p) const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);

    void addHistory(string entry);
    void showHistory() const;

    string serialize() const;
    void display() const;
    string getName() const;
    int getPin() const;
};

#endif