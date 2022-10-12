#include <iostream>
#include "caesar.h"
#include "vigenere.h"
using namespace std;

string encryptVigenere(string plaintext, string keyword){
    string newtext = "";
    bool finished = false;
    int counter = 0;

    while(!finished){
    for(int i = 0; i < keyword.length(); i++){
        if(counter == plaintext.length())
            finished = true;
        else{
            int keyword_shifter = ((int)keyword[i] - 1);
            newtext += shiftChar(plaintext[i], keyword_shifter);
            counter++;
            }
        }
    }
    return newtext;
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