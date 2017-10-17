CC = gcc

CFLAGS = -Iinclude 

BINDIR = bin/
SRCDIR = src/

all:
	mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(SRCDIR)cis3250-legacy-calculator.c $(SRCDIR)matrices.c $(SRCDIR)factorial.c $(SRCDIR)conversions.c $(SRCDIR)powerfunction.c -o bin/output -lm

clean:
	rm $(BINDIR)output

doxygen:
	doxygen

cppcheck:
	cppcheck --enable=all --language=c --std=c99 --inconclusive --suppress=missingInclude ./src/*.c -i include