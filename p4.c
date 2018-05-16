
// Fábio Souto 
// MATRÍCULA: 11621EAU019


#include <stdio.h>

int main() 
{
	int cres = 0, i;
	char n[256];

	printf ("Digite um numero: ");
	scanf ("%s", &n);
	getchar ();
	
	for (i=0; n[i] != '\0'; i++)
	{
		if (n[i] >=48 && n[i] <= 57)
		{
			n[i] = n[i] - '0';
			cres = cres*10 + n[i];
		}
	}
	
	printf ("\nO numero digitado: %d", cres);
	return 0;
}
