/*2. Write a menu-driven C++ program to dynamically allocate memory for the prices of N products in a
store and perform the following operations using user-defined functions:
1. Accept and display the product prices.
2. Find and display the highest and lowest-priced products.
3. Calculate and display the total inventory value and average product price.
4. Count the number of products whose price is above and below the average price.
5. Search for a particular product price using linear search.
6. Apply a given discount percentage to all product prices and display the updated prices.
7. Exit the program*/
#include<iostream>
using namespace std;

// Accept prices
void accept(int *arr, int n)
{
    cout << "Enter the prices:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Display prices
void display(int *arr, int n)
{
    cout << "Prices are: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Find minimum and maximum
void minMax(int *arr, int n)
{
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Minimum price is: " << min << endl;
    cout << "Maximum price is: " << max << endl;
}

// Calculate total and average
void total(int *arr, int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Total inventory value is: " << sum << endl;
    cout << "Average product price is: " << (float)sum / n << endl;
}

// Count products above and below average
void count(int *arr, int n)
{
    int sum = 0;
    int above = 0;
    int below = 0;

    // Calculate total
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / n;

    // Count above and below average
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > average)
        {
            above++;
        }
        else if(arr[i] < average)
        {
            below++;
        }
    }

    cout << "Average price is: " << average << endl;
    cout << "Products above average: " << above << endl;
    cout << "Products below average: " << below << endl;
}

// Linear search
void linearSearch(int *arr, int key, int n)
{
    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Price found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Price not found" << endl;
    }
}

// Apply discount
void discount(int *arr, int n)
{
    float discount;

    cout << "Enter discount percentage: ";
    cin >> discount;

    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - (arr[i] * discount / 100);
    }

    cout << "After applying the discount, the prices are:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main()
{
    int n, choice, key;

    // First accept N
    cout << "Enter number of products: ";
    cin >> n;

    // Dynamically allocate memory
    int* arr = new int[n];

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Accept and display\n";
        cout << "2. Highest and lowest priced product\n";
        cout << "3. Total and average value in inventory\n";
        cout << "4. Number of products above and below average\n";
        cout << "5. Search a product price\n";
        cout << "6. Apply discount\n";
        cout << "7. Exit program\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                accept(arr, n);
                display(arr, n);
                break;

            case 2:
                minMax(arr, n);
                break;

            case 3:
                total(arr, n);
                break;

            case 4:
                count(arr, n);
                break;

            case 5:
                cout << "Enter price to search: ";
                cin >> key;

                linearSearch(arr, key, n);
                break;

            case 6:
                discount(arr, n);
                break;

            case 7:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "INVALID CHOICE" << endl;
        }

    } while(choice != 7);
    delete[] arr;

    return 0;
}