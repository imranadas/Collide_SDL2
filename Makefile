
CFLAGS  = -g -Wall
SRC = $(wildcard code/game/*cpp code/render/*cpp) 
INCLUDES = -I./code/include/


ifeq ($(OS),Windows_NT)
	CC = g++
	SDL_FLAGS = -I include/SDL2/ -L lib/ -lmingw32 -lSDL2main -lSDL2
else
	OS_NAME = $(shell uname)
	ifeq ($(OS_NAME), Linux)
	CC = g++
	SDL_FLAGS = $(shell pkg-config --cflags --libs  sdl2)
	endif
	ifeq ($(OS_NAME), Darwin)
	CC = clang++
	SDL_FLAGS = -I/Library/Frameworks/SDL2.framework/Headers/ -F/Library/Frameworks -framework SDL2
	endif
endif



all : run

run : $(SRC)
	$(CC) $(CFLAGS) $(INCLUDES) -o run $(SRC) "code/main.cpp" $(SDL_FLAGS)

