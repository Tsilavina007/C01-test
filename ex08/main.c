#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int	tab1[] = {2,3,5,1,6};
	int	tab2[] = {2,3,5,7,1,6};
	char str_tab1[] = "{2,3,5,1,6}";
	char str_tab2[] = "{2,3,5,7,1,6}";
	int i = 0;
	int j = 0;

	printf("\nValeur de tab1 avec size = 5 AVANT de passer par fonction: '%s'\n", str_tab1);
	ft_sort_int_tab(tab1, 5);
	printf("Valeur de tab1 avec size = 5 APRES de passer par fonction: {");
	while (i < 5) {
		if (j == 4) 
			printf("%d", tab1[j]);
		else
			printf("%d,", tab1[i]);
		i++;
	}
	printf("}\n");
	printf("\nValeur de tab2 avec size = 6 AVANT de passer par fonction: '%s'\n", str_tab2);
	ft_sort_int_tab(tab2, 6);
	printf("Valeur de tab2 avec size = 6 APRES de passer par fonction: {");
	while (j < 6) {
		if (j == 5) 
			printf("%d", tab2[j]);
		else
			printf("%d,", tab2[j]);
		j++;
	}
	printf("}\n\n");

}