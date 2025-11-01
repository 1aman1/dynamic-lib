libsquare.so : square.cpp
	g++ -shared square.cpp -o libsquare.so

all : main.cpp libsquare.so
	g++ main.cpp -ldl -o executable.exe 

clean :
	rm -rf libsquare.so
	rm -rf executable.exe