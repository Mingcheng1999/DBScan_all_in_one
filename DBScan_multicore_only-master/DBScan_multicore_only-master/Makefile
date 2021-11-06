#SRCS = $(wildcard *.cpp src/*.cpp src/optimized/*.cpp)
SRCS = $(wildcard *.cpp src/optimized/*.cpp)
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -std=c++17 -fopenmp
INCLUDES = -I./include


EXEC = ./build/DBS
all:
	g++ $(SRCS) $(CFLAGS) $(INCLUDES) $(LIBS) -o$(EXEC)
clean:
	rm -f $(OBJS) $(EXEC)
