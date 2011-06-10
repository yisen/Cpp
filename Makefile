TARGET = cpp

FLAGS = -g3 -O0 -Wall

all: $(TARGET)

clean:
	@rm *.o $(TARGET)

$(TARGET): cpp.o
	g++ $(FLAGS) -o $(TARGET) cpp.o

cpp.o: cpp.cpp
	g++ $(FLAGS) -c cpp.cpp
