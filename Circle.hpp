//Ans Choudhary

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"

class Circle : public Shape
{
public:
    Circle(const int& diameter);

    double getSurfaceArea() override;
    double get3DVolume(const double& depth) override;



};


#endif // !CIRCLE_H
