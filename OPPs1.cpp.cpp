#include <iostream>
#include <string>
using namespace std;

class bank {
public:
    string name;
    string acc_num;
    int with_amt, dep_amt;
    int balance, bal;

    void assign();
    void deposit();
    void withdraw();
    void display();
};

void bank::assign() {
    cout << "Enter name of account holder: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> acc_num;
    cout << "Enter balance amount: ";
    cin >> balance;
    bal = balance;
}

void bank::deposit() {
    cout << "\nEnter amount to be deposited: ";
    cin >> dep_amt;
    balance += dep_amt;
}

void bank::withdraw() {
    if (balance < 500) {
        cout << "Insufficient amount\n";
    } else {
        cout << "\nSufficient balance available";
        cout << "\nEnter amount to be withdrawn: ";
        cin >> with_amt;
        if (with_amt > balance) {
            cout << "Insufficient funds\n";
        } else {
            balance -= with_amt;
        }
    }
}

void bank::display() {
    cout << "\n** Bank Details **";
    cout << "\nName of account holder: " << name;
    cout << "\nAccount Number: " << acc_num;
    cout << "\nBalance Amount in Account: " << balance << "\n";
}

int main() {
    bank b;
    int choice, ch;
    do {
        cout << "\nEnter operation to be performed:\n";
        cout << "1. Assign\n2. Deposit\n3. Withdraw\n4. Display\n";
        cin >> choice;
        switch (choice) {
            case 1:
                b.assign();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.withdraw();
                break;
            case 4:
                b.display();
                break;
            default:
                cout << "\n--Wrong choice--";
                break;
        }
        cout << "\nDo you want to continue (0/1)? ";
        cin >> ch;
    } while (ch == 1);
    return 0;
}