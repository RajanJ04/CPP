/*Create a class Product with data members such as productId, productName, price, and 
quantity.
 Provide suitable constructors and member functions to initialize and display product detail
*/

#pragma once
#include"Customer.h"
#include<string.h>
//using namespace std;

class Product
{
    private:
    int productId , quantity;
    float price;
    string productName;
 
    public:

    Product() 
    {
        productId = 0;
        price = 0;
        quantity = 0;
        productName = "NA";
    }

    Product(int productId, float price, int quantity, string productName) 
    {
        this->productId = productId;
        this->price = price;
        this->quantity = quantity;
        this->productName = productName;
    }


    void accept()
    {
        cout<<"Enter the product ID: ";
        cin>>productId;

        cout<<"\nEnter the Price: ";
        cin>>price;

        cout<<"\nEnter the Product Name: ";
        cin>>productName;
    }

    void productDisplay()
    {
        cout<<"\nThe product ID is: "<<productId;
        

        cout<<"\nThe price is: "<<price;
        

        cout<<"\nThe quantity is: "<<quantity;

        cout<<"\nThe product Name is: "<<productName;
       
    }
};
