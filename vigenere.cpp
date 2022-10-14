#include <iostream>
#include "vigenere.h"
using namespace std;


char shiftVigenere(char c, int rshift){
    char newchar;
    if(!isalpha(c))
        newchar = c;
    else if(isupper(c)){
        newchar = (c - 'A' + rshift) % 26 + 'A';
    }
    else{
        newchar = (c - 'a' + rshift) % 26 + 'a';
    }

    return newchar;
}

int shifter(char letter){
    int shift;
    if(!isalpha(letter))
        shift = letter;
    else if(isupper(letter)){
        shift = letter - 65;
    }
    else if(islower(letter)){
        shift = letter - 97;
    }
    return shift;
}

string encryptVigenere(string plaintext, string keyword){
    string newstring = "";
    int j = 0;
    for(int i = 0; i < plaintext.length(); i++){
        
        if(j == keyword.length())
            j = 0;
        newstring += shiftVigenere(plaintext[i],shifter(keyword[j])); 
        if(isalpha(plaintext[i]))
            j++;

    }
    return newstring;
}
