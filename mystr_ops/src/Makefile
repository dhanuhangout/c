IDIR = ../hfiles
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = ../obj

_DEPS = mystrlib.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = string_ops.o mystrlib.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

string_ops: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

# Ref: http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
