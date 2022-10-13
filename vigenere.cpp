#include <iostream>
#include "caesar.h"
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
        shift = letter - 65 - 1;
    }
    else if(islower(letter)){
        shift = letter - 97 - 1;
    }
    return shift;
}

string encryptVigenere(string plaintext, string keyword){
    string newstring = "a";
    int j = 0;
    for(int i = 0; i < plaintext.length(); i++){
        
        if(j == keyword.length())
            j = 0;
        cout<<plaintext[i] << " ";
        cout<<keyword[j] << endl;
        j++;
        
        newstring += shiftVigenere(plaintext[i],shifter(keyword[j]); 
    }
    return newstring;
}

/*
string encryptVigenere(string plaintext, string keyword){
    string newtext = "";
    bool finished = false;
    int keyword_counter = 0; 

    for(int i = 0; i < keyword.length(); i++){
        if(isalpha(keyword[i]){

            keyword_counter++;
            if(keyword_counter == keyword.length())
                counte
        }
    }
}

*/