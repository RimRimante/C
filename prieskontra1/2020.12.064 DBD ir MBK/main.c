#include <stdio.h>
#include <stdlib.h>
int lcm(int,int);
int main()
{   int a, b,c,gcd,i,l,k;
    printf("Iveskite tris naturaliuosius skaicius\n");
    scanf ("%d%d%d", &a,&b,&c);
    for(i=1; i <= a && i <= b &&i <=c; ++i)
    {
        // Checks if i is factor of both integers 865
        if(a%i==0 && b%i==0 && c%i==0)
            gcd = i;
    }

    if(a>b)
        l = lcm(a,b);

    else
        l = lcm(b,a);

    if(l>c)
        k= lcm(l,c);
    else
        k= lcm(c,l);

    printf("G.C.D. of %2d,%2d and %2d is %2d\n", a,b,c, gcd);
    printf("L.C.M. of %2d,%2d and %2d is %2d", a,b,c, k);
    return 0;
}
int lcm(int a,int b){
    int temp = a;
    while(1){
    if(temp % b == 0 && temp % a == 0)
        break;
    temp++;
}

return temp;

}
