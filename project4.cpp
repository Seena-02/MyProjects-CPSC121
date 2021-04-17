#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
using namespace std;

void CopyData(string filename, int a[]) {
    int nums;
    ifstream inFile;
    inFile.open(filename);
    for(int i = 0; i < 6; i ++){
      inFile >> nums;
      a[i] = nums;
    }
}

void DisplayData(int a[]) {
  cout << "Data: ";
  for(int i = 0; i < 6; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

float findAve(int a[]) {
  int sum = 0;
  float average;
  for(int i = 0; i < 6; i++){
    sum += a[i];
  }
  average = (sum / 6);
  return average;
}

void FindMaxMin(int a[], int &max, int &min) {
  max = a[0];
  min = a[0];
  for(int i = 0; i < 6; i ++) {
    if(a[i] > max) max = a[i];
    if(a[i] < min) min = a[i];
  }
}
void DisplayMaxMin(int max, int min) {
  cout << "Max of Data: " << max << endl;
  cout << "Min of Data: " << min << endl;
}
void sort(int a[], int size) {
  sort(a, a + size);
}
void DisplaySortData(int a[]){
  cout << "Sorted Data: ";
  for(int i = 0; i < 6; i++) {
  cout << a[i] << " ";
  }
  cout << endl;
}

struct RECORD
 {
  string name;
  int age;
  float gpa;
 };

void CopyRecords(string filename2, RECORD PP[]){
  string name;
  int age;
  float gpa;

  ifstream inFile;
  inFile.open(filename2);
  for(int i = 0; i < 5; i++){
    inFile >> name >> age >> gpa;
    PP[i].name = name;
    PP[i].age = age;
    PP[i].gpa = gpa;
  }
  inFile.close();
}

void Display(RECORD PP[]) {
  cout << "Name            Age     Gpa" << endl;
  cout << "---------------------------" << endl;
  for(int i = 0; i < 5; i++) {
    cout << left << PP[i].name << "\t" << PP[i].age << "\t" << PP[i].gpa << endl;
    //cout << PP[i].name << "     " << PP[i].age << "     " << PP[i].gpa << endl;
  }
}
void AgeGpaAverage(RECORD PP[], double &AgeAve , double &GpaAve) {
  double sum1 = 0;
  double sum2 = 0;
  for(int i = 0; i < 5; i++){
    sum1 += PP[i].age;
  }
  AgeAve = (sum1 / 5);
  for(int i = 0; i < 5; i++){
    sum2 += PP[i].gpa;
  }
  GpaAve = (sum2 / 5);
  //return GpaAve, AgeAve;
}
void Display(double AgeAve, double GpaAve){
 cout << "Their AGE average is " << fixed << showpoint << setprecision(2) <<
 AgeAve << " and their GPA average is " << fixed << showpoint << setprecision(2) <<
 GpaAve << endl;
}
void DisplayA(int a[]) {
  for(int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
}
void DisplayB(int b[][4]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
    cout << b[i][j] << " ";
    }
    cout << endl;
  }
}
void DisplayC(int c[][3][2]) {
  for(int i = 0; i < 2; i++) {
    cout << "Row " << i << endl;
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 2; k++) {
          cout << c[i][j][k] << " ";
      }
      cout << endl;
    }
  }
}
void Display(int a[], int i){
  cout << "Array a using the Display function: ";
  for(i = 0; i < 5; i++) {
  cout << a[i] << " ";
  }
  cout << endl;
}
void Display(char c[], int i){
  cout << "Array a using the Display function: ";
  for(i = 0; i < 6; i++) {
  cout << c[i] << " ";
  }
  cout << endl;
}
void Display(string d[], int i){
  cout << "Array a using the Display function: ";
  for(i = 0; i < 3; i++) {
  cout << d[i] << " ";
  }
  cout << endl;
}
void sortArrayA(int a[], int size) {
  sort(a, a + size);
}
void sortArrayC(char c[], int size) {
  sort(c, c + size);
}
void sortArrayD(string d[], int size) {
  sort(d, d + size);
}
void ShowA (int a[], int i){
  cout << "Array a using the Sort function: ";
  for(i = 0; i < 5; i++) {
  cout << a[i] << " ";
  }
  cout << endl;
}
void ShowC (char c[],int i){
  cout << "Array a using the Sort function: ";
  for(i = 0; i < 6; i++) {
  cout << c[i] << " ";
  }
  cout << endl;
}
void ShowD (string d[],int i){
  cout << "Array a using the Sort function: ";
  for(i = 0; i < 3; i++) {
  cout << d[i] << " ";
  }
  cout << endl;
}
int main() {
/*
    int a[6];
    int N = 6;
    string filename = "data.txt";
    CopyData(filename, a);
    DisplayData(a);
    float Average = findAve(a);
    cout << "Average = " << Average << endl;
    int max,
        min;
    FindMaxMin(a ,max, min);
    DisplayMaxMin(max,min);
    sort(a, a+N);
    DisplaySortData(a);

    string filename2 = "data2.txt";
    RECORD PP[5];
    CopyRecords(filename2, PP);
    Display(PP);
    double AgeAve = 0;
    double GpaAve = 0;
    AgeGpaAverage(PP, AgeAve , GpaAve);
    Display(AgeAve, GpaAve);

    int a[5]={1,2,3,4,5};
    int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int c[2][3][2]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout << "This is array a" << endl;
    DisplayA(a);
    cout << "\nThis is array b" << endl;
    DisplayB(b);
    cout << "\nThis is array c" << endl;
    DisplayC(c);

    int a[5]={ 1 ,5 ,3 ,4 ,2};
    char c[6]={'a','r','r' ,'a', 'y', 's'};
    string d[3]={ "try", "enjoy", "programming"};
    Display(a,5);
    Display(c, 6);
    Display( d, 3);
    sortArrayA(a,5);
    sortArrayC(c,6);
    sortArrayD(d,3);
    cout << endl;
    ShowA (a,5);
    ShowC (c,6);
    ShowD (d,3);
*/
    return 0;
    }
