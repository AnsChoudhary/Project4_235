//Ans Choudahry
#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
public:
    // Parameterized Constructor; there is no default constructor
    Shape(const int &width, const int &height);

    ~Shape();

    void clear();

    // Getters
    int getEdges();
    int getWidth();
    int getHeight();
    char** getDisplayChars();

    // Setters
    void setEdges(const int& edges);
    void setWidth(const int& new_width);
    void setHeight(const int &new_height);
    void setDisplayChars(char** display);

    // Mutators
    void rotateRight();         // rotate by 90 degrees
    void rotateLeft();          // rotate by 90 degrees
    void reflect(char axis);    // reflect over x or y axis ( takes the parameter 'x' or 'y'.)

    // Pure Virtual Methods (no implementation)
    virtual double getSurfaceArea() = 0;
    virtual double get3DVolume(const double& depth) = 0;

    // Display - //iterate through 2D array and print chars
    void display();

private:
    int width;
    int height;

    char** displayChars;

    int edges;
};
#endif // !SHAPE_H


