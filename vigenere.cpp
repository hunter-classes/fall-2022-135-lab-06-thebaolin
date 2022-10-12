#include <iostream>
#include "caesar.h"
#include <caesar.cpp"
#include "vigenere.h"
using namespace std;

string encryptVigenere(string plaintext, string keyword){
    string newtext = "";
    for(int i = 0; i < plaintext.length(); i++){
        for(int j = 0; j < keyword.length(); j++){
            int keyword_shifter = ((int)keyword[j]) - 1;
            newtext += encryptCaesar(plaintext, keyword_shifter);
        }
    }  
    return newtext;
}