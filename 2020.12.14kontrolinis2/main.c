#include <stdio.h>
#include <stdlib.h>
int const K = 150;
int skaiciuoja (char *mas)
{   int i;
    int priebalsiai = 0, balsiai = 0;
    for (int i = 0; (*(mas+i))!= '\0'; ++i){
        if ((*(mas+i)) == 'a' || (*(mas+i)) == 'e' || (*(mas+i)) == 'i' || (*(mas+i)) == 'o' ||
            (*(mas+i)) == 'u' || (*(mas+i)) == 'A' || (*(mas+i)) == 'E' || (*(mas+i)) == 'I' ||
            (*(mas+i)) == 'O' || (*(mas+i)) == 'U') {
            ++balsiai;
            }
            else if ((*(mas+i) >= 'a' && *(mas+i) <= 'z') || (*(mas+i) >= 'A' && *(mas+i) <= 'Z')) {
                ++priebalsiai;
                    }
    }
    return priebalsiai;
}
int main()
{
    int i;
    char mas[K];
    int priebalsiai=0, balsiai = 0;
    printf("Iveskite tekstine eilute kuria sudarytu keli zodziai: \n");
    gets(mas);
    char *ptr;
    ptr = &mas[0];
    if (strlen(ptr)>K){
        printf ("Ivedete per daug simboliu!\n");
        return 0;
    }
    else{
        printf ("Priebalsiu ivestoje eiluteje yra: %d \n", skaiciuoja(ptr));
    }
    return 0;
}
