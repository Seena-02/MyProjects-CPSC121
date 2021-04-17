#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void CopyData(string p4file, int a[]) {
    string name;
    ifstream inFile;
    inFile.open(p4file)

    for(int i = 0; inFile >> a; i++) {
        p4file >> a[i];
        }

}
int main() {
    int a[N];
    CopyData("p4file.txt", a);
    //DisplayData(a);
    //float Average = findAve(a);
    cout<< "Average = " << Average << endl;
    //FindMaxMin(a,max,min);
    //DisplayMaxMin(max,min)
    //sort(a, a+N)
    //DisplaySortData(a);
    return 0;
    }