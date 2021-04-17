#include <iostream>
#include <string>
using namespace std;
class FIVE {
  private:
    int x[7];
  public:
    void READ(int x[]);
    void DisplayA(int x[]);
    void FindMaxMin(int x[]);
    int FindTotal(int x[]);

};
void FIVE::READ(int x[7]){
  cout << "Enter 7 int numbers: ";
  for (int i = 0; i< 7;i++) cin >> x[i];
}
void FIVE::DisplayA(int x[7]){
  cout << "Your nums are: ";
  for (int i = 0; i< 7;i++) cout << x[i] << " ";
  cout << endl;
}
void FIVE::FindMaxMin(int x[7]){
  int max = x[0];
  int min = x[0];
  for(int i = 0; i < 7; i++){
    if(x[i] > max) max = x[i];
    if(x[i] < min) min = x[i];
  }
  cout << "The Max is : " << max << endl;
  cout << "The Min is : " << min << endl;
}

int FIVE::FindTotal(int x[7]){
  int total = 0;
  for(int i = 0; i < 7; i++){
    total += x[i];
  }
  return total;
}
int main() {

  int max, min;
  int x[7];
  FIVE myNums;
  myNums.READ(x);
  myNums.DisplayA(x);
  myNums.FindMaxMin(x);
  cout << "Your total is: " << myNums.FindTotal(x) << endl;
  return 0;
  /*Output:
  Enter 7 int numbers: 22 77 33 99 11 10 23
  Your nums are: 22 77 33 99 11 10 23
  The Max is : 99
  The Min is : 10
  Your total is: 275
  */
}
