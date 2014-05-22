SOURCES   := $(wildcard *.cpp platforms/*.cpp services/*.cpp)
OBJECTS   := $(patsubst %.cpp, %.o, $(SOURCES))
TARGET    := centro

$(TARGET): $(OBJECTS)
	$(CXX) $^ -o $@ $(LDFLAGS)

$(OBJECTS): %.o : %.cpp
	$(CXX) -c $< -o $@ $(CFLAGS)

run: $(TARGET)
	./$(TARGET)

test: $(TARGET)
	@echo "Hello world!: This is an example notification." > expected.txt
	./$(TARGET) --test > actual.txt
	diff expected.txt actual.txt
	@rm expected.txt actual.txt

clean:
	rm -f $(OBJECTS) $(TARGET) expected.txt actual.txt
