#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure
{
public:
    virtual double perimeter() const=0;
    virtual double area() const=0;
    virtual void print(std::ostream& out)const=0;
    virtual ~Figure()
    {
    }
};
std::ostream& operator<<(std::ostream& out, 
 const Figure& t);

#endif // FIGURE_H
