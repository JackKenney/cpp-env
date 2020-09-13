#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle() {
    width = height = 0;
}

Rectangle::Rectangle(double width, double height) {
    this-> width = width;
    this-> height = height;
}

double Rectangle::area() {
    // no need for "this" b/c no overriding of terms
    return width * height;
}

string Rectangle::name() {
    return "Rectangle";
}