#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double R, v0, theta;

    cout << "Enter the inital veocity of the projectile: ";
    cin >> v0;

    cout << "Enter the inital angle(in degrees) at which the projectile is thrown: ";
    cin >> theta;

    theta = theta * M_PI / 180;

    R = (v0 * v0 * sin(2 * theta)) / 9.8;

    cout << "The horizontal range of the projectile is: " << R << endl;

    return 0;
}