/*Develop a C++ program for an Online Shopping Order Management System to demonstrate 
containment of objects.
*/
#pragma once
#include<iostream>
#include<string>

using namespace std;

class Customer
{
    private:
    int customerId;
    string customerName, contactNumber;
 
    public:

    Customer() //int customerId, int contactNumber, string customerName
    {
        customerId = 0;
        contactNumber = "0";
        customerName = "NA";
    }

    Customer(int customerId, string customerName, string contactNumber) //int customerId, int contactNumber, string customerName
    {
        this->customerId = customerId;
        this->contactNumber = contactNumber;
        this->customerName = customerName;
    }

    // void accept()
    // {
    //     cout<<"Enter the customer ID: ";
    //     cin>>customerId;

    //     cout<<"Enter the customer Number: ";
    //     cin>>contactNumber;

    //     cout<<"Enter the customer Name: ";
    //     cin>>contactNumber;
    // }

    void customerDisplay()
    {
        cout<<"The customer ID is: "<<customerId;
        

        cout<<"\nThe customer Number is: "<<contactNumber;
        

        cout<<"\nThe customer name is: "<<customerName;
       
    }
};