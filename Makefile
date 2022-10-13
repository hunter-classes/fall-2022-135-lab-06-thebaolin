main: main.o caesar.o vigenere.o decryption.o
	g++ -o main main.o caesar.o vigenere.o decryption.o


tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

main.o: main.cpp caesar.h vigenere.h decryption.h
	g++ -c main.cpp 
caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp
vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp
decryption.o: decryption.cpp decryption.h
	g++ -c decryption.cpp
tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o caesar.o vigenere.o decryption.o
