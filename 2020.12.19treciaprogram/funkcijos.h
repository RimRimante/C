#ifndef FUNKCIJOS_H_INCLUDED
#define FUNKCIJOS_H_INCLUDED
#include "funkcijos.c"
//cia reikia funkcijos.c funkciju pavadinimu
int Eilutes (char *filename);
void nuskaitymas (char *filename,int eil, struct Duomenys M[]);
void naujas(struct Duomenys M[], int *g, int eil);

#endif // FUNKCIJOS_H_INCLUDED
