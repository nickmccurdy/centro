CC        = clang++
CFLAGS    = `pkg-config --cflags libnotifymm-1.0`
LDFLAGS   = `pkg-config --libs libnotifymm-1.0`
CONFIG    += link_pkgconfig
PKGCONFIG += libnotify

SOURCES   = $(wildcard *.cpp platforms/*.cpp services/*.cpp)
OBJECTS   = $(patsubst %.cpp, %.o, $(SOURCES))
TARGET    = centro

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

$(OBJECTS): %.o : %.cpp
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJECTS) $(TARGET)
