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
    CHECK(encryptVigenere("The quick brown fox jumps over 13 lazy dogs. It also liked to eat cupcakes!", "cryptii") == "Vyc fnqkm spdpv nqo hjfxa qmcg 13 eiha umvl. Qb ccqd eqsgu rd xib elnrtsmu!");
}
