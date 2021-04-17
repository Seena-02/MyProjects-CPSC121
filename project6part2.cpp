#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class SIX {

  private:
    struct PERSON {
      string name;
      int age;
      };
      PERSON p[4];
  public:
    void ReadData() {
      for(int i = 0; i < 4; i++) {
        cout << "Enter a name and age: ";
        cin >> p[i].name >> p[i].age;
     }
     cout << endl;
    }
    void Display() {
      cout << "\tThis is the list of people: \t" <<
       "\n\t\tName        Age\n" <<
       "\t--------------------------------" << endl;
      for(int i = 0; i < 4; i++){
        cout << "\t\t" << left << setw(10) << p[i].name << left << setw(2) << setfill(' ') << "" << p[i].age << endl;
      }
    }
    int AgeAverage(){
      int ageTotal = 0;
      int average;
      for(int i = 0; i < 4; i++){
        ageTotal += p[i].age;
      }
      average  = ageTotal / 4;
      return average;
    }
    void DisplayAboveAve(int AgeAverage){
      cout << "\tThe following people's age is\n\tabove average: " << endl;
      for(int i = 0; i < 4; i++){
        if(p[i].age > AgeAverage)
        cout << setw(10) << setfill(' ') << "" << p[i].name << " ";
      }
      cout << endl;
    }
};


int main() {
  int calcdAvg;
  SIX myInfo;
  myInfo.ReadData();
  myInfo.Display();
  calcdAvg = myInfo.AgeAverage();
  myInfo.DisplayAboveAve(calcdAvg);
  /*
  Program Output:
  Enter a name and age: John 22
  Enter a name and age: Mary 19
  Enter a name and age: Cynthia 33
  Enter a name and age: George 25

	This is the list of people:
		Name        Age
	--------------------------------
		John        22
		Mary        19
		Cynthia     33
		George      25
	The following people's age is
	above average:
          Cynthia           George
  */
return 0;
}
