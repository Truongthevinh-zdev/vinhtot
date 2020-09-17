#include <iostream>
#include "../include/accounts.h"
#include "../include/bank.h"
using namespace std;
void testAccount(){
	Account acc01;
    acc01.show();

	Account acc02(10000);
	acc02.show();

	Account *pacc = new Account(5000);
	pacc->deposit(1000);
	pacc->show();

	pacc->deposit(2000);
	pacc->show();

	delete pacc;

}

void testBank(){
   Bank tpb("Tien Phong Bank");

   tpb.creatAccount();
   tpb.creatAccount();
   tpb.creatAccount();

   tpb.showAll();

   tpb.withdraw();
   tpb.deposit();

   tpb.showAll();
}
int main(int argc, char *argv[])
{
	testBank();
  // testAccount();
}