#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));
	vector<Triangle> figures;
    int number;
    cout <<"Enter number of figures: ";
    cin >>number;
    for (int i = 0; i < number; i++)
    {
        int a = rand()%10+1;
        int b = rand()%10+1;
        int c = rand()%(a+b);
        if (c<=abs(a-b)) c=abs(a-b)+1;
        figures.push_back(Triangle(a,b,c));
    }
    
    for (size_t i=0; i<figures.size(); i++)
    {
        cout <<figures[i] <<endl;
    }
        
        
    vector <Figure> sq;
    
	return 0;
}
