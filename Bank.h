#ifndef BANK_H
#define BANK_H

#include "Account.h"
#include <vector>

class Bank {
private:
    vector<Account> accounts;

    Account* findAccount(int accNo);

public:
    void loadFromFile();
    void saveToFile();

    void createAccount();
    void depositMoney();
    void withdrawMoney();
    void checkBalance();
    void transferMoney();
    void showHistory();
};

#endif