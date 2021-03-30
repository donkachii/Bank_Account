#include <iostream>
#include <iomanip>

using namespace std;

class bank_account /// Class declaration. I declared my Class Bank_account here
{
    int account_number;
    double balance;
public:
    bank_account(int acct = 0, double bal = 0)
    {
        account_number = acct;
        balance = bal;
    }
    void open_account(); /// Method declaration. I declared my method open_account.
    void record_deposit(double amount); /// Method declaration.
    void display(); /// Method declaration.
};

void bank_account::open_account() /// Method definition.
{
    string fname;
    string lname;
    string phone_number;
    cout << "___________________________" << endl;
    cout << "|To Open your bank Account " << endl;
    cout << "|Enter your first name: ";
    cin >> fname;
    cout << "|Enter your last name: ";
    cin >> lname;
    cout << "|Input your phone number: ";
    cin >> phone_number;
    cout << endl;
    cout << "Welcome " << fname << " " << lname << ". Your account number is " << account_number << endl;
    cout << endl;

}

void bank_account::record_deposit(double amount)
{
    cout << "Previous Balance: " << balance << "\n" << endl;
    balance = balance + amount;
    cout << "Amount Deposited: " << amount << "\n" << endl;
}

void bank_account::display()
{
    cout << " __________________________" << endl;
    cout << "|" << setw(12) << "Account Number" << setw(12) << fixed << setprecision(2) << "Balance" << "|" << endl;
    cout << "|" << setw(12) << account_number << setw(14) << fixed << setprecision(2) << balance << "|" << endl;

}

int main(){
    int account_number = 40058001;
    double balance;
    double deposit_amount = 100;
    bank_account cus(account_number, balance); /// Here, cus is the object of the class bank_account.
    cus.open_account();
    cus.record_deposit(deposit_amount);
    cus.display();
    return 0;
}
