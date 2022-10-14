main: main.o caesar.o vigenere.o decryption.o
	g++ -o main main.o caesar.o vigenere.o decryption.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

tests: tests.o  caesar.o vigenere.o decryption.o
	g++ -o tests tests.o caesar.o vigenere.o decryption.o

main.o: main.cpp caesar.h vigenere.h decryption.h
	g++ -c main.cpp 
caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp
vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp
decryption.o: decryption.cpp decryption.h
	g++ -c decryption.cpp
tests.o: tests.cpp doctest.h caesar.h vigenere.h
	g++ -c -std=c++11 tests.cpp	
clean:
	rm -f main.o caesar.o vigenere.o decryption.o main tests tests.o test-ascii
