output: main.o sha256.o
	g++ -o output main.o sha256.o

main.o: main.cpp
	g++ -c main.cpp

sha256.o: sha256.cpp
	g++ -c sha256.cpp

all: run

run: output
	./output

clean:
	rm *.o output