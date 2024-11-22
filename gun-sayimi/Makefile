hedef: derle calistir

derle:
	g++ -std=c++23 ana.cpp -o prog

calistir:
	./prog 1969 09 02

test:
	./prog 1969 09 02 > test-ciktisi
	diff beklenen-cikti test-ciktisi
	rm -rf test-ciktisi

