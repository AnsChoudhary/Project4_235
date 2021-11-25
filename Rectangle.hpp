//Ans Choudhary

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(const int& width, const int& height);

    double getSurfaceArea() override;
    double get3DVolume(const double& depth) override;

};

#endif // !RECTANGLE_H


