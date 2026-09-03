#include"operator.h"

int main()
{
	Distance d1(12.0f, 5.0f);
	d1.display();

	Distance d2(10.0f, 15.0f);
	d2.display();

    cout<<"+ operator";
	Distance d3(0, 0);
	d3 = d1 + d2;
	d3.display();

    return 0;
}
