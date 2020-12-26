#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void spausdinti (int *p, int n){
    int i, j;
    for (i = 0;i< n; i++){
        for (j=0;j <n;j++ ){
            printf ("%5d",*((p+i*n)+j));
        }
        printf ("\n");
    }
}
int main()
{
    int n,i,j;
    printf ("Iveskite kvadratinio dvimacio masyvo dydi N: ");
    scanf ("%d", &n);
    int mas[n][n];
    time_t t;
    srand((unsigned)time(&t));
    for (i=0; i <n;i++){
        for (j=0;j<n;j++){
            mas[i][j]=rand()%100;
            //printf("%5d",mas[i][j]);
        }
    }
    spausdinti((int*)mas,n);
    return 0;
}
