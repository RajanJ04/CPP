#include"LibraryMember.h"

int main()
{
	LibraryMember members[3] =
	{
		LibraryMember(101, 2 , "Rajan"),
		LibraryMember(102, 3, "Akashay"),
		LibraryMember(103, 4, "Bhushan")
	};

	LibraryMember::displayFineRate;

	for (int i = 0; i < 3; i++)
	{
		members[i].display();
	}

	LibraryMember::setFineRate(10);

	cout << "\n\nAfter changing fine rate:";
	LibraryMember::displayFineRate;

	for (int i = 0; i < 3; i++)
	{
		members[i].display();
	}
	return 0;
}
