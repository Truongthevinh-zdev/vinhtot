#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "accounts.h"

using namespace std;

class Bank{
    private:
      string name;
      vector<Account> accounts;
    public:
       Bank(string name);
       void creatAccount();
       void withdraw();
       void deposit();
       void showAll();
};