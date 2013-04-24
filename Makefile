CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`

TARGET    = centro
OBJECTS   = $(patsubst %.cpp, %.o, $(wildcard *.cpp platforms/*.cpp services/*.cpp))

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.cpp %.h
	$(CC) -c $*.cpp -o $*.o $(CFLAGS)

clean:
	rm -f $(OBJECTS) $(TARGET)
