#include <iostream>
using namespace std;

class ATM 
{
private:
    double balance;
    int pin;

public:
    void login()
    {
        cout<<"Enter PIN:";
        cin>>pin;
    }
    void bal()
    {
        cout<<"Enter Balance:";
        cin>>balance;
    }
    void deposit(double a)
    {
        balance=a+balance;
        printf("\nYou have deposited the amount successfully");
        cout<<"\nBalance is  "<<balance;
    }
    void withdraw(double b)
    {
        balance=balance-b;
        printf("\nYou have withdrawn the amount successfully");
        cout<<"\nBalance is  "<<balance;
    }
};

int main()
{
    int i;
    ATM a1;
    for(i=1;i<=3;i++)
    {
    int choice,amount;
    
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                a1.bal();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                a1.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                a1.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
 return 0;
} 