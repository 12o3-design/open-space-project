all:
	cd src && make

clean:
	rm build/openspace && cd src && rm *.o
