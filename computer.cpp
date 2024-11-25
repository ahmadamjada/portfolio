#include <iostream>
using namespace std;

void checkBalance(float balance) {  // Call by value (reading balance only)
    cout << "Your current balance is: $" << balance << endl;
}

void deposit(float &balance, float amount) {  // Call by reference to modify balance
    balance += amount;
    cout << "You have successfully deposited $" << amount << ". New balance: $" << balance << endl;
}

void withdraw(float &balance, float amount) {  // Call by reference to modify balance
    if (balance >= amount) {
        balance -= amount;
        cout << "You have successfully withdrawn $" << amount << ". New balance: $" << balance << endl;
    } else {
        cout << "Insufficient funds! Current balance: $" << balance << endl;
    }
}

int main() {
    float balance = 0.0;  // Initial balance
    int choice;
    float amount;
    
    while (true) {
        cout << "\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoose an option: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                checkBalance(balance); // Call by value
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                deposit(balance, amount); // Call by reference
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdraw(balance, amount); // Call by reference
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid option! Try again." << endl;
        }
    }
}
