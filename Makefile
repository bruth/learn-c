CFLAGS=-Wall -g

all: ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9

clean:
	rm -r out

ex1:
	$(CC) src/ex1.c -o out/ex1

ex3:
	$(CC) src/ex3.c -o out/ex3

ex4:
	$(CC) src/ex4.c -o out/ex4

ex5:
	$(CC) src/ex5.c -o out/ex5

ex6:
	$(CC) src/ex6.c -o out/ex6

ex7:
	$(CC) src/ex7.c -o out/ex7

ex8:
	$(CC) src/ex8.c -o out/ex8

ex9:
	$(CC) src/ex9.c -o out/ex9
