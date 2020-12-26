#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuoti (int mas[], int n)
{   int const limit = 20;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mas [i*n+j]= rand()%limit-10;
        }
    }
}
void spausdinti (int mas[], int n)
{   for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%4d", mas [i*n+j]);
        }
        printf("\n");
    }
    printf("\n");
}
void pakeisti(int mas[], int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((mas[i*n+j]<=4) && (mas[i*n+j]>=0))
                mas[i*n+j] = 2;
            else
                mas[i*n+j] = 1;
        }
    }
}
int main()
{
    int N;
    printf("Iveskite dydi N: \n");
    scanf ("%d", &N);
    srand (time(NULL)); //srand inicializacija
    int mas[N][N];
    generuoti (mas, N);
    printf ("Pradinis: \n");
    spausdinti (mas, N);
    printf ("Rezultatas: \n");
    pakeisti (mas, N);
    spausdinti (mas, N);
    return 0;
}
