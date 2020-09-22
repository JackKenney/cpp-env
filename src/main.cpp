#include <iostream> // #include = include additional library or file
#include <vector>
#include <string>

#include "Shape.hpp" // effectively pastes the contents of Shape.hpp here
#include "Rectangle.hpp"

#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv)
{

    VectorXd a;
    VectorXd b(5);

    VectorXd c = VectorXd::Ones(10); // vector of ones shape (10, )

    cout << MatrixXd::Identity(10, 10) << endl;

    Rectangle rec(3, 4); // constructor
    cout << "The area of rec is " << rec.area() << endl;

    int n = 10;
    vector<double> v(n);
    int counter = 0;
    while (true)
    {
        v[counter] = counter;
        counter++; // x++ === x = x+1
        if (counter == n)
            break; // breaks out of one loop
    }

    for (int i = 0; i < (int)v.size(); i++)
        v[i] = i;

    for (int i = 0; i < (int)v.size(); i++)
        cout << v[i] << endl;

    return 0;
}
