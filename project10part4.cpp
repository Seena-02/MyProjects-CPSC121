#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

template <class T>
class THREE {
private:
  T a[5];
public:
  void CopyData(string fname);
  void SortArray();
  void DisplayArray();
  ~THREE();
};

template <class T>
void THREE<T>::CopyData(string fname){
  ifstream inFile;
  inFile.open(fname);
  for(int i = 0; i < 5; i++) {
  inFile >> a[i];
  }
  inFile.close();
}

template <class T>
void THREE<T>::SortArray(){
  sort(a, a + 5);
}

template <class T>
void THREE<T>::DisplayArray(){
  cout << "Items are Sorted..." << endl;
  for(int i = 0; i < 5; i++) {
    cout << "\t" << a[i] << " ";
  }
  cout << endl;
}

template <typename T>
THREE<T>::~THREE(){}

  int main(){
    string f1 = "File1.txt";
    string f2 = "File2.txt";
    string f3 = "File3.txt";

    THREE<int> obj1;
    obj1.CopyData(f1);
    obj1.SortArray();
    obj1.DisplayArray();
    THREE<string> obj2;
    obj2.CopyData(f2);
    obj2.SortArray();
    obj2.DisplayArray();
    THREE<char> obj3;
    obj3.CopyData(f3);
    obj3.SortArray();
    obj3.DisplayArray();
    return 0;
  }
