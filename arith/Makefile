cc = aarch64-none-linux-gnu-gcc

arithprog : add.o main.o
	$(cc) -o arithprog add.o main.o

add.o : add.c
	$(cc) -c -o add.o add.c

main.o : main.c
	$(cc) -c -o main.o main.c

clean:
	rm -f add.o main.o arithprog