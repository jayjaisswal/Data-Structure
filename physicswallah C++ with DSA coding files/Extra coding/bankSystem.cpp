#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    double balance;

    void init(const string& holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }
};

int main() {
    BankAccount account;
    BankAccount& accountRef = account;

    string holder;
    double initialBalance, depositAmount, withdrawAmount;

    cout << "Enter account holder's name: ";
    cin >> holder;

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    accountRef.init(holder, initialBalance);

    cout << "Enter the deposit amount: $";
    cin >> depositAmount;
    accountRef.deposit(depositAmount);

    cout << "Enter the withdrawal amount: $";
    cin >> withdrawAmount;

    if (accountRef.withdraw(withdrawAmount)) {
        cout << "Withdrawal successful." << endl;
    } else {
        cout << "Insufficient funds. Withdrawal not allowed." << endl;
    }

    cout << "Account holder: " << accountRef.accountHolder << ", Balance: $" << accountRef.balance << endl;

    return 0;
}
