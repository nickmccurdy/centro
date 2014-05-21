CC        = clang++

SOURCES   = $(wildcard *.cpp platforms/*.cpp services/*.cpp)
OBJECTS   = $(patsubst %.cpp, %.o, $(SOURCES))
TARGET    = centro

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

$(OBJECTS): %.o : %.cpp
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJECTS) $(TARGET)
