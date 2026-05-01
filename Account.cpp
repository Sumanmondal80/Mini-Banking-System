#include "Account.h"
#include <iostream>
#include <sstream>
using namespace std;

Account::Account(int accNo, string n, double b, int p) {
    accNumber = accNo;
    name = n;
    balance = b;
    pin = p;
}

int Account::getAccNumber() const {
    return accNumber;
}

bool Account::verifyPin(int p) const {
    return pin == p;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
    addHistory("Deposited: " + to_string(amount));
}

bool Account::withdraw(double amount) {
    if (amount > balance) return false;
    balance -= amount;
    addHistory("Withdrawn: " + to_string(amount));
    return true;
}

void Account::addHistory(string entry) {
    history.push_back(entry);
}

void Account::showHistory() const {
    for (auto &h : history) cout << h << endl;
}

string Account::serialize() const {
    stringstream ss;
    ss << accNumber << " " << name << " " << balance << " " << pin;
    return ss.str();
}

void Account::display() const {
    cout << "Acc: " << accNumber << " | Name: " << name 
         << " | Balance: " << balance << endl;
}

string Account::getName() const {
    return name;
}

int Account::getPin() const {
    return pin;
}