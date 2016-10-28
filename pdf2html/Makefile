CC = gcc
CFLAGS = -03 -Wall -funroll-loops
LDLIBS = -lpng

COMPILE = $(CC) $(CFLAGS) $@

all: pbm2png pbm2eps9

pbm2png: pbm2png.c
	 $(COMPILE) -s -o $(LDLIBS) pbm2png.c

pbm2eps9: pbm2eps9.c
	  $(COMPILE) -c -o pbm2eps9.c

printer: printer.c
	 $(COMPILE) -c -o printer.c

pbm2eps9: pbm2eps9.o printer.o
	  $(CC) -s -o pbm2eps9.o printer.o

clean:
	rm -f printer.o 
	rm -f pbm2eps9.o
	rm -f pbm2eps9
	rm -f pbm2png
	rm -f printer
