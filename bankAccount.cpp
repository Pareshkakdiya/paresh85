#include <iostream>
using namespace std;
class bankAccount
{

    string name;
    int accNumber;
    string accType;
    float balanceAmount;
    int update_balance;
    int update_balance1;

public:
    void assignValues(string name, int accNumber, string accType, float balanceAmount)
    {
        this->name = name;
        this->accNumber = accNumber;
        this->accType = accType;
        this->balanceAmount = balanceAmount;
        cout << name << " " << accNumber << " " << accType << " " << balanceAmount << endl;
    }
    void depositAmount(int deposit)
    {
        cout << "Before deposit amount " << balanceAmount << endl;
        cout << "Deposit amount " << deposit << endl;
        cout << "After deposit amount " << balanceAmount + deposit << endl;
        update_balance = balanceAmount + deposit;
    }
    void withdrawAmount(int withdraw)
    {
        cout << "available balance " << balanceAmount << endl;
        cout << "withdraw amount " << withdraw << endl;
        cout << "After withdraw amount " << balanceAmount - withdraw << endl;
        update_balance1 = balanceAmount - withdraw;
    }
    void Display()
    {
        cout << name << " " << update_balance1 << endl;
    }
};
int main()
{
    bankAccount b;
    b.assignValues("Paresh", 99090, "Saving", 50000);
    b.depositAmount(10000);
    b.withdrawAmount(5000);
    b.Display();

    return 0;
}