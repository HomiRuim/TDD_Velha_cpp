CXX = g++
CXXFLAGS = -std=c++14 -Wall -DSIGSTKSZ=16384 -I.
LDFLAGS = -lgtest -lgtest_main -pthread
GCOVFLAGS = -fprofile-arcs -ftest-coverage

all: testa_velha

testa_velha: velha.o testa_velha.o
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

velha.o: velha.cpp velha.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

testa_velha.o: testa_velha.cpp velha.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

compile: testa_velha

test: testa_velha
	./testa_velha

cpplint:
	cpplint --exclude=catch.hpp *.cpp *.hpp

gcov: testa_velha
	$(CXX) $(CXXFLAGS) $(GCOVFLAGS) -c velha.cpp -o velha.o
	$(CXX) $(CXXFLAGS) $(GCOVFLAGS) velha.o testa_velha.o -o testa_velha $(LDFLAGS)
	./testa_velha
	gcov velha.cpp testa_velha.cpp

debug: testa_velha
	gdb testa_velha

cppcheck:
	cppcheck --enable=warning --std=c++14 *.cpp *.hpp

valgrind: testa_velha
	valgrind --leak-check=yes --log-file=valgrind.rpt ./testa_velha

clean:
	rm -rf *.o *.exe *.gc* testa_velha testa_velha.o velha.o
