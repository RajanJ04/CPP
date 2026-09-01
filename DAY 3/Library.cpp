/*4.Create a LibraryMember class with member ID, name, and number of overdue days. Use a
constructor to initialize the data. Write a member function to calculate the fine. Use a static
data member to store the fine rate per day and a static member function to modify or
display the fine rate.*/

#include<iostream>
#include<string>
using namespace std;

class LibraryMember
{
private:
    int ID;
    string name;
    int overdueDays;

    // Static data member
    static int fineRate;

public:

    // Constructor
    LibraryMember(int ID, string name, int overdueDays)
    {
        this->ID = ID;
        this->name = name;
        this->overdueDays = overdueDays;
    }

    // Calculate fine
    int calculateFine()
    {
        return overdueDays * fineRate;
    }

    // Static function to modify fine rate
    static void setFineRate(int rate)
    {
        fineRate = rate;
    }

    // Static function to display fine rate
    static void displayFineRate()
    {
        cout << "\nFine Rate per Day: " << fineRate;
    }

    // Display member details
    void display()
    {
        cout << "\nMember ID: " << ID;
        cout << "\nName: " << name;
        cout << "\nOverdue Days: " << overdueDays;
        cout << "\nFine: " << calculateFine() << endl;
    }
};

// Initialize static member
int LibraryMember::fineRate = 5;


int main()
{
    // Array of objects
    LibraryMember members[3] =
    {
        LibraryMember(101, "Rajan", 5),
        LibraryMember(102, "Amit", 10),
        LibraryMember(103, "Rahul", 3)
    };

    // Display current fine rate
    LibraryMember::displayFineRate();

    // Display all members
    cout << "\n\nMember Details:";

    for(int i = 0; i < 3; i++)
    {
        members[i].display();
    }

    // Change fine rate
    LibraryMember::setFineRate(10);

    cout << "\nAfter changing fine rate:";
    LibraryMember::displayFineRate();

    // Display updated fine
    for(int i = 0; i < 3; i++)
    {
        members[i].display();
    }

    return 0;
}