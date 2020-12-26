#ifndef funkcijosc
#define funkcijosc
#include <stdio.h>
#include <stdlib.h>
#define a 100
const int K = 100;
struct Duomenys{
    char miestas[a];
    char salis[a];
    int gyvent;
};
void nuskaitymas (char *filename, struct Duomenys M[], int *eil)
{
    int i =0;
    FILE *fp;
    fp = fopen( filename,"r");
    if ((fp = fopen( filename,"r")) == NULL){
        printf( "nepavyko atidaryti  %s srauto. \n", filename);
        return 0;}
    else{
        printf(" Jusu failas atidarytas:\n");
        while(1){
            if ( feof(fp)) break;
            else {
                fscanf (fp, "%s", M[i].miestas);
                if (( strlen( M[i].miestas )) > 1)
                {
                fscanf( fp, "%s %d", M[i].salis, &M[i].gyvent);
                printf( "%10s%10s%10d\n", M[i].miestas, M[i].salis, M[i].gyvent);
                i++;
                }
        }}}
        *eil = i;
    fclose(fp);
}
void naujas(struct Duomenys M[], int *g, int *eil){
    int i;
    for ( i = 0; i < *eil; i++)
    {
        if (M[i].gyvent > *g)
         {
            FILE *fptr = NULL;
            fptr = fopen(M[i].salis, "w+");
            if (fptr == NULL)
            {
                printf("Nepavyko sukurti failo.\n");
                return 0;
            }
            printf ( "Sukurtas naujas failas pavadinimu %s \n", M[i].salis);
            fprintf( fptr, "%d gyventoju", M[i].gyvent);
            fclose(fptr);
        }
        else printf ("%10s mieste negyvena daugiau nei %d gyventoju \n", M[i].miestas, *g);
    }}
#endif
