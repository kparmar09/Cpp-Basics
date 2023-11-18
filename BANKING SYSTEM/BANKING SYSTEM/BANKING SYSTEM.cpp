// BANKING SYSTEM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#define minBalance 500
using namespace std;

class Account {
private:
    static int accNo;

public:
    float balance;
    string firstName;
    string lastName;
    int num;

    Account(float bal = 0.0, string fn = "Null", string ln = "Null") {
        accNo++;
        num = accNo;
        firstName = fn;
        lastName = ln;
        balance = bal;
    }

    int getAccNo() {
        return num;
    }
    float getBalance() {
        return balance;
    }
    string getfName() {
        return firstName;
    }
    string getlName() {
        return lastName;
    }
    void Deposit(float amt) {
        balance = balance + amt;
        cout << amt << " " << "Rupees deposited" << endl;
        cout << "Current Balance: " << balance << endl;
    }
    void Withdraw(float amt) {
        if (balance - amt <= minBalance) {
            cout << "Your transaction is incomplete: Insufficient Balance";
        }
        else if (balance - amt > minBalance) {
            cout << amt << "Rupees withdrawn" << endl;
            balance = balance - amt;
            cout << "Current Balance: " << balance << endl;
        }
    }

    friend ostream& operator<<(ostream& os, Account& acc);
    friend ofstream& operator<<(ofstream& ofs, Account& acc);
    friend ifstream& operator>>(ifstream& ifs, Account& acc);

};

int Account::accNo = 0;

class BankEnd {
private:
    map<int, Account> data;
public:
    BankEnd() {
        Account acc;
        ifstream infile;
        infile.open("Account Details.txt");
        infile >> acc;
        data.insert(pair<int, Account>(acc.getAccNo(), acc));
    }

    Account OpenAccount(string fname, string lname, float bal) {
        Account acc(bal, fname, lname);
        ofstream outfile("Account Details.txt", ios::trunc);

        data.insert(pair<int, Account>(acc.getAccNo(), acc));

        map<int, Account>::iterator itr;

        for (itr = data.begin(); itr != data.end(); ++itr) {
            outfile << itr->second;
        }
        outfile.close();
        return acc;
    }
    Account BalanceEnquiry(int accNo) {
        map<int, Account>::iterator itr = data.find(accNo);
        return itr->second;
    }
    Account Deposit(int accno,float amt) {
        map<int, Account>::iterator itr = data.find(accno);
        itr->second.Deposit(amt);
        return itr->second;
    }
    Account Withdraw(int accno, float amt) {
        map<int, Account>::iterator itr = data.find(accno);
        itr->second.Withdraw(amt);
        return itr->second;
    }
    void AllAccounts() {
        map<int, Account>::iterator itr;
        for (itr = data.begin(); itr != data.end(); ++itr) {
            cout << "Account Number: " << itr->first << endl << itr->second << endl;
        }
    }
    void CloseAccount(int accno) {
        map<int, Account>::iterator itr = data.find(accno);
        cout << "Account " << accno << " deleted";
        data.erase(accno);
    }
};

ostream& operator<<(ostream& os, Account& acc) {
    os << "Account Number: " << acc.getAccNo() << endl << "Name: " << acc.getfName() << " " << acc.getlName() << endl
        << "Account Balance: " << acc.getBalance() << endl;
    return os;
}
ofstream& operator<<(ofstream& ofs, Account& acc) {
    ofs << acc.num << endl << acc.firstName << endl << acc.lastName << endl << acc.balance;
    return ofs;
}
ifstream& operator>>(ifstream& ifs, Account& acc) {
    ifs >> acc.num;
    ifs >> acc.firstName;
    ifs >> acc.lastName;
    ifs >> acc.balance;

    return ifs;
}


int main() {

    int option;
    int accNo;
    string fname, lname;
    float amt;
    Account acc;
    BankEnd b;
    
    cout << "**BANKING SYSTEM**" << endl << endl;

    do {

        cout << "Select an Option:-" << endl << endl;
        cout << "1. Open an Account" << endl;
        cout << "2. Balance Enquiry" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Close an Account" << endl;
        cout << "6. Show all Accounts" << endl;
        cout << "7. Quit" << endl << endl;

        cout << "Enter your Option: ";
        cin >> option;

        switch (option) {

        case 1:  
            cout << "Enter your First Name: ";
            cin >> fname;
            cout << "Enter your Last Name: ";
            cin >> lname;
            cout << "Enter initial amount to be deposited: ";
            cin >> amt;
            acc = b.OpenAccount(fname, lname, amt);
            cout << endl;
            cout << "Congratulations your account had been created!" << endl;
            cout << acc << endl << endl;
            break;
        case 2:
            cout << "Enter your Account Number: ";
            cin >> accNo;
            acc = b.BalanceEnquiry(accNo);
            cout << endl;
            cout << "Your Account info is displayed below: " << endl;
            cout << acc << endl << endl;
            break;
        case 3:
            cout << "Enter your Account Number: ";
            cin >> accNo;
            cout << "Enter amount to be deposited: ";
            cin >> amt;
            acc = b.Deposit(accNo,amt);  
            cout << endl;
            cout << acc << endl << endl;
            break;
        case 4:
            cout << "Enter your Account Number: ";
            cin >> accNo;
            cout << "Enter amount to be withdrawn";
            cin >> amt;
            acc = b.Withdraw(accNo, amt);
            cout << endl;
            cout << acc << endl << endl;
            break;
        case 5:
            cout << "Enter your Account Number: ";
            cin >> accNo;
            b.CloseAccount(accNo);
            cout << endl;
            cout << "Your Account has been closed successfully" << endl << endl;
            break;
        case 6:
            cout << "All Accounts in the database:- " << endl;
            b.AllAccounts();
            cout << endl;
            cout << acc << endl << endl;
            break;
        case 7:
            cout << "Thank You for Using. Please Visit Soon" << endl << endl;
            exit(0);
        } 

    } while (option != 7); 
      
    return 0;

}

