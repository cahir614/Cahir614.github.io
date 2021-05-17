#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0)

int
main()
{
	char a = 122;
	int c = 2147483647;
	unsigned int d = 4294967295u;
	long e = 9223372036854775807;
	unsigned long f = 18446744073709551615u;

	float g = M_PI;
	double h = M_PI;

	printf("%c\n", a);
	printf("%d\n", c);
	printf("%u\n", d);
	printf("%ld\n", e);
	printf("%lu\n", f);

	printf("%1.6f\n", g);
	printf("%1.15g\n", h);

	return 0;
}
