#include <iostream>
#include "decryption.h"
#include "caesar.h"
#include "vigenere.h"
using namespace std;

string decryptCaesar(string ciphertext, int rshift){
    return encryptCaesar(ciphertext, 26 - rshift);
}
// string decryptVigenere(string ciphertext, string keyword){
    
// }