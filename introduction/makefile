libsquare.so : square.cpp
	g++ -shared -o libsquare.so square.cpp

all : libsquare.so
	g++ -o executable.exe main.cpp -ldl

clean : 
	rm -rf executable.exe
	rm -rf libsquare.so