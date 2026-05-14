#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName; ////calc
    float balance;

public:
    // Function to create account
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Holder Name: ";
        cin.ignore();  // to clear buffer
        getline(cin, accountHolderName);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit function
    void deposit(float amount) {
        balance += amount;
        cout << amount << " deposited successfully.\n";
    }

    // Withdraw function
    void withdraw() {
        float amount;
        cout<<"enter";
        cin>>amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "₹" << amount << " withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance! Withdrawal failed.\n";
        }
    }

    // Display details
    void displayDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount obj;

    obj.createAccount();      // Create account
    obj.deposit(5000);        // Deposit ₹5000
    obj.withdraw();       // Attempt to withdraw ₹7000
    obj.displayDetails();     // Show final details

    return 0;
}
