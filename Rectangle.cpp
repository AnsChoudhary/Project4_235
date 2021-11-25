//Ans Choudhary

#include "Rectangle.hpp"
#include <iostream>
using namespace std;
Rectangle::Rectangle(const int& width, const int& height) : Shape(width, height)
{
    setEdges(4);

    // Populate 2D array with empty chars
    char** arr = new char *[getHeight()];
    for (int row = 0; row < getHeight(); row++)
    {
        arr[row] = new char[getWidth()];
        for (int col = 0; col < getWidth(); col++)
        {
            arr[row][col] = ' ';
        }
    }

    char ascii_counter = '0';
    for (int row = 0; row < getHeight(); row++)
    {
        for (int col = 0; col < getWidth(); col++)
        {
            if (row == 0 || row == getHeight() - 1)
            {
                arr[row][col] = ascii_counter;
                ascii_counter++;


            }
            else if (col == 0 || col == getWidth() - 1)
            {
                arr[row][col] = ascii_counter;

                ascii_counter++;



            }

            // fix ascii_counter to wrap around after
            if (ascii_counter > '~')
            {
                ascii_counter = '0';
            }


        }
    }

    setDisplayChars(arr);
}

double Rectangle::getSurfaceArea()
{
    return (getWidth() * getHeight());
}

double Rectangle::get3DVolume(const double& depth)
{
    return (getWidth() * getHeight() * depth);
}

