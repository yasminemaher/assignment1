#include "Bank account.h"
void BankAccount:: deposit (double d)
{balance+= d;}
void BankAccount:: withdraw (double w)
{balance-=w;}
BankAccount::BankAccount(string name)
{holdername=name;
balance= 2000;
}
BankAccount::BankAccount(double sum, string name)
{balance=sum;
holdername=name;
}

double BankAccount::get_balance()
{return balance;
}
