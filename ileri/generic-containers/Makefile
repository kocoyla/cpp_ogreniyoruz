all: build run

# dizi veya bellek veya dizin
CODE = dizin

build: bin $(CODE)
bin:
	mkdir bin

$(CODE): $(CODE).cpp
	g++ -std=c++23 $(CODE).cpp -o bin/$@

run:
	./bin/$(CODE)

test:
	bin/$(CODE) > test.out
	diff $(CODE)_golden.out test.out

