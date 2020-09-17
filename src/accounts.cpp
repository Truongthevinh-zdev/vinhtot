#include "../include/accounts.h"
// initate static data
int Account::count = 0;
Account::Account(){
    id = count++ ;
    balance = 0.0;
}

Account::Account(double balance){
    id = count++ ;
    this->balance = balance;
}

int Account::getID(){
    return id;
}
double Account::getBalance(){
    return balance;
}

void Account::withdraw(double amount){
    balance = balance - amount;
}
void Account::deposit(double amount){
    balance = balance + amount;
}

void Account::show(){
    cout << "Account id " << id ;
    cout << " , balance: " << balance << endl;
}