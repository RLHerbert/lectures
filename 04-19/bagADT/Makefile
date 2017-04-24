CXXFLAGS = --std=c++11 -g -Wall

all: bag1 

bag1: bag1.o bag_demo.o
	g++ $(CXXFLAGS) $^ -o $@

bag1.o: bag1.cxx 
	g++ $(CXXFLAGS) $^ -c

bag_demo.o: bag_demo.cxx
	g++ $(CXXFLAGS) $^ -c


clean:
	rm *.o bag1 
