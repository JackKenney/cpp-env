#pragma once

#include "Shape.hpp"

// defines Rectangle as subclass of shape
class Rectangle : public Shape
{
    public:
        Rectangle();
        Rectangle(double width, double height);
        
        double area() override;
        std::string name() override;

    protected:
        // can only be seen within class or subclass

    private: // can only be seen within the class
        double width;
        double height;

}; // Don't forget this semicolon!
