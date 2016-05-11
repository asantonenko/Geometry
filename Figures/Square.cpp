#include "Square.h"

Square::Square(double side)
    :side(side)
{
    if (side<0)
        throw "Error";
}

std::ostream& operator<<(std::ostream& out, 
 const Square& t)
 {
     //todo: print square
     return out;
 }

