#include "header.h"

using namespace std;

Account::Account(string accountNumber, int balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
}

string Account::getAccountNumber() const { return this->accountNumber; }

int Account::getBalance() const { return this->balance; }

void Account::setBalance(int balance) { this->balance = balance; }

int Account::depositBalance(int money) {
    this->balance += money;
    return this->balance;
}

int Account::withdrawBalance(int money) {
    if (this->balance < money) {
        return -1;
    }
    this->balance -= money;
    return this->balance;
}

User::User(string cardNumber, int pinNumber) {
    this->cardNumber = cardNumber;
    this->pinNumber = pinNumber;
}

string User::getCardNumber() const { return this->cardNumber; }

int User::getPinNumber() const { return this->pinNumber; }

vector<Account> User::getAccounts() const { return this->accounts; }

void User::setAccountBalance(int accountNum, int balance) {
    this->accounts[accountNum].setBalance(balance);
}

int User::depositAccountBalance(int accountNum, int money) {
    return this->accounts[accountNum].depositBalance(money);
}

int User::withdrawAccountBalance(int accountNum, int money) {
    return this->accounts[accountNum].withdrawBalance(money);
}

void User::setAccounts(vector<Account> accounts) { this->accounts = accounts; }

void User::addAccount(Account a) { accounts.push_back(a); }

bool User::isValidCardNumber(string cardNumber) {
    bool isValid = (cardNumber.length() == 19);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char cur = cardNumber[5 * i + j];
            isValid &= ('0' <= cur && cur <= '9');
        }
    }

    for (int i = 0; i < 3; i++) {
        char cur = cardNumber[5 * i + 4];
        isValid &= (cur == '-');
    }

    return isValid;
}

bool User::isValidPinNumber(int pinNumber) {
    return (pinNumber / 1000 != 0) && (pinNumber / 1e6 == 0);
}