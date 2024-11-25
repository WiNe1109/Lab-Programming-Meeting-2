MaxNumber: MaxNumber.o
	g++ MaxNumber.o -o MaxNumber.exe

# Target to compile the C++ program
MaxNumber.o: MaxNumber.cpp
	g++ -c MaxNumber.cpp -o MaxNumber.o

# Target to run the program (interactively)
run: MaxNumber
	./MaxNumber.exe

# Target to compile the object Test file
MaxNumberTest: MaxNumberTest.o
	g++ MaxNumberTest.o -o MaxNumberTest.exe

# Target to compile the C++ Test program
MaxNumberTest.o: MaxNumberTest.cpp
	g++ -c MaxNumberTest.cpp -o MaxNumberTest.o

# Target to run the Test program
test: MaxNumberTest
	./MaxNumberTest.exe

# Target to clean up compiled files
clean:
	rm -f MaxNumber.o MaxNumberTest.o MaxNumber.exe MaxNumberTest.exe

