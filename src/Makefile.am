bin_PROGRAMS = wvuhello
wvuhello_SOURCES = main.c maxfunction.c

TESTS = wvutest.sh
EXTRA_DIST = stdin.in

all: wvutest.sh

wvutest.sh: $(srcdir)/stdin.txt
	$(srcdir)/chmod +x wvutest.sh
