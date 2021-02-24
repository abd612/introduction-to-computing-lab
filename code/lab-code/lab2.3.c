#include <stdio.h>

int main()

{
	int R = 5;
	float PI = 3.14;
	
	float A, V;
	
	A = 4 * PI * R * R;
	printf ("The area of sphere is %f\n", A);
	
	V = 4.0 / 3.0 * PI * R * R * R;
	printf("The volume of sphere is %f\n", V);
	
	return 0;
}
