//Ans Choudhary

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.hpp"

class Triangle : public Shape
{
public:
    Triangle(const int& side);

    double getSurfaceArea() override;
    double get3DVolume(const double& depth) override;
};


#endif // !TRIANGLE_H
