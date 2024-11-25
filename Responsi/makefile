SecondLargest: SecondLargest.o
	g++ SecondLargest.o -o SecondLargest.exe

# Target to compile the C++ program
SecondLargest.o: SecondLargest.cpp
	g++ -c SecondLargest.cpp -o SecondLargest.o

# Target to run the program (interactively)
run: SecondLargest
	./SecondLargest.exe

# Target to compile the object Test file
SecondLargestTest: SecondLargestTest.o
	g++ SecondLargestTest.o -o SecondLargestTest.exe

# Target to compile the C++ Test program
SecondLargestTest.o: SecondLargestTest.cpp
	g++ -c SecondLargestTest.cpp -o SecondLargestTest.o

# Target to run the Test program
test: SecondLargestTest
	./SecondLargestTest.exe

# Target to clean up compiled files
clean:
	rm -f SecondLargest.o SecondLargestTest.o SecondLargest.exe SecondLargestTest.exe
