#include <iostream> // #include = include additional library or file
#include <vector>
#include <string>
#include <random>
#include <map>

#include "Shape.hpp" // effectively pastes the contents of Shape.hpp here
#include "Rectangle.hpp"

#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

// Matrix, ThetaJhat pair
typedef std::pair<Eigen::MatrixXd, int> pair;

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

    // sorting procedure

    normal_distribution dist(0.0, 5.0);
    mt19937_64 generator(0);
    vector<MatrixXd> pop = vector<MatrixXd>(5, MatrixXd::Zero(1, 1));
    for (int i = 0; i < 5; i++)
        pop.at(i)(0, 0) = dist(generator);
    vector<double> sortedOrder{4.4, 5.5, 3.3, 1.1, 2.2};

    cout << "Before" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Order: " << sortedOrder[i] << " Value: " << pop.at(i) << endl;
    }

    map<double, int> sortingMap;
    for (int i = 0; i < 5; i++)
    {
        sortingMap[sortedOrder.at(i)] = i;
    }
    cout << "Using Map:" << endl;
    for (map<double, int>::iterator i = sortingMap.begin(); i != sortingMap.end(); i++)
    {
        cout << "Order: " << i->first << " Place: " << i->second << endl;
    }

    return 0;
}
