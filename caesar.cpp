#include <iostream>
#include "caesar.h"
using namespace std;

char shiftChar(char c, int rshift){
    char newchar;
    if(!isalpha(c))
        return c;
    else if(isupper(c))
        newchar = (c - 'A' + rshift) % 26 + 'A';
    else
        newchar = (c - 'a' + rshift) % 26 + 'a';
    return newchar;
}

string encryptCaesar(string plaintext, int rshift){
    string newString = "";
    for(int i = 0; i < plaintext.length(); i++){
        newString += shiftChar(plaintext[i], rshift);
    }
    return newString;
}

