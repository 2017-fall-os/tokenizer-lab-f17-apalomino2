all: test

clean:
	rm -f *.o test 
clear:
	rm *~ *#*#
demo:
	./test
test: mytoc.o test.o utility.o

test.o: test.c mytoc.h utility.h

mytoc.o: mytoc.c mytoc.h

utility.o: utility.c utility.h
