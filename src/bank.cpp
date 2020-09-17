#include "../include/bank.h"
#include <iostream>
using namespace std;

Bank::Bank(string name){
    this->name=name;
}

void Bank::creatAccount(){
   // get user to initial balance
   double balance;

   cout << "Enter initial balance: ";
   cin >> balance;
   // creat an account object

   Account acc(balance);
   // add account object to the vector accounts
   accounts.push_back(acc);
}
void Bank::withdraw(){
    int id ;
    double amount;
   // ask user to enter id, amount to withdraw
    cout << "Enter Id : " ;
    cin >> id;
    cout << " Enter amout : ";
    cin >> amount;
   
   // get account object with that id
   // call withdraw method from that object
   accounts[id].withdraw(amount);
}
void Bank::deposit(){
    int id;
    double amount;
   // ask user to enter account id , amount to deposit
    cout << "Enter Id : " ;
    cin >> id ;
    cout << " Enter amout : ";
    cin >> amount ;
   // get account object with that id
   // call deposit method from that object
    accounts[id].deposit(amount);
}
void Bank::showAll(){
   // loop through all account in the vector
   for(int id = 0; id < accounts.size(); id++){
       accounts[id].show();
   }
   // each 
}