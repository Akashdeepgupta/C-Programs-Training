#  ./bin/calculator: ./obj/calculator.o ./obj/calculator_function.o 
#	gcc -Wall -g -o ./bin/calculator ./obj/calculator.o ./obj/calculator_function.o  

# ./obj/calculator.o: ./src/calculator.c 
#	gcc -c -I ./include ./src/calculator.c
#	mv *.o ./obj

# ./obj/calculator_function.o: ./src/calculator_function.c
#	gcc -c -I ./include ./src/calculator_function.c
#	mv *.o ./obj
#clean:
#	rm ./obj/*.o
#	rm ./bin/calculator
#


CC = gcc
SRC = ./src
BIN = ./bin
OBJ = ./obj
INC = ./include

CFLAGS = -Wall -g -o
IFLAGS = -I $(INC)
LDFLAGS = -c


$(BIN)/calculator: $(OBJ)/calculator.o $(OBJ)/calculator_function.o
	$(CC) $(CFLAGS) $(BIN)/calculator $(OBJ)/calculator.o $(OBJ)/calculator_function.o

$(OBJ)/calculator.o: $(SRC)/calculator.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/calculator.c
	mv *.o $(OBJ)

$(OBJ)/calculator_function.o: $(SRC)/calculator_function.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/calculator_function.c
	mv *.o $(OBJ)
clean:
	rm $(OBJ)/*.o
	rm $(BIN)/calculator
