#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{
	char	str[] = "Hello 42 World";
	
	printf("\nValeur de str AVANT de passer par fonction: '%s'\n", str);
	
	printf("\nresultat de ft_strlen(str) : %d\n", ft_strlen(str));
	printf("\n");

}