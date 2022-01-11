#pragma once

// #ifdef HEADER_H
//#define HEADER_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Account {
    string accountNumber;
    int balance;

   public:
    Account(string accountNumber, int balance);
    string getAccountNumber() const;
    int getBalance() const;
    void setBalance(int balance);
    int depositBalance(int money);
    int withdrawBalance(int money);
};

class User {
    string cardNumber;
    int pinNumber;
    vector<Account> accounts;

   public:
    User(string cardNumber, int pinNumber);
    string getCardNumber() const;
    int getPinNumber() const;
    vector<Account> getAccounts() const;
    void setAccountBalance(int accountNum, int balance);
    int depositAccountBalance(int accountNum, int money);
    int withdrawAccountBalance(int accountNum, int money);
    void setAccounts(vector<Account> accounts);
    void addAccount(Account a);
    static bool isValidCardNumber(string cardNumber);
    static bool isValidPinNumber(int pinNumber);
};

// #endif