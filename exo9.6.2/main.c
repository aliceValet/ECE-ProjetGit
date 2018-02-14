#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("Veuillez rentrer 3 entiers:\n");
    scanf("%d %d %d", &i,&j,&k);
    if(i==j && j==k)
    {
        printf("\nVous avez rentre 1 valeur distincte");
    }
    else if (i==j || j==k || i==k)
    {
        printf("\nVous avez rentre 2 valeurs distinctes");
    }
    else
    {
        printf("\nVous avez rentre 3 valeurs distinctes");
    }
    return 0;
}
