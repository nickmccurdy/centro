CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`

all: centro

%.o: %.cpp %.h
	$(CC) -c $*.cpp -o $*.o $(CFLAGS)

centro: libnotify_platform.o notification_platform.o centro.o
	$(CC) $^ -o centro $(LDFLAGS)

clean:
	rm *.o centro
