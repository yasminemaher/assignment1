#ifndef ba
#define ba
#include "string.h"
#include <iostream>
using namespace std;
class BankAccount
{
private:
	string holdername;
	string accountno;
	double balance;

public:
	void withdraw (double w);
	void deposit (double d);
	BankAccount (string name);
	BankAccount (double sum, string name);
	double get_balance ();

};

#endif