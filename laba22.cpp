#include <iostream>
#include <string>

using namespace std;

int main() {
  string romanNumber;
  int arabicNumber;
  int index;

  cout << " Enter a roman number: ";
  cin >> romanNumber;

  arabicNumber = 0;
  index = 0;

  while (index < romanNumber.length()) {
    if (index + 1 < romanNumber.length()) {
      char firstCharacter; 
      char secondCharacter;
      
      firstCharacter = romanNumber[index];
      secondCharacter = romanNumber[index + 1];

      if (firstCharacter == 'C' && secondCharacter == 'M') {
        arabicNumber += 900; 
        index += 2; 
        continue;
      } else if (firstCharacter == 'C' && secondCharacter == 'D') {
        arabicNumber += 400; 
        index += 2; 
        continue;
      } else if (firstCharacter == 'X' && secondCharacter == 'C') {
        arabicNumber += 90; 
        index += 2; 
        continue;
      } else if (firstCharacter == 'X' && secondCharacter == 'L') {
        arabicNumber += 40; 
        index += 2; 
        continue;
      } else if (firstCharacter == 'I' && secondCharacter == 'X') {
        arabicNumber += 9; 
        index += 2; 
        continue;
      } else if (firstCharacter == 'I' && secondCharacter == 'V') {
        arabicNumber += 4; 
        index += 2; 
        continue;
      }
    }

    char currentCharacter;
    
    currentCharacter = romanNumber[index];

    if (currentCharacter == 'M') {
      arabicNumber += 1000;
    } else if (currentCharacter == 'D') {
      arabicNumber += 500;
    } else if (currentCharacter == 'C') {
      arabicNumber += 100;
    } else if (currentCharacter == 'L') {
      arabicNumber += 50;
    } else if (currentCharacter == 'X') {
      arabicNumber += 10;
    } else if (currentCharacter == 'V') {
      arabicNumber += 5;
    } else if (currentCharacter == 'I') {
      arabicNumber += 1;
    }

    ++index;
    
  }

  cout << " Arabic number: " << arabicNumber << endl;

  return 0;
}