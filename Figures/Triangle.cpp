#include "Triangle.h"
#include <cmath>
#include <iomanip>
using namespace std;

Triangle::Triangle(): a(1), b(1), c(1)
{
}

Triangle::Triangle(double a, double b, double c)
    : a(a), b(b), c(c)
{    
}

double Triangle::area() const
{
    double p = perimeter()/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void Triangle::print(std::ostream& out)const
{
    out <<"Triangle" <<" a=" <<setw(5)<<a
                     <<" b=" <<setw(5)<<b
                     <<" c=" <<setw(5)<<c
        <<" p=" <<setw(5) <<perimeter()
        <<" s=" <<setw(10)<<area();
}

