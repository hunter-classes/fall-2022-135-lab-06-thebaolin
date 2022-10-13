#include <iostream>
#include "vigenere.h"
using namespace std;


char shiftVigenere(char c, int rshift){
    char newchar;
    //if non alphabetic
    if(!isalpha(c))
        newchar = c;
    //if char is uppercase
    else if(isupper(c)){
        newchar = (c - 'A' + rshift) % 26 + 'A';
        cout<<"newchar is: " << newchar <<endl;
    }
    //if char is lowercase
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
        cout<<plaintext[i]<< " ";
        cout<<keyword[j] << " ";
        cout<<shifter(keyword[j]) << endl;
        newstring += shiftVigenere(plaintext[i],shifter(keyword[j])); 
        if(isalpha(plaintext[i]))
            j++;

    }
    return newstring;
}
