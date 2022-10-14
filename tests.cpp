#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

TEST_CASE("TASK B"){

    CHECK(shiftChar('W', 1) == 'X');
    CHECK(shiftChar('a', 5) == 'f');
    CHECK(shiftChar('Y', 3) == 'B');

    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("I Love Computer Science!", 3) == "L Oryh Frpsxwhu Vflhqfh!");
    CHECK(encryptCaesar("shifty shifter;;;;2329389s", 7) == "zopmaf zopmaly;;;;2329389z");
}

TEST_CASE("TASK C"){
    CHECK(encryptVigenere("Goodbye, World!", "cat") == "Iohfbrg, Whtlw!");
    CHECK(encryptVigenere("CATATTACK2022", "woof") == "YOHFPHOHG2022");
    CHECK(encryptVigenere("gibberish hello take up this fillerspace", "encryptdecrypt") == "kvdscgbvl jvjah xnmv se mkmu wgaeieugyrx");

}

TEST_CASE("TASK D"){
    CHECK(decryptCaesar("Bfd yt Lt!",5) == "Way to Go!");
    CHECK(decryptCaesar("L Oryh Frpsxwhu Vflhqfh!", 3) == "I Love Computer Science!");
    CHECK(decryptCaesar("zopmaf zopmaly;;;;2329389z",7) == "shifty shifter;;;;2329389s");
    CHECK(decryptCaesar("Rovvy, Gybvn!",10) == "Hello, World!");
    CHECK(decryptVigenere("Iohfbrg, Whtlw!","cat") == "Goodbye, World!");
    CHECK(decryptVigenere("YOHFPHOHG2022","woof") == "CATATTACK2022");
    CHECK(decryptVigenere("kvdscgbvl jvjah xnmv se mkmu wgaeieugyrx","encryptdecrypt") == "gibberish hello take up this fillerspace");

}