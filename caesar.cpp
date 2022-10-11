#include <iostream>
#include "caesar.h"
using namespace std;

int main(){
    
}

char shiftChar(char c, int rshift){
    int value = (int)c;
    if(value >= 65){
        return (char)(value + rshift);
    }
    else
        return c;
}
string encryptCaesar(string plaintext, int rshift){
    string newString = "";
    for(int i = 0; i < plaintext.length(); i++){
        newString += shiftChar(i, rshift);
    }
    return newString;
}

