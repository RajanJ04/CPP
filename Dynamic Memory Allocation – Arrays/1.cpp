/*1. Write a menu-driven C++ program to dynamically allocate an integer array of N elements and perform
the following operations using user-defined functions:
1. Accept and display the array elements.
2. Find and display the largest and smallest elements.
3. Calculate and display the sum and average of the array elements.
4. Count and display the number of even and odd elements.
5. Search for a given element using linear search.
6. Exit the program.*/

#include <iostream>
using namespace std;

void accept(int *arr, int n)
{
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int *arr, int n)
{
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void minMax(int *arr, int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max element is: " << max << endl;
    cout << "Min element is: " << min << endl;
}

void sumAverage(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << (double)sum / n << endl;
}

void evenOdd(int *arr, int n)
{
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;
}

void linearSearch(int *arr, int n, int key)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Element not found" << endl;
}

int main()
{
    int ch, n, key;
    cout << "Enter n: ";
    cin >> n;

    int *arr = new int[n];

    do
    {
        cout << "\n\n1. Accept and display array";
        cout << "\n2. Find largest and smallest";
        cout << "\n3. Sum and average";
        cout << "\n4. Count even and odd";
        cout << "\n5. Linear search";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            accept(arr, n);
            display(arr, n);
            break;

        case 2:
            minMax(arr, n);
            break;

        case 3:
            sumAverage(arr, n);
            break;

        case 4:
            evenOdd(arr, n);
            break;

        case 5:
            cout << "Enter element to search: ";
            cin >> key;
            linearSearch(arr, n, key);
            break;

        case 6:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "INVALID" << endl;
        }
    } while (ch != 6);

    delete[] arr;
    return 0;
}