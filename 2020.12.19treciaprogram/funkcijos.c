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
void nuskaitymas (char *filename,int eil, struct Duomenys M[])
{
    int i;
    FILE *fp;
    fp = fopen( filename,"r");
    if ((fp = fopen( filename,"r")) == NULL){
        printf( "nepavyko atidaryti  %s srauto. \n", filename);
        return ;}
    else{
        printf(" Jusu failas atidarytas:\n");
        for ( i = 0; i <eil; i++){
            fscanf( fp, "%s %s %d",M[i].miestas, M[i].salis, &M[i].gyvent);
            printf( "%10s%10s%10d\n", M[i].miestas, M[i].salis, M[i].gyvent);
        }
        }
    fclose(fp);
}
void naujas(struct Duomenys M[], int *g, int eil){
    int i;
    for ( i = 0; i < eil; i++)
    {
        if (M[i].gyvent > *g)
         {
            FILE *fptr = NULL;
            fptr = fopen(M[i].salis, "w+");
            if (fptr == NULL)
            {
                printf("Nepavyko sukurti failo.\n");
                return ;
            }
            printf ( "Sukurtas naujas failas pavadinimu %s \n", M[i].salis);
            fprintf( fptr, "%d gyventoju", M[i].gyvent);
            fclose(fptr);
        }
        else printf ("%10s mieste negyvena daugiau nei %d gyventoju \n", M[i].miestas, *g);
    }}
int Eilutes (char *filename)
{   int eil=0;
    char temp[256];
    FILE *fp;
    fp = fopen( filename,"r");
    while(1){
            fgets(temp,256,fp);
            eil++;
            if ( feof(fp)) break;
    }
    fclose(fp);
    return eil;
}
#endif
