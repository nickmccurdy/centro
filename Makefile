CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`

all: centro

centro.o: centro.cpp
	$(CC) -c centro.cpp -o centro.o $(CFLAGS)

notification_platform.o: notification_platform.cpp
	$(CC) -c notification_platform.cpp -o notification_platform.o $(CFLAGS)

centro: centro.o notification_platform.o
	$(CC) centro.o notification_platform.o -o centro $(LDFLAGS)

clean:
	rm *.o centro
