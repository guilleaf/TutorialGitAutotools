bin_PROGRAMS = wvuhello
wvuhello_SOURCES = main.c maxfunction.c
include_HEADERS = maxfunction.h

TESTS = wvutest.sh
EXTRA_DIST = stdin.txt wvutest.sh

all: wvutest.sh

wvutest.sh: ${srcdir}/stdin.txt
	chmod +x wvutest.sh
