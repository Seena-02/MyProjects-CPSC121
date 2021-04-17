#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class POINT {
  private: float x, y;
  public:
  POINT(){
    float x = 0;
    float y = 0;
  };
  void ReadData(char vertex){
    cout << "\tEnter the x and y coordinates of vertex " << vertex << ": ";
    cin >> x >> y;
  };
  void Display(char vertex){
    cout << vertex << "(" << fixed << showpoint << setprecision(2) <<
    x << "," << fixed << showpoint << setprecision(2) << y << ")";
  };
  friend float Distance(POINT p, POINT q){
    float distance;
    distance = sqrt( pow( (q.x - p.x) , 2) + pow( (q.y - p.y) ,2) );
    return distance;
  }

  void DisplayPerimeter(float AB, float AC, float CD, float BD){
    cout << endl;
    cout << "\tAB= " << AB << endl;
    cout << "\tAC= " << AC << endl;
    cout << "\tCD= " << CD << endl;
    cout << "\tBD= " << BD << endl;
    cout << "\t   Perimeter= " << AB + AC + CD + BD << endl;
  };
  ~POINT() {}
};
int main(){
  POINT A,B,C,D,P;

  cout << "For the rectangle ABCD:\n";
  A.ReadData('A');
  B.ReadData('B');
  C.ReadData('C');
  D.ReadData('D');
  cout << endl;

  A.Display('A');
  cout << setw(33) << setfill('-') << "";
  B.Display('B');
  cout << endl;
  cout << setw(13) << setfill(' ') << "|" << setw(32) << setfill(' ') << "" << "|" << endl;
  cout << setw(13) << setfill(' ') << "|" << setw(32) << setfill(' ') << "" << "|" << endl;
  cout << setw(13) << setfill(' ') << "|" << setw(32) << setfill(' ') << "" << "|" << endl;
  C.Display('C');
  cout << setw(33) << setfill('-') << "";
  D.Display('D');
  cout << endl;

  float AB = Distance(A,B);
  float AC = Distance(A,C);
  float CD = Distance(C,D);
  float BD = Distance(B,D);
  P.DisplayPerimeter(AB, AC, CD, BD);
  A.~POINT();
  B.~POINT();
  C.~POINT();
  D.~POINT();
  return 0;
}
