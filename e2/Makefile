all: build run

CODE = e2b

build: bin $(CODE)

bin:
	mkdir bin

$(CODE): $(CODE).cpp
	g++ -std=c++11 $(CODE).cpp -o bin/$@

run:
	./bin/$(CODE)



