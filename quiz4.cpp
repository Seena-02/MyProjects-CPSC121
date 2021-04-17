#include <iostream>
#include <cmath>
using namespace std;
int recursive(int n, int base) {
  if(n > 0) {
    return recursive(n-1, base) + pow(base, n);
  }
  else return 1;
}

int main(){
  int n;
  int base;
  cout << "What base number? ";
  cin >> base;
  cout << " to what power? ";
  cin >> n;
  int solution =  recursive(n, base);
  cout << "Answer is: " << solution << endl;

  return 0;
}
