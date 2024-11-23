all: build run

# dizi veya bellek
CODE = dizi

build: bin $(CODE)
bin:
	mkdir bin

$(CODE): $(CODE).cpp
	g++ -std=c++11 $(CODE).cpp -o bin/$@

run:
	./bin/$(CODE)
