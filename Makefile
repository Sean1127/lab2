main: bmi.o main.o
	g++ -o go main.o bmi.o

bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

main.o: main.cpp bmi.h
	g++ -c main.cpp

clean:
	rm bmi *.o
