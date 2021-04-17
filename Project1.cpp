#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
int main() {
    
    double deposit,
            rate,
            years,
            balance;
    const double e = 2.7182818284590452353602874713527;
    cout << "Enter the money you want to deposit now(P): ";
    cin >> deposit;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter duration in year(t): ";
    cin >> years;
    balance = deposit * pow(e, rate*years);
    cout << "Your balance after 5 years is " << balance << fixed << showpoint << setprecision << endl;
    
    string fullName,
        friendsName,
        title,
        gender;
    cout << "Please enter your full name: ";
    getline(cin, fullName);
    cout << fullName << " what is your gender? (m/f): ";
    getline(cin, gender);
    if(gender == "m"){
        title == "Mr.";
        }
    if(gender == "f")  {
            title == "Mrs.";
        }

    cout << "Hello" << title << " " << fullName << " please enter your friend's first name: ";
    getline(cin, friendsName);
    cout << "Hello Mr/Mrs. " << friendsName << ", " << fullName << " has considered you a friend!! " << endl; 
    

    double total;
    int numCoke,
        numBurger;
    double cokePrice = 2.1;
    double burgerPrice = 1.85;
    cout << setw(10) << setfill('-') << "" << "Menu" << setw(10) << setfill('-') << "" << endl;
    cout << "Coke" << setw(16) << setfill('-') << "" << cokePrice << fixed << showpoint << setprecision(2) << endl;
    cout << "Hamburger" << setw(11) << setfill('-') << "" << burgerPrice << fixed << showpoint << setprecision(2) << endl;
    cout << "\t How many cokes?: ";
    cin >> numCoke;
    cout << "\t How many hamburgers?: ";
    cin >> numBurger;
    total = cokePrice * numCoke + burgerPrice * numBurger;
    cout << "\t\tYour total is: " << total << fixed << showpoint << setprecision(2) << endl;
    //return 0;
    
     
    cout << "               / \\\n     ";
    cout << "         /   \\\n     ";
    cout << "        /     \\\n     ";
    cout << "a=33.19/       \\b=21.23\n     ";
    cout << "      /         \\\n     ";
    cout << "     /           \\\n     ";
    cout << "     -------------\n     ";
    cout << "           c=13.80       \n     ";

    double a = 33.19;
    double b = 21.23;
    double c = 13.80;
    double perimeter =  a + b + c;
    double p = perimeter;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));

    cout << "   Area = " << area << fixed << showpoint << setprecision(2) << endl; 
    cout << "\tPerimeter = " << p << fixed << showpoint << setprecision(2) << endl;
    
   string date;
   string dateEnding;

   cout << "Enter today's date: (mm/dd/yyyy): ";
   getline(cin, date);
   string month = date.substr(0,2);
   string day = date.substr(3,2);
   string year = date.substr(6,4);
   
    switch(stoi(month)) {
        case 1:
            month = "Jan";
            break;
        case 2:
            month = "Feb";
            break;
        case 3:
            month = "Mar";
            break;
        case 4:
            month = "Apr";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "Jun";
            break;
        case 7:
            month = "Jul";
            break;
        case 8:
            month = "Aug";
            break;
        case 9:
            month = "Sep";
            break;
        case 10:
            month = "Oct";
            break;
        case 11:
            month = "Nov";
            break;
        case 12:
            month = "Dec";
            break;
    }
    
    if(stoi(day) == 1 || stoi(day) == 21 || stoi(day) == 31) dateEnding = "st";
    else if(stoi(day) == 2 || stoi(day) == 22) dateEnding = "nd";
    else if(stoi(day) == 3 || stoi(day) == 23) dateEnding = "rd";
    else dateEnding = "th";

    cout << "Today is " << month << " " << stoi(day) << dateEnding << ", " << stoi(year) << endl;
    

    int NUM_UPPERCASE,
        NUM_LOWERCASE,
        NUM_WORDS,
        NUM_VOWELS;
    NUM_UPPERCASE = 0;
    NUM_LOWERCASE = 0;
    NUM_WORDS = 1;
    NUM_VOWELS = 0;
    char sentence[100];
    
    cout << "Enter a sentence: ";
    cin.getline(sentence, 100);

    for(int i = 0; sentence[i] != 0; i++) {
        if(sentence[i] >= 'A' && sentence[i] <= 'Z') 
            NUM_UPPERCASE++;
        if (sentence[i] >= 'a' && sentence[i] <= 'z') 
            NUM_LOWERCASE++;
        if(sentence[i] == ' ')
            NUM_WORDS++;
        if(sentence[i] == 'A' || sentence[i] == 'a') 
            NUM_VOWELS++;
        else if(sentence[i] == 'E' || sentence[i] == 'e') 
            NUM_VOWELS++;
        else if(sentence[i] == 'I' || sentence[i] == 'i') 
            NUM_VOWELS++;
        else if(sentence[i] == 'O' || sentence[i] == 'o') 
            NUM_VOWELS++;
        else if(sentence[i] == 'U' || sentence[i] == 'u') 
            NUM_VOWELS++;
    }
    cout << "UPPERCASE LETTERS: " << NUM_UPPERCASE << endl;
    cout << "LOWERCASE LETTERS: " << NUM_LOWERCASE << endl;
    cout << "NUMBER WORDS: " << NUM_WORDS << endl;
    cout << "NUMBER OF VOWELS: " << NUM_VOWELS << endl;
     
    
    return 0;
}
  
  