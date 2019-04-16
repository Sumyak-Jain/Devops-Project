#include<iostream.h>
#include<conio.h>
#include"bank.h"
using namespace std;
bank::bank()
{
  accountno=9999;
  name[]="";
  balance=0;
}
bank::bank(int no, char n[30], int bal)
{
  accountno=no;
  strcpy(n[],name[]);
  balance=bal;
}
bank::withdraw(int amt)
{
  if(balance== 0)
  {
    cout<<"Insufficient balance";
  }
  else
  {
    balance = balance - amt;
  }
}
bank::deposit(int amt)
{
   balance = balance + amt;
}
bank::setName(char newname[30])
{
  strcpy(newname[],name[]);
  return name[];
}
bank::getAccountNumber()
{
  return accountno;
}
bank::getName()
{
  return name[];
}
bank::getBalance()
{
  return balance;
}
class savings:public bank
{
  private:
  float rate;
  int days;
  public:
  savings()
  {
    rate=0.00;
    days=0;
  }
  savings(float r, int d)
  {
    rate=r;
    days=d;
  }
  void AddInterest(int d)
  {
    float i;
    i=(amt*rate*days)/100;
    amt=amt+i;
    return i;
  }
};
class checking:public bank
{
  private:
  int minbal;
  int fee;
  public:
  checking()
  {
    minbal=0;
    fee=0;
  }
  checking(int f)
  {
    fee=f;
  }
};
void displayAccountInfo(bank obj)
{
  cout<<Account number: <<accountno;
  cout<<Name: <<name;
  cout<<Balance: <<balance;
}

