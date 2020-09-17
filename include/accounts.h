#pragma once

#include <iostream>
using namespace std;

class Account{
    private :
      int id;
      double balance;
      static int count; // count how many Account object created
    public:
      Account();
      Account(double balance);

      int getID();
      double getBalance();

      void withdraw(double amount);
      void deposit(double amount);

      void show();
};