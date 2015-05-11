all: skiplist

skiplist: skiplist.o testcase.o
	gcc -o skiplist skiplist.o testcase.o

.c.o:
	gcc  -c -Wall $<
clean:
	rm -f *.o *~
	rm -f skiplist core
