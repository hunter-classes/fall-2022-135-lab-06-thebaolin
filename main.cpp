#include <iostream>
#include "vigenere.h"
#include "caesar.h"
#include "funcs.h"
using namespace std;

int main()
{

  cout<< encryptVigenere("Hello, World!", "cake") << endl; //Jevpq, Wyvnd!
  return 0;
}
