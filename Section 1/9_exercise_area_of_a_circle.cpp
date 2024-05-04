#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    cout << "Enter radius of Circle: ";
    double radius;
    cin >> radius;
    const double pi = 3.1416;
    cout << "Area: " << pi * pow(radius, 2);

    return 0;
}
