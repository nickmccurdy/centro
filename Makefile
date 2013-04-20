CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`

all: centro

centro.o: centro.cpp
	$(CC) -c centro.cpp -o centro.o $(CFLAGS)

centro: centro.o
	$(CC) centro.o -o centro $(LDFLAGS)

clean:
	rm *.o centro
