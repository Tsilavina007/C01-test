#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	
	printf("Valeur de a AVANT de de passer par fonction: %d\n", a);
	printf("Valeur de b AVANT de de passer par fonction: %d\n", b);
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("\nValeur de a APRES de de passer par fonction: %d\n", a);
	printf("Valeur de b APRES de de passer par fonction: %d\n", b);
}