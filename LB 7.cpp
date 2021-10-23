#include "math.h"
#include <iostream>
#include "iomanip"
using namespace std;

int main()
{
    double y, x;
    cout << "Enter x: (rad): " << endl;
    cin >> x;
    y = 0;
    for (int i = 1; i < 11; i++) {
        y += i;
    }
    y += pow(fabs(x), 3) + 2 * pow(sin(x), 2);
    cout << "Y=" << setprecision(3) << y << endl;
    //////
    float y, z;
    cout << "Enter y:";
    cin >> y;
    z = 1;
    for (int i = 1; i <= 11; i++) {
        z += cos(i);
    }
    z = z / y + 2;
    cout << "Z=" << setprecision(2) << z << endl;


    ////new 222222
    cout << "Hello Git 2";


}