#include "Square.h"

Square::Square(double side)
    :side(side)
{
    if (side<0)
        throw "Error";
}

void Square::print(std::ostream& out)const
 {
     out << "Square " <<side <<"x" <<side 
         <<" p=" <<perimeter() 
         <<" s=" <<area();
 }

