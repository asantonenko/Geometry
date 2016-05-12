#include "Figure.h"

std::ostream& operator<<(std::ostream& out, 
 const Figure& t){
     t.print(out);
     return out;
 }