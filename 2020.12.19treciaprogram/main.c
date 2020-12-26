#include <stdio.h>
#include <stdlib.h>
#include "funkcijos.h"
int main()
{
    struct Duomenys M[K];
    int g, i = 0, eil;
    char failas[K];
    printf ( "Iveskite failo varda is kurio noresite skaityti: \n");
    scanf ( "%s", failas);
    char txt[4] = ".txt";
    strncat( failas, txt, 4);
    nuskaitymas (failas, M, &eil);
    printf( "Iveskite gyventoju skaiciu: \n");
    scanf ( "%d", &g);
    naujas( M, &g, &eil);
    return 0;
}
