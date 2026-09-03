#include"Complex.h"

int main()
{
    Complex c1(2, 4);
    c1.display();

    Complex c2(10, 5);
    c2.display();

    Complex c3(0,0);
    c3 = c1 + c2;
    c3.display();

    //c2++
    Complex c4;
    c4=c3 - c2;
    c4.display();

    return 0;
    
}