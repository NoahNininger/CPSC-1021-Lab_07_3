#ifndef P_STRING_H_
#define P_STRING_H_

#include <algorithm>
#include <string>

// class derrived from the string library
class Pstring : public std::string
{
    private:
        std::string userInput;
    public:
        Pstring() = default;        // default constructor
     // passes the string to the base class constructor
        Pstring(std::string uI) { this -> userInput = uI; }

        bool isPalindrome(std::string);         // function prototypes
        void setUserInput(std::string);
        std::string getUserInput();
};

#endif