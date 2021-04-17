#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    double a, b, x, y, z;
    const double e = 2.71828182845904523536;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    x = (pow((a-(a*b)), b) * a);
    y = (sqrt(pow(b,5)- (a*b))) / (a*b);
    z = ((a+b) * pow(e, (a*b)));
    cout << "X = " << x << fixed << showpoint << setprecision(2) << endl;
    cout << "Y = " << y << fixed << showpoint << setprecision(2) << endl;
    cout << "Z = " << z << fixed << showpoint << setprecision(2) << endl;
    cout << "hello my name seena hello";
    return 0;
}