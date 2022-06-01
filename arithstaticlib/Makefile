cc = aarch64-none-linux-gnu-gcc

libarith.a: add.o sub.o
	ar crv libarith.a add.o sub.o

arithprog : add.o main.o sub.o
	$(cc) -o arithprog add.o main.o sub.o

add.o : add.c
	$(cc) -c -o add.o add.c

sub.o : sub.c
	$(cc) -c -o sub.o sub.c

main.o : main.c
	$(cc) -c -o main.o main.c

clean:
	rm -f add.o main.o sub.o arithprog libarith.a