#include <stdio.h>      /* printf */
#include <float.h>      /* FLT_RADIX */
#include <math.h>       /* scalbn */
#include <conio.h>

int main() {
	double x, hasil;
	long n;

	x = 4.90;
	n = 6L;
	hasil = scalbln(x, n);
	printf("%f * %d^%d = %f\n", x, FLT_RADIX, n, hasil);

	_getch();
	return 0;
}