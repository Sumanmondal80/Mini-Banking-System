#include "Bank.h"
#include <iostream>
#include <fstream>
#include <limits>
#include "Input.h"
#include <sstream>
#include <iomanip>
using namespace std;

Account* Bank::findAccount(int accNo) {
    for (auto &acc : accounts) {
        if (acc.getAccNumber() == accNo)
            return &acc;
    }
    return nullptr;
}

void Bank::loadFromFile() {
    ifstream file("data.txt");

    if (!file) {
        cout << "No data file found. Starting fresh.\n";
        return;
    }

    string line;

    while (getline(file, line)) {
        stringstream ss(line);

        int accNo, pin;
        string name;
        double balance;

        ss >> accNo;
        ss >> quoted(name);   
        ss >> balance >> pin;

        accounts.push_back(Account(accNo, name, balance, pin));
    }

    file.close();
}

void Bank::saveToFile() {
    ofstream file("data.txt");

    for (auto &acc : accounts) {
        file << acc.getAccNumber() << " "
             << quoted(acc.getName()) << " "   //  *
             << acc.getBalance() << " "
             << acc.getPin() << endl;
    }

    file.close();
}

void Bank::createAccount() {
   #include "Input.h"

int accNo = inputInt("Enter Account No: ");
string name = inputString("Enter Name without space: ");
int pin = inputInt("Enter PIN: ");
double balance = inputDouble("Enter Balance: ");
}

void Bank::depositMoney() {

    int accNo = inputInt("Enter Account No: ");
    int pin = inputInt("Enter PIN: ");

    Account* acc = findAccount(accNo);
    if (!acc || !acc->verifyPin(pin)) {
        cout << "Invalid credentials\n";
        return;
    }

    double amt = inputDouble("Enter Amount: ");

    acc->deposit(amt);
    cout << "Deposit successful\n";
}

void Bank::withdrawMoney() {
   int accNo = inputInt("Enter Account No: ");
    int pin = inputInt("Enter PIN: ");
    

    Account* acc = findAccount(accNo);
    if (!acc || !acc->verifyPin(pin)) {
        cout << "Invalid credentials\n";
        return;
    }

    double amt = inputDouble("Enter Amount: ");

    if (acc->withdraw(amt))
        cout << "Success\n";
    else
        cout << "Insufficient balance\n";
}

void Bank::checkBalance() {
    int accNo = inputInt("Enter Account No: ");
    int pin = inputInt("Enter PIN: ");

    Account* acc = findAccount(accNo);
    if (!acc || !acc->verifyPin(pin)) {
        cout << "Invalid credentials\n";
        return;
    }

    acc->display();
}

void Bank::transferMoney() {
    int from = inputInt("From Account: ");
    int pin = inputInt("Enter PIN: ");

    Account* sender = findAccount(from);
    if (!sender || !sender->verifyPin(pin)) {
        cout << "Invalid sender\n";
        return;
    }

    int to = inputInt("To Account: ");
    double amt = inputDouble("Amount: ");

    Account* receiver = findAccount(to);
    if (!receiver) {
        cout << "Receiver not found\n";
        return;
    }

    if (!sender->withdraw(amt)) {
        cout << "Insufficient balance\n";
        return;
    }

    receiver->deposit(amt);
    cout << "Transfer successful\n";
}

void Bank::showHistory() {

    int accNo = inputInt("Enter Account No: ");
    int pin = inputInt("Enter PIN: ");

    Account* acc = findAccount(accNo);
    if (!acc || !acc->verifyPin(pin)) {
        cout << "Invalid credentials\n";
        return;
    }

    acc->showHistory();
}