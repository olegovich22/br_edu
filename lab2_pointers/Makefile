CC=gcc
CFLAGS=-O2

TARGET=game
SOURCE=main players

OBJ:=$(addsuffix .o, $(SOURCE))

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o $(TARGET)