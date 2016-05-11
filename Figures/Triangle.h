#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

class Triangle
{
public:
    Triangle();
    Triangle(double a, double b, double c);
    double perimeter() const
    { return a+b+c;}
    double area() const;
    friend std::ostream& operator<<
      (std::ostream& out, const Triangle& t);
private:
    double a,b,c;
};

std::ostream& operator<<(std::ostream& out, 
 const Triangle& t);

#endif // TRIANGLE_H
