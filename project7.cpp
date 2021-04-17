#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
class students {
  private:
    int age[10];
    string name[10];
    long int social_s[10];
    int income[10];
  public:
    void setInfo(int age[], string names[], long int social_s[], int income[]) {
      ifstream inFile;
      inFile.open("students");
      for(int i = 0; i < 10; i++){
        inFile >> age[i] >> social_s[i] >> income[i];
        getline(inFile, names[i]);
      }
      inFile.close();
    }
    void getInfo(int age[], string names[], long int social_s[], int income[]) {
      ifstream inFile;
      inFile.open("students");
      cout << "This is the list of students: " << endl;
      for(int i = 0; i < 10; i++){
        cout << age[i] << names[i] << " " << social_s[i] << " " << income[i] << " " << endl;
      }
      inFile.close();
    }
    void LinearSearch(int age[], string names[], long int social_s[], int income[]){
      cout << "The student who makes the most money is: " << endl;
      int max = income[0];
      for(int i = 0; i < 10; i++){
        if(income[i] > max) max = income[i];
      }
      for(int i = 0; i < 10; i++){
        if(income[i] == max) cout << age[i] << names[i] << " " << social_s[i] << " " << income[i] << " " << endl;
      }
    };

    int BinarySearch(int myIncome[],int l, int r, int x){

      while (l <= r) {
          int m = l + (r - l) / 2;

          // Check if x is present at mid
          if (myIncome[m] == x)
              return x;

          // If x greater, ignore left half
          if (myIncome[m] < x)
              l = m + 1;

          // If x is smaller, ignore right half
          else
              r = m - 1;
      }

      // if we reach here, then element was
      // not present
      return -1;
  }
  
  void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int myIncome[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (myIncome[j] < myIncome[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element
		swap(&myIncome[min_idx], &myIncome[i]);
	}
}
void bubbleSort(int myIncome[], int n)
{
int i, j;
for (i = 0; i < n - 1; i++)

// Last i elements are already in place
for (j = 0; j < n - i - 1; j++)
  if (myIncome[j] > myIncome[j + 1])
    swap(&myIncome[j], &myIncome[j + 1]);
}
};


int main() {
  int myStudents[10];
  char choice;
  string myNames[10];
  long int mySSnums[10];
  int myIncome[10];
  students student;
  student.setInfo(myStudents, myNames, mySSnums, myIncome);
  student.getInfo(myStudents, myNames, mySSnums, myIncome);
  cout << endl;
  cout << "What would you like do do?: " << endl;
  cout << "\ta- Linear Search" << endl;
  cout << "\tb- Binary Search" << endl;
  cout << "\tc- Selection Sort" << endl;
  cout << "\td- Bubble Sort" << endl;
  cin >> choice;
  if(choice == 'a')
    student.LinearSearch(myStudents, myNames, mySSnums, myIncome);

  if(choice == 'b'){
    sort(myIncome, myIncome + 10);
    int n = sizeof(myIncome)/sizeof(myIncome[0]);
    int x = myIncome[n-1];
    cout << "The student who makes the most money has: " <<
    student.BinarySearch(myIncome, 0, n - 1, x) << "k" << endl;
  }
  if(choice == 'c'){
    int n = sizeof(myIncome)/sizeof(myIncome[0]);
    student.selectionSort(myIncome, n);
    cout << "The sorted array of students is based on Income using Selection Sort is: " << endl;
    for(int i = 0 ; i < n; i++){
      cout << myIncome[i] << myNames[i] << " " << mySSnums[i] << " " << myStudents[i] << " " << endl;
    }
  }
  if(choice == 'd'){
    int n = sizeof(myIncome)/sizeof(myIncome[0]);
    student.bubbleSort(myIncome, n);
    cout << "The sorted array of students is based on Income using Bubble Sort is: " << endl;
    for(int i = 0 ; i < n; i++){
      cout << myIncome[i] << myNames[i] << " " << mySSnums[i] << " " << myStudents[i] << " " << endl;
    }
  }

  return 0;
}
