#include "Pstring.h"

bool Pstring::isPalindrome(std::string originalString)
{
 // stores argument string in a separate variable and reverses the original
    std::string reversedString = originalString;
    reverse(reversedString.begin(), reversedString.end());

    if (reversedString == originalString)   // compares the two strings
        { return true; }
    else
        { return false; }
}

void Pstring::setUserInput(std::string uI)  // mutator
    { userInput = uI; }
std::string Pstring::getUserInput()         // accessor
    { return userInput; }