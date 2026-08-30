/*1. Write a function that accepts the addresses of two integers and swaps their values using pointers.*/

#include<iostream>
using namespace std;

void swap(int* num1,int* num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;

    cout << "Numbers are " << num1 << " & " << num2 << endl;

    cout << "After swapping: ";
    swap(&num1, &num2);
    cout << num1 << " & " << num2 << endl;
    return 0;
}