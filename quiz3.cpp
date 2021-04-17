#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void printArrayInts(int a[], int n) {
cout << "Array of ints: ";
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printArrayStrings(string name[], int m) {
  cout << "Array of strings: ";
  for(int i = 0; i < m; i++){
    cout << name[i] << " ";
  }
  cout << endl;
}
void sortArrayInts(int a[], int n) {
    sort(a, a+7);
}
void sortArrayStrings(string name[], int m) {
    sort(name, name+5);
}
void printSortedArrayInts(int a[], int n) {
  cout << "Array of Sorted Ints: ";
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printSortedArrayStrings(string name[], int m) {
  cout << "Array of sorted strings: ";
  for(int i = 0; i < m; i++){
    cout << name[i] << " ";
  }
  cout << endl;
}
int main() {
  int a[7]= { 2, 9, 7, 9, 5, 4, 6};
  string name[5] = {"Mary", "Bill", "Donald", "Zack", "Jack"};
  printArrayInts(a,7);
  printArrayStrings(name, 5);
  sortArrayInts(a, 7);
  sortArrayStrings(name, 5);
  printSortedArrayInts(a,7);
  printSortedArrayStrings(name, 5);


  /*
  Code Output:
  Array of ints: 2 9 7 9 5 4 6
  Array of strings: Mary Bill Donald Zack Jack
  Array of Sorted Ints: 2 4 5 6 7 9 9
  Array of sorted strings: Bill Donald Jack Mary Zack


  */
  return 0;
}
