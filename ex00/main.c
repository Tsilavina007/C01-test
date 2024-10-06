#include <stdio.h>
void ft_ft(int *nbr);

int main(void)
{
	int value = 0;
    int *p1 = &value;


    printf("Valeur de value AVANT de de passer par fonction: %d\n", value);
    ft_ft(p1);
    printf("Valeur de value APRES de de passer par fonction: %d\n", value);
}
