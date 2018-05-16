// Fábio Souto 
// MATRÍCULA: 11621EAU019

#include <stdio.h>

void bin_dec (char bin[])
{
	int i = 0, dec = 0;
	while(bin[i]) 
	{
		dec = dec*2 + (bin[i] - '0');
		i++;
	}
	printf ("\nO numero digitado em decimal: %d", dec);
}

void bin_hex (char bin[])
{
	int i = 0, dec = 0;
	while(bin[i])
	{
		dec = dec*2 + (bin[i] - '0');
		i++;
	}
	printf ("\nO numero digitado em hexadecimal: %x", dec);
}

int main ()
{
	int op, dec, hex, oct, cont;
	char bin[256];
	printf(	"\nCONVERSOR DE BASES NUMERICAS:"
	"\n1. Binario para Decimal"
	"\n2. Binario para Hexadecimal"
	"\n3. Hexadecimal para Decimal"
	"\n4. Hexadecimal para Binário"
	"\n5. Decimal para Binario"
	"\n6. Decimal para Hexadecimal"
	"\n7. Octal para Decimal"
	"\n8. Decimal para Octal\n\n\n"
	"Escolha a opcao desejada:");
	scanf ("%d", &op); 
	getchar();
	
	
	if (op == 1) 
	{
		printf ("\nUm numero em base binaria:");
		scanf ("%s", &bin);
		getchar();
		bin_dec (bin);
	}
	
	else if (op == 2) 
	{
		printf ("\nUm numero em base binaria:");
		scanf ("%s", &bin);
		getchar();
		bin_hex (bin);
	}
	
	else if (op == 3) 
	{
		printf ("\nUm numero em base hexadecimal:");
		scanf ("%x", &hex);
		getchar();
		printf ("\nDecimal: %d", hex);
	}
	
	else if (op == 4)
	{
		printf ("\nHexadecimal:");
		scanf ("%x", &hex);
		getchar();
		printf ("\nNumero auxiliar: %d", hex);
		printf ("\n\nDigite o numero acima: ");
		scanf ("%d", &dec);
		getchar();
		itoa(dec,bin,2);
		printf ("\n%d Binario: %s\n", dec,bin);
	}

	
	else if (op == 5) 
	{
		printf ("\nUm numero em base decimal:");
		scanf ("%d", &dec);
		getchar();
		itoa(dec,bin,2);
		printf ("\n%d Binario: %s\n", dec,bin);
	}
	
	else if (op == 6) 
	{
		printf ("\nDecimal:");
		scanf ("%d", &dec);
		getchar();
		printf ("\nHexadecimal: %x", dec);
	}
	
	else if (op == 7)
	{
		printf ("\nUm numero em base octal:");
		scanf ("%o", &oct);
		getchar();
		printf ("\nDecimal: %d", oct);
	}
	
	else if (op == 8) 
	{ 
		printf ("\nUm numero em base decimal:");
		scanf ("%d", &dec);
		getchar();
		printf ("\nOctal: %o", dec);
	}
	
	else
	{
		printf ("\nOpcao invalida.");
	}
	return 0;
}
