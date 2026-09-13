// COMSC-210 | Lab 7 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

//Function prototype
string * reverseArray(string * );
void displayArray(const string * );

int main() {
    // create and populate a dynamic string array
    string * strArray = new string[SIZE];
    *(strArray + 0) = "Janet";
    *(strArray + 1) = "Jeffe";
    *(strArray + 2) = "Jin";
    *(strArray + 3) = "Joe";
    *(strArray + 4) = "Junio";

    //Function call
    cout << "Original array: ";
    displayArray(strArray);

    strArray = reverseArray(strArray);
    cout << "Reversed array: ";
    displayArray(strArray);

    // Release the dynamically allocated memory.
    delete[] strArray;

    return 0;
}

//Function definition
string * reverseArray(string * arr) {
    // reverseArray() reverses the elements in the array
    // arguments: the dynamic string array
    // returns: a pointer to the modified array

    for (int i = 0; i < SIZE / 2; i++) {
        // swich the symetric 2 strings, modifies the array
        string temp = * (arr + i);
        *(arr + i) = * (arr + (SIZE - i - 1));
        *(arr + (SIZE - i - 1)) = temp;
    }
    return arr;
}

void displayArray(const string * arr) {
    // displayArray() outputs its elements in the array
    // arguments: the dynamic string array
    // returns: none
    for (int i = 0; i < SIZE; i++) {
        cout << * (arr + i) << " ";
    }
    cout << endl;
}