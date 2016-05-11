#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
    double perimeter() const;
    double area() const;
    virtual ~Figure()
    {
    }
};

#endif // FIGURE_H
