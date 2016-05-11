#ifndef SQUARE_H
#define SQUARE_H

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

#endif // SQUARE_H
