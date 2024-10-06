#include <stdio.h>
void ft_putstr(char *str);

int main(void)
{
	char	str[] = "Hello 42 World";
	
	printf("Valeur de str AVANT de de passer par fonction: '%s'\n", str);
	
	printf("\nresultat de ft_putstr(str) : \n");
	ft_putstr(str);
	printf("\n");

}