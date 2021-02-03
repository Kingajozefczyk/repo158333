#include "myexp.h"
#include <iostream>


MySin::MySin()
{
    this->mX = 0.0;
}

MySin::Sin(double x)
{
    this->mX = x;
}


MySin::MySin(const MySin &obj)
{
    this->mX = obj.getX();
}


MySin::~MySin()
{
    this->mX = 0.0;
}


double MySin::value()
{
    double sum=0.0;
    for(int k=0; k<=10; k++)
        sum = sum + (this->power(this->mX,k) 
		/ this->factorial(k));
    return sum;
}


void MySin::setX(double x)
{
    this->mX = x;
}


double MySin::getX() const
{
    return this->mX;
}


