#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct PERSON {
    int age;
    float gpa;
    char name[20];
};
void readData(string filename, PERSON *PP){
    int age;
    double gpa;
    string name;
    ifstream inFile;
    inFile.open(filename);

    for(int i = 0; i < 5; i++) {
        inFile >> age >> gpa >> fname >> lname;
        PP[i].age = age;
        PP[i].gpa = gpa;
        PP[i].fname = fname;
        PP[i].lname = lname;
    }*
    inFile.close();
}
int main() {
    string filename = "two.txt";
    readData(filename)
    return 0;
}