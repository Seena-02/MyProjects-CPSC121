#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
struct PERSON {
 int age;
 float gpa;
 string name;
};
void getData(string filename, PERSON PP[], int num) {
  int age;
  float gpa;
  string name;
  ifstream inFile;
  inFile.open(filename);
  inFile >> num;
  for(int i = 0; i < num; i++) {
    inFile >> age >> gpa;
    getline(inFile, name);
    PP[i].age = age;
    PP[i].gpa = gpa;
    PP[i].name = name;
  }
  inFile.close();
}
void printData(PERSON PP[], int num) {
  cout << "Age     Gpa      Name" << endl;
  cout << setw(31) << setfill('-') << "" << endl;
  for(int i = 0; i < num; i++) {
    cout << left << PP[i].age << "\t" << fixed << showpoint << setprecision(1) << PP[i].gpa << "\t" << PP[i].name << endl;
  }
}

void nameInfo(char fullname[]) {
    char ch[] = " ";
    char *position = strpbrk(fullname, ch);;
    int countSpaces = 0;

    while(position != NULL){
      position = strpbrk(position + 1, ch);
      countSpaces++;
    }

    int fullnameLength = strlen(fullname)-countSpaces;
    cout << "\t" << fullname << ", your name's length is " << fullnameLength << endl;

    cout << "\t" << "Your name in lower case: ";
    for(int i = 0; i < strlen(fullname); i++) putchar(tolower(fullname[i]));
    cout << endl;
    cout << "\t" << "Your name in upper case: ";
    for(int i = 0; i < strlen(fullname); i++) putchar(toupper(fullname[i]));
    cout << endl;
    char delim[] = " ";
    char *firstname = strtok(fullname,delim);
    cout << "\t" << "Your first name is: " << firstname << endl;
}

int recursive(int n, int base) {
  if(n > 0) {
    return recursive(n-1, base) + pow(base, n);
  }
  else return 1;
}

int main() {
  string numInfo;
  string filename = "data3.txt";
  ifstream inFile;
  inFile.open(filename);
  inFile >> numInfo;
  int myNumInfo = stoi(numInfo);
  PERSON PP[myNumInfo];
  inFile.close();
  getData(filename, PP, myNumInfo);
  printData(PP, myNumInfo);
/*
  char fullname[50];
  cout << "Enter your full name: ";
  cin.getline(fullname, 50);
  nameInfo(fullname);

  int n;
  int base;
  cout << "What base number? ";
  cin >> base;
  cout << " to what power? ";
  cin >> n;
  int solution =  recursive(n, base);
  cout << "Answer is: " << solution << endl;
  */
  return 0;
}
