#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
    std::cout << "shiftChar 'H' by 10\n";
    std::cout << shiftChar('H', 10) << std::endl;

    std::cout << "Caeser Cipher Encryption - Hello World , Shift 10 \n";
    std::cout << encryptCaesar("Hello, World!", 10) << std::endl;	

    std::cout << "Vigenere Cipher Encryption -  Hello World, keyword - cake \n";
	  std::cout << encryptVigenere("Hello, World!", "cake") << std::endl;

    std::cout << "Decrypt Caesar - Rovvy, Gybvn! , Shift 10\n";
    std::cout << decryptCaesar("Rovvy, Gybvn!",10) << "\n";

    std::cout << "Decrypt Vigenere - Jevpq, Wyvnd! keyword - cake \n";
    std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;


  return 0;
}
