#include <iostream>
#include <string>
using namespace std;

class Fraction {
  private:
    bool isGreater;
    int x1;
    int x2;
    int y1;
    int y2;
    int num;
    int dnum;
  public:
    Fraction() {
      //int x1 = 0;
    //  int x2 = 0;
      //int y1 = 0;
    //  int y2 = 0;
    //  int num = 0;
    //  int dnum = 0;
    };

    void getData(){
      string fraction1, fraction2;
      cout << "Enter a fraction: ";
      cin >> fraction1;
      cout << "Enter another fraction: ";
      cin >> fraction2;
      x1 = stoi(fraction1.substr(0,1));//fraction 1
      y1 = stoi(fraction1.substr(2,1));//fraction 1
      x2 = stoi(fraction2.substr(0,1));//fraction 2
      y2 = stoi(fraction2.substr(2,1));//fraction 2
      //cout << x1 << "/" << y1 << endl;
      //cout << x2 << "/" << y2 << endl;
    };
    Fraction operator + (){
        Fraction Result;
        Result.num = ( (x1 * y2) + (y1 * x2) );
        Result.dnum = (y1 * y2);
        return Result;
    };
    Fraction operator - (){
        Fraction Result;
        Result.num = ((x1 * y2) - (y1 * x2));
        Result.dnum = (y1 * y2);
        return Result;
    };
    Fraction operator * (){
        Fraction Result;
        Result.num = (x1 * x2);
        Result.dnum = (y1 * y2);
        return Result;
    };
    Fraction operator < (const Fraction&){
        Fraction Result;
        //Result.num = (x1 * y2);
        //Result.dnum = (y1 * x2);
        if((x2 / y2) > (x1 / y1)) Result.isGreater = true;
        else Result.isGreater = false;

        return Result;
    };

    void add(){
      cout << x1 << "/" << y1 << " + " << x2 << "/" << y2 << " = ";
      //num << "/" << dnum << endl;
    };

    void mult(){
      cout << x1 << "/" << y1 << " * " << x2 << "/" << y2 << " = ";
      //num << "/" << dnum << endl;
    };

    void sub(){
      cout << x1 << "/" << y1 << " - " << x2 << "/" << y2 << " = ";
      //num << "/" << dnum << endl;
    };

    void printBool(){
      string t = "TRUE";
      string f = "FALSE";
      string verdict;
      if(isGreater == 1) verdict = t;
      if(isGreater == 0) verdict = f;
      cout << x1 << "/" << y1 << " < " << x2 << "/" << y2 << " is ";
    };
    void printAdd(){
      cout <<num << "/" << dnum << endl;
    };

    void printMult(){
      cout << num << "/" << dnum << endl;
    };

    void printSub(){
      cout << num << "/" << dnum << endl;
    };

    void printMyBool(){
      string t = "TRUE";
      string f = "FALSE";
      string verdict;
      if(isGreater == 1) verdict = t;
      if(isGreater == 0) verdict = f;
      cout << verdict << endl;
    };
~Fraction() {}
};

int main(){

  Fraction f1,res;
  char choice;
    do{
    f1.getData();
    res = +f1;
    f1.add();
    res.printAdd();
    res = *f1;
    f1.mult();
    res.printMult();
    res = -f1;
    f1.sub();
    res.printSub();
    res = f1<f1;
    f1.printBool();
    res.printMyBool();
    cout << "Continue: ";
    cin >> choice;
  }
  while(choice == 'y');



  f1.~Fraction();
  return 0;
}
