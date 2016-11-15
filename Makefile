all: pr

pr: triangle.o point.o main.o
	g++ triangle.o main.o point.o -o pr
	
point.o: point.h point.cpp
	g++ -c point.cpp

triangle.o: triangle.cpp triangle.h
	g++ -c triangle.cpp

main.o: main.cpp triangle.h
	g++ -c main.cpp

clean:
	rm -f *.o pr
