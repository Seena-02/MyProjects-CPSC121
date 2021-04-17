#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cctype>
#include<algorithm>
using namespace std;
void readData(int &x, int &y, int &z) {
    cout << "Enter three int numbers: ";
    cin >> x >> y >> z;
}
float computeAve(int x, int y, int z) {
    return ((x + y + z) / 3);
}
void findMaxMin(int z, int y, int x, int &max, int &min) {
    if(x > y && x > z) max = x;
    if(y > x && y > z) max = y;
    else max = z;
    if(x < y && x < z) min = x;
    if(y < x && y < z) min = y;
    else min = z;
}
    

void display(int min, int max, int average) {
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Ave: " << average << fixed << showpoint << setprecision(2) << endl;

}
int main() {
    int x, y, z;
    readData(x,y,z);
    float average;
    average = computeAve(x,y,z);
    int min,max;
    findMaxMin(z,y,z,max,min);
    display(min, max, average);
    system("pause");
    return 0;
}