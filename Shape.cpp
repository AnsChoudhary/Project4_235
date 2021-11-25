//Ans Choudhary
//shape

#include <cctype>
#include <iostream>

#include "Shape.hpp"

using namespace std;

Shape::Shape(const int& width, const int& height) :
        width(width), height(height), displayChars(nullptr), edges(-1)
{

}

Shape::~Shape()
{
    clear();
}

void Shape::clear()
{
    if (displayChars != nullptr)
    {
        for (int j = 0; j < height; j++)
        {
            delete[] displayChars[j];
        }

        delete[] displayChars;
    }

    displayChars = nullptr;
}

int Shape::getEdges() {	return edges; }

int Shape::getWidth() {	return width; }

int Shape::getHeight() { return height; }

char** Shape::getDisplayChars() { return displayChars; }

void Shape::setEdges(const int& edges) {  this->edges = edges; }

void Shape::setWidth(const int& new_width)
{
    if (nullptr == displayChars)
        width = new_width;
}

void Shape::setHeight(const int& new_height)
{
    if (nullptr == displayChars)
        height = new_height;
}

void Shape::setDisplayChars(char** display)
{
    if (displayChars != nullptr)
        clear();

    displayChars = display;
}

void Shape::rotateRight()
{
    if (nullptr != displayChars)
    {
        int w = width;
        int h = height;

        char** changedChars = new char *[width];
        for (int row = 0; row < width; row++)
        {
            changedChars[row] = new char[height];
        }

        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col < width; col++)
            {
                changedChars[col][height - 1 - row] = displayChars[row][col];
            }
        }

        setDisplayChars(changedChars);
        setWidth(h);
        setHeight(w);

    }
}

void Shape::rotateLeft()
{
        int w = width;
        int h = height;

        char** changedChars = new char *[width];
        for (int row = 0; row < width; row++)
        {
            changedChars[row] = new char[height];
        }

        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col < width; col++)
            {
                changedChars[width - 1 - col][row] = displayChars[row][col];
            }
        }

        setDisplayChars(changedChars);

        setWidth(h);

        setHeight(w);

    }


void Shape::reflect(char axis)
{
    if (nullptr != displayChars)
    {
        axis = tolower(axis);

        if (axis == 'x')
        {
            int half = height / 2;

            for (int row = 0; row < half; row++)
            {
                for (int col = 0; col < width; col++)
                {
                    char temp = displayChars[row][col];

                    displayChars[row][col] = displayChars[height - 1 - row][col];

                    displayChars[height - 1 - row][col] = temp;
                }
            }
        }
        else if (axis == 'y')
        {
            int half = width / 2;

            for (int row = 0; row < height; row++)
            {
                for (int col = 0; col < half; col++)
                {
                    char nTemp = displayChars[row][col];

                    displayChars[row][col] = displayChars[row][width - 1 - col];

                    displayChars[row][width - 1 - col] = nTemp;
                }
            }
        }
    }
}

void Shape::display()
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            cout << displayChars[row][col] << ((col != width-1) ? " " : "\n");
        }

    }

    cout << endl;
}

