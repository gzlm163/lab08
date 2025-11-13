#include <iostream>
#include <string>

using namespace std;

int main() {  
    int arabicNumber;  
    int arabicNumberValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};  
    string romanNumberValues[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  
    int sizeOfTheArrayOfArabicNumbers;  
    string romanNumber;  
  
    cout << " Enter an arabic number: ";  
    cin >> arabicNumber;  
  
    sizeOfTheArrayOfArabicNumbers = sizeof(arabicNumberValues) / sizeof(arabicNumberValues[0]);  
    romanNumber = "";  
  
    for (int index = 0; index < sizeOfTheArrayOfArabicNumbers; ++index) {  
        while (arabicNumber >= arabicNumberValues[index]) {  
            romanNumber += romanNumberValues[index];  
            arabicNumber -= arabicNumberValues[index];  
        }  
    }  
  
    cout << " Roman number: " << romanNumber << endl;  
  
    return 0;  
}