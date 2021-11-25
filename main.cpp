#include <iostream>

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

using namespace std;

int main()
{
    //Triangle r(10);
    //r.display();

    Rectangle b(10,10);
    b.display();
    b.rotateLeft();
    cout<<endl;
    b.display();


    //Circle C(10);
   //C.display();
    //cout<<endl;



    return 0;
}
