CC=mpicc
CFLAGS=-fopenmp
LDFLAGS=-fopenmp
target=ex10

%.o: %.c
	$(CC) $(CFLAGS) -c $<

$(target): $(target).o
	$(CC) -o $@ $< $(LDFLAGS)

clean:
	$(RM) $(target).o
