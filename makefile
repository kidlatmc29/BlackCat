Main: Main.o
	g++ -o Main Main.o

Main.o: Main.cpp 
	g++ -c -pedantic -Wall -Werror Main.cpp

clean:
	rm *.o