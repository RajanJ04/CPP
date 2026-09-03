/*4.Create a LibraryMember class with member ID, name, and number of overdue days. Use a
constructor to initialize the data. Write a member function to calculate the fine. Use a static
data member to store the fine rate per day and a static member function to modify or
display the fine rate.*/

#pragma once
#include<iostream>
using namespace std;

class LibraryMember
{
private:
	int ID, overdueDays;
	string name;

	inline static int fineRate = 5;

public:

	LibraryMember(int ID, int overdueDays, string name)
	{
		this->ID = ID;
		this->overdueDays = overdueDays;
		this->name = name;
	}

	int calculateFine()
	{
		return overdueDays * fineRate;
	}

	static void setFineRate(int rate)
	{
		fineRate = rate;
	}

	static void displayFineRate()
	{
		cout << "----------Fine rate per day is: -------------" << fineRate << endl;
	}

	void display()
	{
		cout << "\nMember ID: " << ID;
		cout << "\nName: " << name;
		cout << "\nOverdue Days: " << overdueDays;
		cout << "\nFine: " << calculateFine() << endl;
	}


};

// LibraryMember int fineRate = 5;