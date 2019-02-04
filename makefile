proj1 : sf3560hw1main.o sf3560hw1lib.a
	g++ sf3560hw1main.o ./lib/sf3560hw1lib.a -o ./bin/proj1

sf3560hw1main.o : ./src/sf3560hw1main.cc
	g++ -I ./include/ -c src/sf3560hw1main.cc

sf3560hw1lib.a : sf3560hw1lib.o
	ar rcv ./lib/sf3560hw1lib.a sf3560hw1lib.o

sf3560hw1lib.o : ./src/sf3560hw1lib.cc
	g++ -I ./include/ -c src/sf3560hw1lib.cc

clean :
	rm *.o

