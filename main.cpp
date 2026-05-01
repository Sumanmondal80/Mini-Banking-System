#include <iostream>
#include "Bank.h"
#include "Input.h"

using namespace std;

int main() {
    Bank bank;
    bank.loadFromFile();

    while (true) {

        int choice = inputInt(
            "\n1.Create\n2.Deposit\n3.Withdraw\n4.Balance\n5.Transfer\n6.History\n7.Exit\nChoice: "
        );

        switch (choice) {
            case 1: bank.createAccount(); break;
            case 2: bank.depositMoney(); break;
            case 3: bank.withdrawMoney(); break;
            case 4: bank.checkBalance(); break;
            case 5: bank.transferMoney(); break;
            case 6: bank.showHistory(); break;
            case 7: 
                bank.saveToFile(); 
                cout << "Data saved. Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice! Please select 1-7.\n";
        }
    }
}