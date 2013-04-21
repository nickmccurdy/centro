CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`

all: centro

centro.o: centro.cpp centro.h
	$(CC) -c centro.cpp -o centro.o $(CFLAGS)

notification_platform.o: notification_platform.cpp notification_platform.h
	$(CC) -c notification_platform.cpp -o notification_platform.o $(CFLAGS)

libnotify_platform.o: libnotify_platform.cpp libnotify_platform.h
	$(CC) -c libnotify_platform.cpp -o libnotify_platform.o $(CFLAGS)

centro: centro.o notification_platform.o libnotify_platform.o
	$(CC) centro.o notification_platform.o -o centro $(LDFLAGS)

clean:
	rm *.o centro
