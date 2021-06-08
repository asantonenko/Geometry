#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Triangle.h"
#include "Square.h"
#include "Figure.h"

using namespace std;

int main(int argc, char **argv)
{
    //ƒанна€ строка инициализирует генератор случайных чисел
    srand(time(NULL));
	/*vector<Triangle> figures;
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
    }*/

    /*Square sq(5);
    cout <<sq <<endl;
    */
    /*Figure * f = new Triangle (3,4,5);
    cout <<f->area() <<endl;*/

    //¬ектор с фигурами
    vector<Figure*> figures;

    int number;
    cout <<"Enter number of figures: ";
    cin >>number;

    for (int i = 0; i < number; i++)
    {
        switch (rand()%2)
        {
          case 0:
          {
            int a = rand()%10+1;
            int b = rand()%10+1;
            int c = rand()%(a+b);
            if (c<=abs(a-b)) c=abs(a-b)+1;
            figures.push_back(new Triangle(a,b,c));
            break;
          }
          case 1:
            figures.push_back(new Square(rand()%4+1));
        }
    }

    for (size_t i=0; i<figures.size(); i++)
    {
        cout <<*(figures[i]) <<endl;
    }

    double total=0;
    for (int i = 0; i < figures.size(); i++)
    {
        total+=figures[i]->area();
    }
    cout <<total <<endl;

    //vector <Figure> sq;

	return 0;
}
