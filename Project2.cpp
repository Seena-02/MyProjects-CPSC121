#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
int main() {/* 
    cout << "Please enter the start, finish, and jump values for the exchange rate table: ";
    int x, y, z;
    cin >> x >> y >> z;
    cout << "DOLLAR  " << " YEN   " << " Pound   " << " Euro   " << endl;
    cout << setw(35) << setfill('-') << "" << endl;
    for (double start = x; start <= y; start += z)
    {
        cout << start << fixed << showpoint << setprecision(2) << "\t"
        << start*104.56 << fixed << showpoint << setprecision(2) << "\t"
        << start*0.72 << fixed << showpoint << setprecision(2) << "\t"
        << start*0.83 << fixed << showpoint << setprecision(2) << "\t" << endl;


    }
    //return 0;

    string mystring;
    int count = 0, upper =0, digit = 0;
    int NUM_UPPERCASE = 0;
    int NUM_LOWERCASE = 0;
    int NUM_VOWELS = 0;
    int NUM_DIGITS = 0;
    cout << "Enter a sentence :";
    getline(cin, mystring);
    while (count < mystring.length())
    {
        if (isupper(mystring[count])) upper++;
        if (isdigit(mystring[count])) digit++;
        
        if(mystring[count] >= 'A' && mystring[count] <= 'Z') 
            NUM_UPPERCASE++;
        if (mystring[count] >= '1' && mystring[count] <= '9') 
            NUM_DIGITS++;
        if(mystring[count] == 'A' || mystring[count] == 'a') 
            NUM_VOWELS++;
        else if(mystring[count] == 'E' || mystring[count] == 'e') 
            NUM_VOWELS++;
        else if(mystring[count] == 'I' || mystring[count] == 'i') 
            NUM_VOWELS++;
        else if(mystring[count] == 'O' || mystring[count] == 'o') 
            NUM_VOWELS++;
        else if(mystring[count] == 'U' || mystring[count] == 'u') 
            NUM_VOWELS++;
        count++;
    }
    cout << "UPPERCASE LETTERS: " << NUM_UPPERCASE << endl;
    cout << "NUM DIGITS: " << NUM_DIGITS << endl;
    cout << "NUMBER OF VOWELS: " << NUM_VOWELS << endl;
    //return 0;

    srand(time(0)); // seed
    int a, b,answer;
    char choice;
    char yesORno;
    int numCorrect = 0;
    int numWrong = 0;
    
        cout << "--------------Math Club----------" << endl
            << "a.Practice addition" <<endl
            <<  "b.Practice subtraction" <<endl
            << " Please enter your choice :";
        cin >> choice;
    do {
        switch (choice){
        case 'a':
            
            a = rand() % 100 + 1;
            b = rand() % 100 + 1;
            cout << a << "+" << b << "=?";
            cin >> answer;
            if (a + b == answer) {
                cout << "right\n";
                numCorrect++;
            }
            else {
                cout << "wrong\n";
                numWrong++;
            }
            cout << "continue?(y/n): ";
            cin >> yesORno;
            break;
        
        case 'b':
            
            a = rand() % 100 + 1;
            b = rand() % 100 + 1;
            cout << a << "-" << b << "=?";
            cin >> answer;
            if(a - b == answer) {
                 cout << "right\n";
                 numCorrect++;
            }
            else {
                cout << "wrong\n";
                numWrong++;
            }
            cout << "continue?(y/n): ";
            cin >> yesORno;
            break;
            }
            
    if(yesORno == 'n') {
    cout << "Correct answers: " << numCorrect << endl;
    cout << "Wrong answers: " << numWrong << endl;
        }
    } while (yesORno == 'y');
    return 0;
    }


    char votes[100];
    int NUM_YES = 0;
    int NUM_NO = 0;
    cout << "Enter a string of YES and NO votes: ";
    cin.getline(votes, 100);
    for(int i = 0; votes[i] != 0; i++) {
        
        if(votes[i] == 'Y' || votes[i] == 'y') {
            NUM_YES++;
        }
        if(votes[i] == 'N' || votes[i] == 'n') {
            NUM_NO++;
        }
    }

    cout <<  "YES: " << setw(NUM_YES + 1) << setfill('*') << " " << endl;
    cout << "NO: " << setw(NUM_NO + 1) << setfill('*') << " " << endl;
*/
    
    return 0;
}
