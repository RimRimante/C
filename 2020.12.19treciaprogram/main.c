#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funkcijos.h"
int main()
{
    int g, i = 0;
    char failas[100];
    printf ( "Iveskite failo varda is kurio noresite skaityti: \n");
    scanf ( "%s", failas);
    char txt[4] = ".txt";
    strncat( failas, txt, 4);
    int eil;
    eil = Eilutes (failas);
    struct Duomenys *M = malloc(eil*(sizeof(struct Duomenys)));
    nuskaitymas (failas, eil, M);
    printf( "Iveskite gyventoju skaiciu: \n");
    scanf ( "%d", &g);
    naujas( M, &g, eil);
    free (M);
    return 0;

}
