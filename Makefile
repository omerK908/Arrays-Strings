CC = gcc
FLAGS = -Wall -g

all: isort textfind

isort: imain.o isort.o
	$(CC) $(FLAGS) -o isort imain.o isort.o 

imain.o: imain.c isort.h
	$(CC) $(FLAGS) -c imain.c 

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 


textfind: main.o textfind.o
	$(CC) $(FLAGS) -o textfind main.o textfind.o 

main.o: textfind.c textfind.h
	$(CC) $(FLAGS) -c main.c 

textfind.o: textfind.c textfind.h
	$(CC) $(FLAGS) -c textfind.c

.PHONY: clean all

clean:
	rm -f *.o isort textfind