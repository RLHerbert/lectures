# Makefile for CS 24 Lab05

testlist: testlist.o intlist.o
	g++ -o testlist testlist.o intlist.o

testlist.o: testlist.cpp
	g++ -c -g testlist.cpp

intlist.o: intlist.cpp
	g++ -c -g intlist.cpp

clean:
	rm -f testlist testlist.o intlist.o
