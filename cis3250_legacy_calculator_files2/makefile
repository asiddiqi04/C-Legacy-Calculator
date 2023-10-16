HFILES = conversions.h factorial.h matrices.h powerfunction.h grade.h

assignment2: cis3250-legacy-calculator.o
	gcc -std=c99 -Wall cis3250-legacy-calculator.o -g -o assignment2

cis3250-legacy-calculator.o: cis3250-legacy-calculator.c $(HFILES)
	gcc -std=c99 -Wall -g -c cis3250-legacy-calculator.c

clean:
	rm *.o assignment2

