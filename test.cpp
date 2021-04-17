#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class FOUR{
  private: int x[5];
 public:
 FOUR(){
   for(int i=0; i<5; ++i) x[i]=2*i;
 }
 FOUR(int a)
 {
   for(int i=0; i<5; ++i) x[i]=2*a; }
 int Total(int i){
   return x[i]+ x[2*i];
 }
};
int main()
{ FOUR Five, Six(2);
  cout<< Five.Total(1) + Six.Total(2);
  return 0;
};
