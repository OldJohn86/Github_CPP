# Generated automatically from Makefile.in by configure.
#
#   $Id: Makefile.in,v 1.1.1.1 2000/05/25 00:28:49 route Exp $
#
#   Libnet get_mac makefile
#   
#   (c) 1998 - 2001  Mike D. Schiffman <mike@infonexus.com>
#   Generated automatically from Makefile.in by configure.

CC          =   gcc
CFLAGS      =   -O2 -funroll-loops -fomit-frame-pointer -Wall
OBJECTS     =   get_mac.o
DEFINES     +=  -DHAVE_CONFIG_H
LIBS        =   -L../lib/ -lnet 

.c.o:
	$(CC) $(CFLAGS) $(DEFINES) -c $< -o $@

all: 	get_mac

get_mac: $(OBJECTS)
	$(CC) get_mac.o $(LIBS) -lpcap -o ./get_mac

clean:
	rm -f *.core get_mac *.o

distclean: clean
	rm -f Makefile

# EOF
