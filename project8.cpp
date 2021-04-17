#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class RECTANGLE
{
 private: float Length, Width;
 public: RECTANGLE ( ); // constructor to read the values of Length and Width
 void computeArea(float& area){
   area = Length * Width;
 }; // compute and return area
 void computePerimeter(float& perimeter){
   perimeter = 2 * Length + 2 * Width;
 }; //compute and return perimeter
 void displayAreaPer(float area, float perimeter){
   cout << "\tArea: " << area << endl;
   cout << "\tPerimeter: " << perimeter << endl;
 }; //display area and perimeter
 ~RECTANGLE() {}
};
RECTANGLE::RECTANGLE(void){
  cout << "Enter the values of width and length of a rectangle: ";
  cin >> Length >> Width;
}

class TRIANGLE
{
 private: float sideA, sideB, sideC;
 public: TRIANGLE(); //initialize sideA,sideB,sideC
 float computePerimeter(float perimeterTri){
   perimeterTri = sideA + sideB + sideC;
   return perimeterTri;
 }; //compute and return perimeter
 float computeArea(float areaTri){
   float p = ((sideA + sideB + sideC) / 2);
   areaTri = sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
   return areaTri;
 }; // use the perimeter to calculate area
 void displayAreaPer(float areaTri, float perimeterTri){
   cout << "\tArea: " << fixed << showpoint << setprecision(2) << computeArea(areaTri) << endl;
   cout << "\tPerimeter: " << computePerimeter(perimeterTri) << endl;
 };
 ~TRIANGLE() {}
};
TRIANGLE::TRIANGLE(void){
  cout << "Enter the values of all three of a triangle: ";
  cin >> sideA >> sideB >> sideC;
}

class TRAPEZOID
{
 private:
   float lowerBase, upperBase, height;
   float leftSide, rightSide;
 public:
   void readData(){
     cout << "Enter the lowerBase, upperBase, and Height: ";
     cin >> lowerBase >> upperBase >> height;
     cout << "Enter the values of left and right sides: ";
     cin >> leftSide >> rightSide;
 };
 void computeAreaPer (float& areaTrap, float& per){
   areaTrap = ( (upperBase + leftSide) * height) / 2;
   per = (leftSide + rightSide + upperBase + lowerBase);
 };
 void displayAreaPer(float areaTrap, float per){
   cout << "\tArea: " << fixed << showpoint << setprecision(2) << areaTrap << endl;
   cout << "\tPerimeter: " << fixed << showpoint << setprecision(2) << per << endl;
 };
};

int main() {

  float area, perimeter;
  RECTANGLE myRectangle;
  myRectangle.computeArea(area);
  myRectangle.computePerimeter(perimeter);
  myRectangle.displayAreaPer(area, perimeter);

  float perimeterTri, areaTri;
  TRIANGLE myTriangle;
  myTriangle.displayAreaPer(areaTri, perimeterTri);

  float areaTrap, per;
  TRAPEZOID myTrapezoid;
  myTrapezoid.readData();
  myTrapezoid.computeAreaPer(areaTrap, per);
  myTrapezoid.displayAreaPer(areaTrap, per);
  return 0;
}
