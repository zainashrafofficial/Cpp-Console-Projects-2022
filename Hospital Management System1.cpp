#include<iostream>
using namespace std;

class ATM {
    private:
        int balance;
        int pinCode, success;

    public:
        ATM(int bal, int pin) {
        balance = bal;
        pinCode = pin;
    }

    int getbalance() {
        return balance;
    }

    int withdraw(int amount, int pin) {
        if (pin != pinCode) {
            return false;
        }

        if (amount > balance) {
        return false;
        }

        balance -= amount;
        return true;
    }

    void deposit(int amount) {
        balance += amount;
    }

    int transfer(int amount, ATM receiver, int pin) {
        if (pin != pinCode) {
            return false;
            success = withdraw(amount, pin);
            if (success) {
                receiver.deposit(amount);
                return true;
            }
            else {
                return false;
            }
        }
    }
};

int main() {
    ATM atm(1000, 1234);
    int choice, amount, success, pin;
    char op;
    do{
        system("cls");
        
		cout << "\t\t\t\t-------------------------------------------\n";
        cout << "\t\t\t\t||=============== HBL ATM ===============||\n";
        cout << "\t\t\t\t-------------------------------------------\n";
        cout << "\n\n";
        
        cout << "1. View Balance \n" << endl;
        cout << "2. Cash Withdraw \n" << endl;
        cout << "3. Cash Deposit \n" << endl;
        cout << "4. Cash Transfer \n" << endl;
        cout << "5. Exit.\n" << endl;
        cout << "\n\tEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Your Balance is :" << atm.getbalance();
            break;

            case 2:
                cout << "Your Available Balance is :" << atm.getbalance() << endl;
                cout << "Enter the Amount to Withdraw :";
                cin >> amount;
                success = atm.withdraw(amount, 1234);

                if (success) {
                    cout << "Withdraw Successful..." << endl;
                } 
                else{
                    cout << "Insufficient balance..." << endl;
                }
            break;

            case 3:
                cout << "Enter amount to deposit :";
                cin >> amount;
                atm.deposit(amount);
                cout << "Deposit Successful..." << endl;
            break;

            case 4:
                cout << "Your Available Balance  :" << atm.getbalance() << endl;
                cout << "Enter the Amount to Transfer :";
                cin >> amount;
                cout << "Enter Pin Code :";
                cin >> pin;
                success = atm.transfer(amount, atm, pin);
                if (success){
                    cout << "Transfer Successfully..." << endl;
                }
                else{
                    cout << "Invalid pin or Insufficient Balance" << endl;
                }
            break;
        
            case 5:
                cout << "Thanks for using ATM" << endl;
                exit(1);
            break;
        
            default:
                cout << "Invalid Choice" << endl;
        }
        cout << "\nDo You Want To Try Another Transaction [Yes / No] :";
        cin >> op;
    }
    while (op == 'y' || op == 'Y');
}