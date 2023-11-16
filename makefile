run: build
	./main
	rm ./main

build:
	clang++ -o main main.cpp string.cpp utils.cpp
	