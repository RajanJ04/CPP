/*3. Write a function using pass by reference to calculate the sum and difference of two numbers and return
both results through reference parameters.*/

#include<iostream>
using namespace std;

int sum(int& num1, int& num2)
{
    return (num1 + num2);
}
int diff(int& num1, int& num2)
{
    return (num1 - num2);
}

int main()
{
    int num1;
    int num2;

    cout << "Enter the two numbers " << endl;
    cin >> num1 >> num2;

    cout << "Numbers are " << num1 << " & " << num2 << endl;

    cout << "Addition of the given numbers is " <<sum(num1,num2)<< endl;

    cout << "Differance of the given numbers is " << diff(num1, num2) << endl;


    return 0;

}