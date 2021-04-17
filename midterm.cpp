#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

void readData(int a[]) {
  cout << "Enter 10 int array elements: " << endl;
  for(int i = 0; i < 10; i++){
    cin >> a[i];
  }
}
void sort(int a[], int n){
  sort(a, a + n);
}
void Display(int a[], int &max, int &min, float average) {
  max = a[0];
  min = a[0];
  int total = 0;
  for(int i = 0; i < 10; i++) {
  if(a[i] > max) max = a[i];
  if(a[i] < min) min = a[i];
  }
  for(int i = 0; i < 10; i++){
    total += a[i];
  }
  average = (total / 10.00);
  cout << "Max is " << max << endl;
  cout << "Min is " << min << endl;
  cout << "Average is " << fixed << showpoint << setprecision(2) << average << endl;
}
void DisplayArray(int a[]){
  for(int i = 0; i < 10; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
int main() {

int a[10];
readData (a);
int max, min;
float ave;
sort(a, 10);
Display(a,max,min,ave);
DisplayArray(a);

}
