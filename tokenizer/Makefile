all: test

clean:
	rm -f *.o test 
clear:
	rm *~ *#*#
demo:
	./test
test: mytoc.o test.o

test.o: test.c mytoc.h string.h

mytoc.o: mytoc.c mytoc.h

string.o: string.c string.h
