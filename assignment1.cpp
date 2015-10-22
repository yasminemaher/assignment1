#include "Bank account.h"
#include <iostream>
#include "string.h"
using namespace std;

void main ()
{
	string ahmed;
	BankAccount b (10000, ahmed);
	b.deposit(2000);
	cout<<"The balance is"<<b.get_balance();
	

}

