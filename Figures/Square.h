#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "Figure.h"

class Square : public Figure
{
    double side;
public:
    //Square();
    Square(double side=0);
    double perimeter() const
    { return side*4;}
    double area() const
    { return side*side;}
    virtual void print(std::ostream& out)const;
};



#endif // SQUARE_H
