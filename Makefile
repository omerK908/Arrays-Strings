CC = gcc 
FLAGS = -Wall -g

all: isort txtfind

isort: imain.o isort.o
	$(CC) $(FLAGS) -o isort imain.o isort.o 

imain.o: imain.c isort.h
	$(CC) $(FLAGS) -c imain.c 

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 


txtfind: main.o txtfind.o
	$(CC) $(FLAGS) -o txtfind main.o txtfind.o 

main.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c main.c 

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c

.PHONY: clean all

clean:
	rm -f *.o isort txtfind
