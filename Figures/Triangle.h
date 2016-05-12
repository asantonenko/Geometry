#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "Figure.h"

class Triangle : public Figure
{
public:
    Triangle();
    Triangle(double a, double b, double c);
    double perimeter() const
    { return a+b+c;}
    double area() const;
    virtual void print(std::ostream& out)const;  
private:
    double a,b,c;
};


#endif // TRIANGLE_H
