all:
	cd src && make

clean:
	rm bin/openspace && cd src && rm *.o
