#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0; // i - skacius dvizenkliu nariu sumos kiekiui
    printf("Iveskite sveiku skaciu seka, o jos pabaiga pazymekite 0: \n");
    //while (1) // while amzinasis ciklas (galima rasyti dar while(true) )
    for (;;) //for amzinasis ciklas (galima rasyti dar for (;;) )
    //do
        {
            scanf ("%d", &a);
            if (a == 0)
            {
                break; // jeigu yra nulis tada stabdau cikla
            }
            else
            {
                if((a > 9 && a < 100) || (a > -100 && a < -9)) //tikrinu ar dvizenklis skacius

                {
                    if (a % 2 == 0) // jei skaciaus liekana yra 0, reiskia kad skaicius yra lyginis
                    i++; // jeigu atitinka salygas tada prie i pridedu +1
                }

            }
        }
    //while (1);  // atkomentuoti kartu su do  (galima rasyti dar while (true))
        printf ("Dvizenkliu lyginiu nariu suma : ");
        printf ("%d \n", i);
    return 0;
}
