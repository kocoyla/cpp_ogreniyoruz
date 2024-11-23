hedef: derle calistir

derle: ana.o yardimci.o dogrusal.o
	g++ -std=c++23 ana.o yardimci.o dogrusal.o -o prog

ana.o: ana.cpp dogrusal.h
	g++ -c -std=c++23 ana.cpp

yardimci.o: yardimci.cpp dogrusal.h
	g++ -c -std=c++23 yardimci.cpp

dogrusal.o: dogrusal.cpp dogrusal.h
	g++ -c -std=c++23 dogrusal.cpp

derleBağla:
	g++ -std=c++23 ana.cpp yardimci.cpp -o prog

calistir:
	./prog 5

test:   derle
	./prog 4 > test-ciktisi
	diff beklenen-cikti test-ciktisi
	rm -rf test-ciktisi

temizle:
	rm -rf prog test-ciktisi

