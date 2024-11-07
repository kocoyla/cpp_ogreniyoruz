all: build run

CODE = dizi2

build: bin $(CODE)
bin:
	mkdir bin

$(CODE): $(CODE).cpp
	g++ -std=c++11 $(CODE).cpp -o bin/$@

run:
	./bin/$(CODE)
