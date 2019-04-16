class bank
{
  private:
  int accountno;//accountnumber
  char name[30];
  int balance;
  char type[10];// account type
  public:
  bank();
  bank(int no, char n[30], int bal);
  void withdraw(int amt);
  void deposit(int amt);
  void setName(char newname[30]);
  void getAccountNumber();
  void getName();
  void getBalance();
};
