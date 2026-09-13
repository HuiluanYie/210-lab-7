// COMSC-210 | Lab 7 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

//Function prototype
string* reverseArray(string*);
void displayArray(const string*);

int main() {
    string origin[SIZE] = {"Janet", "Jeffe", "Jin", "Joe", "Junio"};
    string* reversed = nullptr;

    //Function call
    reversed = reverseArray(origin);

    cout << "Original array: ";
    displayArray(origin);
    cout << "Reversed array: ";
    displayArray(reversed);

    // Release the dynamically allocated memory.
    delete[] origin;
    delete[] reversed;

    return 0;
}

//Function definition
string* reverseArray(string* arr)
{
    // reverseArray() reverses the elements in the array
    // arguments: the dynamic string array
    // returns: a pointer to the modified array
    string* rev = new string[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        *(rev + i) = *(arr + (SIZE - i - 1));
    }
    return rev;
}

void displayArray(const string* arr)
{
    // displayArray() outputs its elements in the array
    // arguments: the dynamic string array
    // returns: none
    for (int i = 0; i < SIZE; i++)
    {
        cout << * (arr + i) << " ";
    }
    cout << endl;
}