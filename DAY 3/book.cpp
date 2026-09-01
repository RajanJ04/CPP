/*Create a Book class with book ID, title, author, and price. Use a constructor to initialize the
data members. Store details of multiple books in an array of objects and search for a book
using its ID.*/

#include<iostream>
using namespace std;

class Book
{
    private:
    int id,price;
    string bookName, author;

    public:
    Book ()
    {
        id = 0;
        price = 0;
        bookName = "NULL";
        author = "Unkonwn";
    }

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
    
};



int main()
{
    int ch, n, key;
    cout << "Enter n: ";
    cin >> n;

    int *arr = new int[n];
}