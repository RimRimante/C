#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    printf("Iveskite sveiku skaciu seka, o jos pabaiga pazymekite 0: \n");
    while (1) // while amzinasis ciklas
    //for (;1;) //for amzinasis ciklas
    //do
        {
            scanf ("%d", &a);
            if (a == 0)
            {
                break; // jeigu yra nulis tada stabdau while
            }
            else
            {
                if((9 < a && a < 100)||(a < -9 && a > -100) //tirkinu ar vizenklis skacius
                {
                    if (a % 2 == 0)
                    i++;
                }

            }
        }
    //while (1);  // atkomentuoti kartu su do
        printf ("Dvizenkliu lyginiu nariu suma : ");
        printf ("%d \n", i);
    return 0;
}
