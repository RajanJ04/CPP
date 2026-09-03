/*Create a Complex class with real and imaginary data members. Initialize the complex
numbers using appropriate constructors. Overload the '+' operator to add two Complex
objects and display the resulting complex number.*/

#pragma once
#include<iostream>
using namespace std;

class Complex
{
    private:
    float real, img;

    public:

    Complex()
    {
        real = 0.0;
        img = 0.0;
    }

    Complex(float real, float img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout<<"The number is "<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator+(Complex& obj)
    {
        Complex temp;
        temp.real = this->real + obj.real;
        temp.img = this->img + obj.img;
        return temp;
    }

    Complex operator++()
    {
        this->real = this->real + 1;
        this->img = this->img + 1;
        return *this;
    }

    Complex operator++(int dummy)
    {
        Complex temp = *this;
        this->real += 1;
        this->img += 1;
        return temp;
    }

    Complex operator-(Complex& obj)
    {
        Complex temp;
        temp.real = this->real - obj.real;
        temp.img = this->img - obj.img;
        return temp;
    }

};