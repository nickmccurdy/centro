CXX        = clang++

SOURCES   = $(wildcard *.cpp platforms/*.cpp services/*.cpp)
OBJECTS   = $(patsubst %.cpp, %.o, $(SOURCES))
TARGET    = centro

$(TARGET): $(OBJECTS)
	$(CXX) $^ -o $@ $(LDFLAGS)

$(OBJECTS): %.o : %.cpp
	$(CXX) -c $< -o $@ $(CFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
