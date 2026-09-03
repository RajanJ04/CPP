/*Create a Distance class with feet and inches as data members. Use constructors to initialize
Distance objects. Overload the '+' operator to add two Distance objects and overload the '=='
operator to compare whether two Distance objects are equal. Display the appropriate
results.*/

#pragma once
#include<iostream>
using namespace std;

class Distance
{
private:
	float feet;
    float inches;

public:

	Distance(int feet, int inches)
	{
		this->feet = feet;
		this->inches = inches;
	}

	void display()
	{
		cout << "\nThe feet traveled are: " << feet;
		cout << "\nThe inches traveled are: " << inches;
	}

	Distance operator+(Distance& obj)
	{
		Distance temp(0, 0);
		temp.feet = this->feet + obj.feet;
		temp.inches = this->inches + obj.inches;
		return temp;
	}

	bool operator==(Distance& obj)
	{
		if (this->feet == obj.feet && this->inches == this->inches)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
};