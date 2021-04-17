#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <fstream>

using namespace std;
struct PERSON
 {
 string Fname;
 string Lname;
 int Age;
 };
void CopyData(string filename, PERSON PP[], int n){
  string Fname;
  string Lname;
  int Age;
  ifstream inFile;
  inFile.open(filename);
  inFile >> n;
  for(int i = 0; i < n; i++){
    inFile >> Fname >> Lname >> Age;
    PP[i].Fname = Fname;
    PP[i].Lname = Lname;
    PP[i].Age = Age;
  }
  for(int j = 0; j < n; j ++){
  cout << PP[j].Fname << " " << PP[j].Lname << " " << PP[j].Age << endl;
}
  inFile.close();
};

void FindMaxAge(string filename, int &maxAge, int n, PERSON PP[]){
  maxAge = PP[0].Age;
  for(int i = 0; i < n; i++){
  if(PP[i].Age > maxAge) maxAge = PP[i].Age;
  }
  cout << endl;
  cout << "Max Age is: " << maxAge << endl;
}

void ShowOldest(string filename, int maxAge, int n, PERSON PP[]){
  for(int i = 0; i < n; i++){
    if(PP[i].Age == maxAge) cout << "Name of Oldest Person is: " << PP[i].Fname << " " << PP[i].Lname << endl;
  }
}
int main(){
  string numInfo;
  string filename = "midtermdata.txt";
  ifstream inFile;
  inFile.open(filename);
  inFile >> numInfo;
  int myNumInfo = stoi(numInfo);
  PERSON PP[myNumInfo];
  CopyData(filename, PP, myNumInfo);
  int maxAge;
  FindMaxAge(filename, maxAge, myNumInfo, PP);
  ShowOldest(filename, maxAge, myNumInfo, PP);
  return 0;
}
