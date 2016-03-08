main: Book.o Periodic.o Video.o Film.o Media.o main.o SearchEngine.o
	g++ -g Book.o Periodic.o Video.o Film.o Media.o main.o SearchEngine.o -o main

main.o: main.cpp SearchEngine.h Media.h Book.h Video.h Periodic.h Film.h
	g++ -g -c main.cpp

SearchEngine.o: SearchEngine.cpp SearchEngine.h
	g++ -g -c  SearchEngine.cpp

Media.o: Media.cpp Media.h
	g++ -g -c Media.cpp

Book.o: Book.cpp Book.h
	g++ -g -c Book.cpp

Periodic.o: Periodic.cpp Periodic.h
	g++ -g -c Periodic.cpp

Video.o: Video.cpp Video.h
	g++ -g -c Video.cpp

Film.o: Film.cpp Film.h
	g++ -g -c Film.cpp

clean:
	rm -f *.o lib_test
