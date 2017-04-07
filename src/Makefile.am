bin_PROGRAMS = wvuhello
wvuhello_SOURCES = main.c maxfunction.c

TESTS = wvutest.sh
EXTRA_DIST = stdin.in
#CLEANFILES = $(TESTS)

all: wvutest.sh

wvutest.sh: $(srcdir)/stdin.in
	chmod +x wvutest.sh
