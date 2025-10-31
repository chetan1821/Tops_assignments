#include<iostream>
using namespace std;
class BankAccount{
	private : int balance;
	public :
		BankAccount(int initialBalance){
			if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Initial balance invalid. Set to 0.\n";
        }
		}
		void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }
// Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Function to display balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};
main(){
	BankAccount account1(5000);

    account1.displayBalance();
    account1.deposit(600);
    account1.withdraw(300);
    account1.displayBalance();
}
