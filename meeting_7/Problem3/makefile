Problem3: Problem3.o
	g++ Problem3.o -o Problem3.exe

# Target to compile the C++ program
Problem3.o: Problem3.cpp
	g++ -c Problem3.cpp -o Problem3.o

# Target to run the program (interactively)
run: Problem3
	./Problem3.exe

# Target to compile the object Test file
Problem3Test: Problem3Test.o
	g++ Problem3Test.o -o Problem3Test.exe

# Target to compile the C++ Test program
Problem3Test.o: Problem3Test.cpp
	g++ -c Problem3Test.cpp -o Problem3Test.o

# Target to run the Test program
test: Problem3Test
	./Problem3Test.exe

# Target to clean up compiled files
clean:
	rm -f Problem3.o Problem3Test.o Problem3.exe Problem3Test.exe

