.PHONY:all clean
CC=g++
CFLAGS=-Wall -Werror
SD=/home/timowka0304/geometry_new/src/
OD=/home/timowka0304/geometry_new/build/
EXECUTABLE=/home/timowka0304/geometry_new/bin/geometry.exe
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)main.o $(OD)perimetr.o $(OD)square.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)perimetr.o $(OD)square.o -lm
$(OD)main.o: $(SD)main.cpp
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.cpp -lm
$(OD)perimetr.o: $(SD)perimetr.cpp
	$(CC) $(CFLAGS) -c -o $(OD)perimetr.o $(SD)perimetr.cpp -lm
$(OD)square.o: $(SD)square.cpp
	$(CC) $(CFLAGS) -c -o $(OD)square.o $(SD)square.cpp -lm
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o
