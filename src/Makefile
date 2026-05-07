output: main.o isogram.o
	gcc main.o isogram.o -o isogram

main.o: main.c
	gcc -c main.c -o main.o

isogram.o: isogram.c isogram.h
	gcc -c isogram.c

clean:
	rm -rf main.o isogram.o isogram

