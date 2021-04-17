#include <iostream>
using namespace std;

class TWO {
 private: int age[5];
 public: // read data into array age
 void ReadData(){
   cout << "Enter 5 ages: ";
   for(int i = 0; i < 5; i++){
     cin >> age[i];
   }
 }
 friend int FindAverage(TWO p){
   int total;
   for(int j = 0;j < 5; j++){
     total += p.age[j];
   }
   return total / 5;
 }
 void FindMaxMin(int& maxAge, int& minAge){
   maxAge = age[0];
   minAge = age[0];
   for(int i = 0; i < 5; i++){
     if(maxAge > age[i]) maxAge = age[i];
     if(minAge < age[i]) minAge = age[i];
   }
 }
 void DisplayAboveAve(int ageAve){
   //TWO p;
   //float average = FindAverage(p);
   //cout << "The average is: " << average << endl;
   cout << "Ages above average: ";
   for(int i = 0; i < 5; i++){
     if(ageAve < age[i]) cout << age[i] << " ";
   }
   cout << endl;
 };
 void DisplayMaxMinAge(int maxAge, int minAge){
   cout << "Maximum age is: " << maxAge << endl;
   cout << "Minimum age is: " << minAge << endl;
 };
 ~TWO() {}
 };

 int main(){
  TWO p;
  p.ReadData();
  int max = 0;
  int min = 0;
  int avg = FindAverage(p);
  p.DisplayAboveAve(avg);
  p.FindMaxMin(max, min);
  p.DisplayMaxMinAge(max,min);
   return 0;
 }
