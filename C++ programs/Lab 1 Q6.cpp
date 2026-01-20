#include <iostream>
using namespace std;

class BankAccount 
{
private:
    int accountNumber;
    char accountType;   // S for Savings, C for Current
    float balance;

public:
    // constructor
    BankAccount() 
	{
        balance=200000;
    }
    void getAccountDetails() 
	{
        cout<<"Enter Account Number: ";
        cin >> accountNumber;

        cout<<"Enter Account Type (S for Savings, C for Current): ";
        cin>> accountType;
    }
    void withdrawMoney() 
	{
        float withdrawAmount,tax = 0;
        cout<<"Enter amount to withdraw: ";
        cin>>withdrawAmount;

        if (withdrawAmount>100000) 
		{
            cout<<"Error:Cannot withdraw more than 100000 at a time.\n";
            return;
        }
        if (withdrawAmount>balance) 
		{
            cout<<"Error:Insufficient balance.\n";
            return;
        }
        // Savings Account Rules
        if (accountType=='S'||accountType=='s') // to avoid case sensitive error to occur if user writes S or s in input 
		{
            if (withdrawAmount>50000) 
			{
                tax=withdrawAmount * 0.05;
            }
        }
        // Current Account Rules
        else if (accountType=='C'||accountType=='c')// avoid case sensitive error to occur if user writes C or c in input 
		 {
            tax=100;  // withdrawal fee
            if (withdrawAmount>50000) 
			{
                tax+=withdrawAmount*0.05;
            }
        }
        else 
		{
            cout<<"Invalid account type.\n";
            return;
        }
        balance =balance-withdrawAmount-tax;
        cout<<"\nWithdrawal Successful!\n";
        cout<<"Tax/Fee Deducted: "<<tax<< endl;
        cout<<"Remaining Balance: "<<balance<< endl;
    }
};

int main() 
{
    BankAccount user;
    user.getAccountDetails();
    user.withdrawMoney();
    return 0;
}


