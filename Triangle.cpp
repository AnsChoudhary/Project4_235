//Ans Choudhary

#include "Triangle.hpp"

Triangle::Triangle(const int& side) : Shape(side, side)
{
    setEdges(3);

    // Populate 2D array with empty chars
    char **arr = new char *[getHeight()];
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
        for (int col = 0; col < row + 1; col++)
        {
            if (row == getWidth() - 1)
            {
                arr[row][col] = ascii_counter;

                ascii_counter++;

            }
            else if (col == 0 || col == row)
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

double Triangle::getSurfaceArea()
{
    return ((getWidth() * getHeight()) * 0.5);
}

double Triangle::get3DVolume(const double& depth)
{
    return getSurfaceArea() * depth;
}

