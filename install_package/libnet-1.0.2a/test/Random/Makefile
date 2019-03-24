# Generated automatically from Makefile.in by configure.
#
#   $Id: Makefile.in,v 1.1.1.1 2000/05/25 00:28:49 route Exp $
#
#   Libnet simple testcode makefile
#   Copyright (c) 1998, 1999, 2000 Mike D. Schiffman <mike@infonexus.com>
#   Generated automatically from Makefile.in by configure.

CC          =   gcc
CFLAGS      =   -O2 -funroll-loops -fomit-frame-pointer -Wall
OBJECTS     =   prand_trials.o
DEFINES     +=  -DHAVE_CONFIG_H
LIBS        =   -L../../lib/ -lnet 

.c.o:
	$(CC) $(CFLAGS) $(DEFINES) -c $< -o $@

all:    prand_trials

prand_trials: $(OBJECTS)
	$(CC) prand_trials.o $(LIBS) -o ./prand_trials

clean:
	rm -f *.core prand_trials *.o

distclean: clean
	rm -f Makefile

# EOF
