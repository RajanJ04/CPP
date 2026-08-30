/*Create a BankAccount class with account number, customer name, and balance. Use a
constructor to initialize account details. Implement member functions to deposit, withdraw,
and display the balance. Create multiple account objects using an array of objects.*/

#include<iostream>
using namespace std;

class BankAccount
{
    private:
    int accno;
    float balance;
    string name;

    public:

    BankAccount (int a, string b, float c)
    {
        accno = a;
        balance = c;
        name = b;
    }

    void deposit (float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        balance -=amount;
    }

    void display()
    {
        cout<<"\naccount number: "<<accno;
        cout<<"\nName: "<<name;
        cout<<"\nBalance: "<<balance;

    }

};


int main()
{
    BankAccount b[2]={
        BankAccount(101, "Rajan", 5000),
        BankAccount(102, "Akashay", 8000)
    };
    
    b[0].deposit(2000);
    b[0].withdraw(1000);

    b[1].deposit(1000);
    b[1].withdraw(3000);

    for(int i = 0; i < 2; i++)
        b[i].display();

    return 0;
}