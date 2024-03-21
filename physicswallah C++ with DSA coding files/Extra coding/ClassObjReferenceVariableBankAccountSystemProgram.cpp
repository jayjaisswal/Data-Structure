#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " into the account. New balance: $" << balance << endl;
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from the account. New balance: $" << balance << endl;
            return true;
        }
        else {
            cout << "Insufficient funds. Withdrawal not allowed." << endl;
            return false;
        }
    }

    double getBalance() const {
        return balance;
    }

    const string& getAccountHolder() const {
        return accountHolder;
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0);
    BankAccount account2("Jane Smith", 500.0);

    BankAccount& refAccount1 = account1;
    BankAccount& refAccount2 = account2;

    refAccount1.deposit(200.0);
    refAccount2.withdraw(100.0);

    cout << "Account holder: " << account1.getAccountHolder() << ", Balance: $" << account1.getBalance() << endl;
    cout << "Account holder: " << account2.getAccountHolder() << ", Balance: $" << account2.getBalance() << endl;

    return 0;
}
