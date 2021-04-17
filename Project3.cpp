#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

void numCharacters(char arr[100]) {
    int numUpper = 0;
    int numLower = 0;
    int numVowel = 0;
    int numWords = 0;
    for(int i = 0; i < arr[i]; i++){
        if(islower(arr[i]))
            numLower++;
        if(isupper(arr[i]))
            numUpper++;
        if(arr[i] == 'A' || arr[i] == 'a')
            numVowel++;
        if(arr[i] == 'E' || arr[i] == 'e')
            numVowel++;
        if(arr[i] == 'I' || arr[i] == 'i')
            numVowel++;
        if(arr[i] == 'O' || arr[i] == 'o')
            numVowel++;
        if(arr[i] == 'U' || arr[i] == 'u')
            numVowel++;
        if(isspace(arr[i]))  
            numWords++;
    }
    cout << "Number of upper case letters: "<< numUpper << endl;
    cout << "Number of lower case letters: "<< numLower << endl;
    cout << "Number of vowels: "<< numVowel << endl;
    cout << "Number of words: "<< numWords + 1 << endl;
}

int ReadData(int &x, int &y, int &z) {
    cout << "Enter three integer numbers: ";
    cin >> x >> y >> z;
}
int ComputeSum(int x, int y, int z) {
    //cout << "\tTotal = " << x + y + z << endl;
    return x + y + z;
}
float ComputeAverage(int x, int y, int z, float average) {
    return (x + y + z) / 3;
    //cout << "\tAverage = " << (x + y + z) / 3 << fixed << showpoint << setprecision(2) << endl;
}


void findMaxMin(int x, int y, int z, int &max, int &min) {
    min = x;
    max = y;
    if(y < min) {
        min = y;
        }
    if(z < min) {
        min = z;
    }
    if (z > max) {
        max = z;
    }
    if (y > max) {
        max = y;
    }
}

void Display(int total, float average, int max, int min) {

    cout << "\tTotal = " << total << endl;
    cout << "\tAverage = " << average << endl;
    cout << "\tMax = " << max << endl;
    cout << "\tMin = " << min << endl;

}


void returnLast(string &first, string &middle, string &last) {
    char choice;
do{
    cout << "Please enter your full name: ";
    cin >> first >> middle >> last;
    cout << first << " " << middle << " " << last << " Your last name is " << last << endl;
    cout << "Continue? " << choice;
    cin >> choice;
 }
 while(choice == 'y');
}

void checkInfo(string mystring) {
    int count = 0;
    int upper = 0;
    int digit = 0;
    int NUM_UPPERCASE = 0;
    int NUM_LOWERCASE = 0;
    int NUM_VOWELS = 0;
    int NUM_DIGITS = 0;
    char choice;
do{
    cout << "Enter a sentence :";
    getline(cin, mystring); {
    while (count < mystring.length()) {
            if (isupper(mystring[count])) upper++;
            if (isdigit(mystring[count])) digit++;
            
            if(mystring[count] >= 'A' && mystring[count] <= 'Z') 
                NUM_UPPERCASE++;
            if(mystring[count] >= 'a' && mystring[count] <= 'z') 
                NUM_LOWERCASE++;
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
    cin.ignore();
    cout << "UPPERCASE LETTERS: " << NUM_UPPERCASE << endl;
    cout << "LOWERCASE LETTERS: " << NUM_LOWERCASE << endl;
    cout << "NUM DIGITS: " << NUM_DIGITS << endl;
    cout << "NUMBER OF VOWELS: " << NUM_VOWELS << endl;
    }
    cout << "\tContinue? ";
    cin >> choice;

}   while(choice == 'y');


}
int main() {
    
    char sentence[100];
    cout << "I can count the number of upper case, lower case, vowels and words" << endl;
    cout << "Please enter a sentence: ";
    cin.getline(sentence, 100);
    numCharacters(sentence);

    int x, y, z;
    ReadData(x, y, z);

    int total;
    total = ComputeSum(x, y, z);

    float average;
    average = ComputeAverage( x, y, z, average);

    int min, max;
    findMaxMin(z,y,z,max,min);
    
    Display( total , average, max, min);

    string first, middle, last;
    returnLast(first, middle, last);
    
   // string mystring;


    //checkInfo(mystring);
    //system ("pause");
    return 0;
}