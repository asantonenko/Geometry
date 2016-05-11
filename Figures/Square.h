#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

class Square
{
    double side;
public:
    //Square();
    Square(double side=0);
    double perimeter() const
    { return side*4;}
    double area() const
    { return side*side;}
};

std::ostream& operator<<(std::ostream& out, 
 const Square& t);

#endif // SQUARE_H
