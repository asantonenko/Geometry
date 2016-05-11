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

ostream& operator<<(ostream& out, 
 const Triangle& t)
{
    out <<"Triangle" <<" a=" <<setw(5)<<t.a
                     <<" b=" <<setw(5)<<t.b
                     <<" c=" <<setw(5)<<t.c
        <<" p=" <<setw(5) <<t.perimeter()
        <<" s=" <<setw(10)<<t.area();
    return out;
}

