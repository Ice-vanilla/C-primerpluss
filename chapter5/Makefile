FILES= 1 2 3 4 5 6 7 8  9 10
OBJS= 1.o 2.o 3.o 4.o 5.o 6.o 7.o 8.o 9.o 10.o

all: $(FILES)

$(FILES): $(OBJS)
	g++ $@.o -o $@

$(OBJS):

clean:
	rm -f $(FILES) *.o
