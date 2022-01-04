#include <string>
#include <iostream>
#include <vector>

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
    double getBalance()
    {
        return balance;
    }
};

class Customer
{
    private:
        int _code;
        string _name;
        vector<Account> _accounts;
    public:
        Customer(int code, string name)
        {
            _code = code;
            _name = name;
        }

        void AddNewAccount(Account account)
        {
            _accounts.push_back(account);
        }

        double GetTotalBalance()
        {
            double total = 0;
            for(Account a : _accounts)
            {
                total += a.getBalance();
            }

            return total;
        }
};


int main()
{
    int i;
    Customer customer(101, "Raman Gujral");
    Account account1("10101", 10000);
    Account account2("10102", 20000);
    
    customer.AddNewAccount(account1);
    customer.AddNewAccount(account2);

    cout << "Total Balance :" << customer.GetTotalBalance() << endl; // 30000

    return 0;
}