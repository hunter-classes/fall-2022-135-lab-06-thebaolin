#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"
using namespace std;

int main()
{
    cout<<encryptCaesar("shifty shifter;;;;2329389s", 7) << endl;
    cout<<shiftChar('Y', 3)<<endl;
    //cout<<encryptVigenere("Hello, World!", "cake") <<endl; //Jevpq, Wyvnd!
    //cout<<decryptCaesar("Rovvy, Gybvn!", 10);
  return 0;
}
