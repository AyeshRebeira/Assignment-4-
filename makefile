CC=g++
EXE=prog4
OBJECTS=main.o weight.o
CFLAGS=-Wall -fno-diagnostics-color

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)

main.o:		main.cpp
		$(CC) -c $(CFLAGS) main.cpp

kiloGrams.o:	weight.cpp
		$(CC) $(CFLAGS) -c weight.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~
