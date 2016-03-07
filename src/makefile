# TODO: Proper OS checking and handling.
#       Actually, an actual build script would probably be easier to manage.
UNAME := $(shell uname)
ifeq ($(UNAME), Linux)
SDL = -lSDL2 -lSDL2_image
else
SDL = -framework SDL2 -framework SDL2_image
endif

CXX = clang++
SDLLIBS = -Wl,-Bstatic 'sdl-config --static-libs' -Wl,-Bdynamic
# If your compiler is a bit older you may need to change -std=c++11 to -std=c++0x
CXXFLAGS = -Wall -Wno-c++11-extensions -c -std=c++11
LDFLAGS = -Wno-c++11-extensions $(SDL)
SOURCES = main.cpp Game.cpp Entity.cpp Player.cpp DrawComponent.cpp InputComponent.cpp PlayerCommand.cpp PhysicsComponent.cpp PlayerPhysics.cpp
OBJDIR = ../obj
BUILDDIR = ../build
OBJECTS = $(SOURCES:.cpp=.o)
EXE = openspace


all: $(SOURCES) $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(SOURCES) $(LDFLAGS) -o $(BUILDDIR)/$@

debug: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -g -o debug


.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o && rm $(EXE)
