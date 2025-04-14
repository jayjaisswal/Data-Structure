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
    string holder;
    double balance, depositAmount, withdrawAmount;

    cout << "Enter account holder name: ";
    cin >> holder;
    cout << "Enter initial balance: $";
    cin >> balance;

    BankAccount account(holder, balance);

    cout << "Enter the deposit amount: $";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter the withdrawal amount: $";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Account holder: " << account.getAccountHolder() << ", Balance: $" << account.getBalance() << endl;

    return 0;
}
