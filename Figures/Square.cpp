#include "Square.h"

Square::Square(double side)
    :side(side)
{
    if (side<0)
        throw "Error";
}


