all: build run

CODE = e1db

build: $(CODE)

bin:
	mkdir bin

$(CODE): bin $(CODE).cpp
	g++ -std=c++11 $(CODE).cpp -o bin/$@

run:
	./bin/$(CODE)
