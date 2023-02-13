// program to check if a word / phrase is a palindrome
#include <iostream>
#include <string>

#include "Pstring.h"
using namespace std;

int main()
{
    Pstring pstring;        // instance of class Pstring
    string userInput;

 // user prompt
    cout << "This is a palindrome-testing program. Enter a string to test: ";
    getline (cin >> ws, userInput);
    pstring.setUserInput(userInput);

    if (pstring.isPalindrome(userInput) == true)        // if palindrome
        { cout << pstring.getUserInput() << " is a palindrome" << endl; }
    else                                                // if not a palindrome
        { cout << pstring.getUserInput() << " is not a palindrome" << endl; }

    return 0;
}