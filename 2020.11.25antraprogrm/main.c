#include <stdio.h>
#include <stdlib.h>

void generuoti (int mas[], int n)
{   int const limit = 100;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mas [i*n+j]= rand()%limit;
        }
    }
}
void spausdinti (int mas[], int n)
{for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", mas [i*n+j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int K;
    printf("Iveskite kokio didzio bus generuojami masyvai: \n");
    scanf ("%d", &K);
    srand (time(NULL)); //srand inicializacija
    int *mas, *mas1;
    mas = (int*)calloc(K*K, sizeof(int));
    mas1 = (int*)calloc(K*K, sizeof(int)); //calloc - priskiria atminty tam tikra vieta ir tas reiksmes prilygina nuliui
    generuoti(mas, K); //masyvu generavimo funkcija
    spausdinti(mas, K);
    generuoti(mas1, K);
    spausdinti(mas1, K);
    int nr = 0, nr1 = 0, atimti, n = 1;

    for (int j = 0; j < K; j++){
        for (int i = 0; i < K; i++){
            mas[nr] = mas[nr] + mas1[nr1];
            nr++;
            nr1= nr1 + K ;
        }
        atimti = nr1 - n;
        nr1 -= atimti;
        n++;
    }
    spausdinti (mas, K);
    free (mas);
    free (mas1);
    return 0;
}
