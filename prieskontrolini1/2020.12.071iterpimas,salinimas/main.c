#include <stdio.h>
#include <stdlib.h>
void Iterpti(int M[], int *n, int elementas, int k)
{
    *n++;
    for (int i = (*n)-1; i >k; i--)
        M[i] = M[i-1];
    M[k]= elementas;
}
void salinti (int M[], int *n, int k)
{
    for (int i = k; i < (*n)-1; i++)
        M[i] = M[i+1];
    *n--;
}

int main()
{   int i;
    int *mas = calloc(10, sizeof(int));
    int size = 10;
    for (i = 0; i < size;i++)
    {
        if (i == 0)
            mas[i] = 1;
        if (i == 3)
            mas[i] = 2;
        if (i == 9)
            mas[i] = 3;
    }
    salinti (mas,&size,2);
    Iterpti (mas,&size,4,6);
    for (i = 0; i < size;i++)
        printf ("%d", mas[i]);
    free (mas);
    return 0;
}
