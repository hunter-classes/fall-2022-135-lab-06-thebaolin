#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"
using namespace std;

int main()
{
    //cout<<encryptCaesar("shifty shifter;;;;2329389s", 7) << endl;
    //cout<<shiftChar('Y', 3)<<endl;
    cout<<encryptVigenere("Goodbye, World!", "cat") <<endl; 
    cout<<encryptVigenere("asdjhagsdjh2389479asjdbsa asdgjahsgdj", "CATATTACK") <<endl; 
    cout<<encryptVigenere("CATATTACK2022", "woof") <<endl; 
    cout<<encryptVigenere("gibberish hello take up this fillerspace", "encryptdecrypt") <<endl; 
    //cout<<decryptCaesar("Rovvy, Gybvn!", 10);
  return 0;
}
