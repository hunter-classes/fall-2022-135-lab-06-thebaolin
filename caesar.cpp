#include <iostream>
#include "caesar.h"
using namespace std;

char shiftChar(char c, int rshift){
    char newchar;
    //if non alphabetic
    if(!isalpha(c))
        return c;
    //if char is uppercase
    else if(isupper(c)){
        newchar = (c - 'A' + rshift) % 26 + 'A';
    }
    //if char is lowercase
    else{
        newchar = (c - 'a' + rshift) % 26 + 'a';
    }

    return newchar;
}
string encryptCaesar(string plaintext, int rshift){
    string newString = "";
    for(int i = 0; i < plaintext.length(); i++){
        newString += shiftChar(i, rshift);
    }
    return newString;
}

