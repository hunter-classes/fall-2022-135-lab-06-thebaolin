#include <iostream>
#include "decryption.h"
#include "caesar.h"
#include "vigenere.h"
using namespace std;

string decryptCaesar(ciphertext, rshift){
    return encryptCaesar(ciphertext, 26 - rshift);
}
string decryptVigenere(ciphertext, keyword){
    
}