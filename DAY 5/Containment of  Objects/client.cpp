// #pragma once
#include<iostream>
#include<string.h>

#include "Order.h"
#include "Customer.h"

int main()
{
    Customer c1(105 ,"Patil", "9665905126");
    //c1.customerDisplay();
    Customer c2(102, "Akshay", "9359094225");
    //c2.customerDisplay();
    Customer c3(103, "Rajan", "8177909345");
    //c3.customerDisplay();

    // Creating Product objects
    Product p1(5001 ,25.50f , 2 ,  "Wireless Laptop Mouse");
    Product p2(5002, 89.99f, 1, "Mechanical Keyboard");
    Product p3(5003, 45.00f, 3, "USB-C Monitor Hub");

    Order o1(1, 105, "Patil", "9665905126", 5001, 25.50f, 2, "Wireless Laptop Mouse");
    o1.displayOrderID();

    return 0;

}