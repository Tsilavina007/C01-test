#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	
	printf("Valeur de a AVANT de de passer par fonction: %d\n", a);
	printf("Valeur de b AVANT de de passer par fonction: %d\n", b);
	printf("Valeur de div AVANT de de passer par fonction: %d\n", div);
	printf("Valeur de mod AVANT de de passer par fonction: %d\n", mod);
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("\nValeur de a APRES de de passer par fonction: %d\n", a);
	printf("Valeur de b APRES de de passer par fonction: %d\n", b);
	printf("Valeur de div APRES de de passer par fonction: %d\n", div);
	printf("Valeur de mod APRES de de passer par fonction: %d\n", mod);
}
