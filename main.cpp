// COMSC-210 | Lab 7 | Huiluan Yie

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

//Function prototype
string* reverseArray(string*);
void displayArray(string*);

int main() {
    string* 

    //Function call

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

void displayArray(string* arr)
{
    // displayArray() outputs its elements in the array
    // arguments: the dynamic string array
    // returns: none

}