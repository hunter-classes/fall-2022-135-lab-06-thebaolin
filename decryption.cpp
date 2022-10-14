#include <iostream>
#include "decryption.h"
#include "caesar.h"
#include "vigenere.h"
#include <string>
using namespace std;

string decryptCaesar(string ciphertext, int rshift){
    return encryptCaesar(ciphertext, 26 - rshift);
}

 string decryptVigenere(string ciphertext, string keyword){
    string newstring = ""; int i = 0, j = 0;

	while (i < ciphertext.size()) {
        //65 = A, 90 = Z, 97 = a, 122 = z
		if ( (ciphertext[i] >= 65 && ciphertext[i] <= 90) || (ciphertext[i] >= 97 && ciphertext[i] <= 122) ) {
			newstring += shiftChar(ciphertext[i], 26 - (keyword[j] - 97)); 
			
			if(j == keyword.size() - 1) 
				j = 0;
			else 
				j++;
		}
		else 
			newstring += ciphertext[i];
		i++;
	}
	return newstring;
 }