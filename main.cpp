#include <iostream>
#include "caesar.cpp"
#include "vigenere.cpp"
using namespace std;

int main()
{
    cout<<encryptCaesar("Way to Go!", 5)<<endl;
    //cout<< encryptVigenere("Hello, World!", "cake") << endl; //Jevpq, Wyvnd!
  return 0;
}
