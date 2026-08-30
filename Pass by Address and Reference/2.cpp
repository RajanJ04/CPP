//2. Write a function that accepts two integers using pass by reference and swaps their values.

#include<iostream>
using namespace std;

void swap(int& num1, int& num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1;
    int num2;

    cout << "Enter the two numbers " << endl;
    cin >> num1 >> num2;

    cout << "Numbers are " << num1 << " & " << num2 << endl;

    cout << "After swapping" << endl;

    swap(num1, num2);


    cout << "Numbers are " << num1 << " & " << num2;

    return 0;

}