#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 5;
	
	printf("Valeur de a AVANT de de passer par fonction: %d\n", num1);
	printf("Valeur de b AVANT de de passer par fonction: %d\n", num2);
	ft_swap(&num1, &num2);
	printf("\nValeur de a APRES de de passer par fonction: %d\n", num1);
	printf("Valeur de b APRES de de passer par fonction: %d\n", num2);
	return (0);
}
