#include <iostream>
#include <iomanip>

using namespace std;

inline void swap(int &valueA, int &valueB);
inline void swap(double &valueA, double &valueB);
inline void swap(char &valueA, char &valueB);

int main(void)
{
    int firstNumber = 5;
    int secondNumber = 10;
    double firstFloatNumber = 7.2;
    double secondFloatNumber = 3.2;
    char firstCharacter = 'A';
    char secondCharacter = 'F';

    cout << "first is : " << setw(4) << firstNumber << " | second is : " << setw(4) << secondNumber << endl;
    swap(firstNumber, secondNumber);
    cout << "first is : " << setw(4) << firstNumber << " | second is : " << setw(4) << secondNumber << endl;

    cout << "first is : " << setw(4) << firstFloatNumber << " | second is : " << setw(4) << secondFloatNumber << endl;
    swap(firstFloatNumber, secondFloatNumber);
    cout << "first is : " << setw(4) << firstFloatNumber << " | second is : " << setw(4) << secondFloatNumber << endl;

    cout << "first is : " << setw(4) << firstCharacter << " | second is : " << setw(4) << secondCharacter << endl;
    swap(firstCharacter, secondCharacter);
     cout << "first is : " << setw(4) << firstCharacter << " | second is : " << setw(4) << secondCharacter << endl;
    return 0;
}

inline void swap(int &valueA, int &valueB)
{
    int temp = valueA;
    valueA = valueB;
    valueB = temp;
}

inline void swap(double &valueA, double &valueB)
{
    double temp = valueA;
    valueA = valueB;
    valueB = temp;
}

inline void swap(char &valueA, char &valueB)
{
    char temp = valueA;
    valueA = valueB;
    valueB = temp;
}


