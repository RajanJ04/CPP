/*Create a class Order that contains objects of both Customer and Product classes.
The Order class should also store an orderId
*/

#pragma once
#include"Customer.h"
#include"Product.h"
//using namespace std;

class Order
{
    private:
    int orderId;
    Customer cobj;
    Product pobj;

    public:
    Order(int orderId, int customerId, string customerName, string contactNumber, 
          int productId, float price, int quantity, string productName)
        : cobj(customerId, customerName, contactNumber), 
          pobj(productId, price, quantity, productName) 
    {
        this->orderId = orderId;
    }

    void displayOrderID()
    {
        cobj.customerDisplay();
        pobj.productDisplay();
    }
};