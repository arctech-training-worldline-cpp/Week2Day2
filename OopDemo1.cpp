/*
#include <string>
#include <iostream>

using namespace std;

class Account
{
private:
    string accountNumber;
    double balance;

public:
    Account(string an, double openingBalance)
    {
        accountNumber = an;
        balance = openingBalance;
    }

    void Deposit(double value)
    {
        balance += value;
    }

    bool Withdraw(double value)
    {
        if (balance - value < 0)
            return false;

        balance -= value;
        return true;
    }

    // public accessor
    double getDouble()
    {
        return balance;
    }
};

int main()
{
    Account account1("10101", 10000);

    char answer;
    cout << "Do you want to (d)eposit or (w)ithdraw: ";
    cin >> answer;

    double transactionValue;
    cout << "Enter the value: ";
    cin >> transactionValue;

    if (answer == 'd')
        account1.Deposit(transactionValue);
    else if (answer == 'w')
    {
        bool success = account1.Withdraw(transactionValue);
        cout << (success ? "Withdrawal successfull" : "Failure!! You dont have enough balance!!") << endl;
    }

    //Console.WriteLine($"Your balance is {account1.balance}");
    cout << "Your balance is " << account1.getDouble() << endl;

    return 0;
}
*/