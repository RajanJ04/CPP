/*4. Write a function using pass by reference to reverse the digits of a number and update the original variable
in main.*/

#include<iostream>
using namespace std;

int rev(int& num1)
{
   int dig;
   int newdig=0;
   while (num1 != 0)
   {
       dig = num1 % 10;
       newdig = newdig * 10 + dig;
       num1 = num1 / 10;
   }
   num1 = newdig;
   return num1;
}

int main()
{
    int num1;

    cout << "Enter the number " << endl;
    cin >> num1;

    cout << "Reversed number is: " << rev(num1);

    return 0;

}