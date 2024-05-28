CC = gcc
BIN = ./bin
OBJ = ./obj
INC = ./include
SRC = ./src

CFLAGS = -Wall -g -o
ASSEMBLYFLAGS = -c

duplicateNumbers: $(OBJ)/duplicateNumbers.o
	$(CC) $(CFLAGS) $(BIN)/duplicateNumber $(OBJ)/duplicateNumbers.o

$(OBJ)/duplicateNumbers.o: $(SRC)/duplicateNumbers.c
	$(CC) $(ASSEMBLYFLAGS) $(SRC)/duplicateNumbers.c
	mv *.o $(OBJ)/

clean:	
	rm $(BIN)/*
