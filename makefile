all: ./a.out

compRun:
	g++ -std=c++11 main.cpp functions.cpp functions.h -o r.out


run: clean compRun; ./r.out

clean:
	rm -f *.out
