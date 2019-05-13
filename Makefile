.PHONY:all clean
CC=gcc
CFLAGS=-Wall -Werror
SD=src/
OD=build/
EXECUTABLE=bin/geometry.exe
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)main.o $(OD)perimetr.o $(OD)square.o $(OD)cross.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)perimetr.o $(OD)square.o $(OD)cross.o -lm
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c -lm
$(OD)perimetr.o: $(SD)perimetr.c
	$(CC) $(CFLAGS) -c -o $(OD)perimetr.o $(SD)perimetr.c -lm
$(OD)square.o: $(SD)square.c
	$(CC) $(CFLAGS) -c -o $(OD)square.o $(SD)square.c -lm
$(OD)cross.o: $(SD)cross.c
	$(CC) $(CFLAGS) -c -o $(OD)cross.o $(SD)cross.c -lm
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o
