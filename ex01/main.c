#include <stdio.h>
void ft_ft(int *nbr);

void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int value = 0;
    int *p1 = &value;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;

    printf("Valeur de value AVANT de de passer par fonction: %d\n", value);
    ft_ultimate_ft(p9);
    printf("Valeur de value APRES de de passer par fonction: %d\n", value);

    return 0;
}
