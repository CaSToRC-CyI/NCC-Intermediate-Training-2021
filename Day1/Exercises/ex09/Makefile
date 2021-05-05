CC=mpicc
CFLAGS=-fopenmp
LDFLAGS=-fopenmp
target=ex09

%.o: %.c
	$(CC) $(CFLAGS) -c $<

$(target): $(target).o
	$(CC) -o $@ $< $(LDFLAGS)

clean:
	$(RM) $(target).o
