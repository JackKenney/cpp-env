#pragma once // only paste this into a file once, never more than once
// ^include this at the top of every header file

#include <string>

class Shape
{
    public:
        // virtual means: my subclasses can override this function def.
        virtual double area() = 0; // = 0, I am not def, all subclasses must def.
        virtual std::string name() = 0;
};