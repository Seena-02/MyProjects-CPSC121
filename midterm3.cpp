#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;
int NumDigits(char sentence[100]){
  int counter = 0;
  for (int i = 0; i < strlen(sentence); i++) {
      if (isdigit(sentence[i])) {
          counter++;
      }
  }
  return counter;
}
int getLower(char sentence[100]){
  int NUM_LOWERCASE = 0;
  for(int i = 0; i < strlen(sentence); i++) {
  if(sentence[i] >= 'a' && sentence[i] <= 'z')
                NUM_LOWERCASE++;
    }
    return NUM_LOWERCASE;
}
int numWord(char sentence[100]){
  int NUMWORDS = 0;
  for(int i = 0; i < strlen(sentence); i++) {
    if(sentence[i] == ' ') NUMWORDS++;
  }
  return NUMWORDS;
}
int main(){
  char sentence[100];
    cout << "Please enter a sentence: ";
    cin.getline(sentence, 100);


  cout << "Num digits: " << NumDigits(sentence) << endl;
  cout << "Num Lowercase: " << getLower(sentence) << endl;
  cout << "Num Words: " << numWord(sentence)+1 << endl;

  return 0;
}
