CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`

SOURCES   = $(wildcard src/*.cpp src/platforms/*.cpp src/services/*.cpp)
OBJECTS   = $(patsubst src/%.cpp, bin/%.o, $(SOURCES))
TARGET    = bin/centro

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

$(OBJECTS): bin/%.o : src/%.cpp
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJECTS) $(TARGET)
