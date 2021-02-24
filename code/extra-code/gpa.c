#include <stdio.h>

int main (void)
{
	float ec, EC, ca, CA, ap, AP, ac, AC, wp, WP, ecl, ECL, apl, APL, acl, ACL, GPA;
	printf ("\nGPA Calculator!\n\n");
	printf ("Calculate your GPA for the first semester.\n");
	printf ("Enter your respective grade in front of each subject.\n\n");
	
	printf ("Electric Circuits: ");
	scanf ("%f", &ec);
	EC = ec * 3.0;
	
	printf ("Calculus: ");
	scanf ("%f", &ca);
	CA = ca * 3.0;
	
	printf ("Applied Physics: ");
	scanf ("%f", &ap);
	AP = ap * 2.0;
	
	printf ("Applied Chemistry: ");
	scanf ("%f", &ac);
	AC = ac * 2.0;
	
	printf ("Workshop Practice: ");
	scanf ("%f", &wp);
	WP = wp * 1.0;
	
	printf ("Electric Circuits Lab: ");
	scanf ("%f", &ecl);
	ECL = ecl * 1.0;
	
	printf ("Applied Physics Lab: ");
	scanf ("%f", &apl);
	APL = apl * 1.0;
	
	printf ("Applied Chemistry Lab: ");
	scanf ("%f", &acl);
	ACL = acl * 1.0;
	
	GPA = (EC + CA + AP + AC + WP + ECL + APL + ACL) / 14.0;
	printf ("\nYour GPA: %f\n", GPA);
	
	return 0;
}