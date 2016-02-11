CXX = clang++
SDL = -lSDL2 -lSDL2_image
SDLLIBS = -Wl,-Bstatic 'sdl-config --static-libs' -Wl,-Bdynamic
# If your compiler is a bit older you may need to change -std=c++11 to -std=c++0x
CXXFLAGS = -Wall -Wno-c++11-extensions -c -std=c++11
LDFLAGS = -Wno-c++11-extensions $(SDL)
SOURCES = main.cpp Game.cpp Entity.cpp Player.cpp DrawComponent.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXE = openspace


all: $(SOURCES) $(EXE)

drawtest:
	$(CXX) $(CXXFLAGS) RenderTest.cpp DrawComponent.cpp $(SDL) -o drawtest

$(EXE): $(OBJECTS)
	$(CXX) $(SOURCES) $(LDFLAGS) -o $@

debug: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -g -o debug


.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o && rm $(EXE)

