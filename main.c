#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x ;

    printf("saisie de a et b de ax+b=0 \n");
    printf("saisie a \n");
    scanf("%f",&a);
    printf("saisie b \n");
    scanf ("%f",&b);
    if (a!=0)
    {
        x= -b/a;
        printf("la solution est %f",x);
    }
    else if (a==0 && b!=0)
        printf("x n existe pas ");
    else if (a==0 && b==0)
        printf ("il y a une infinite de solution pour x");
   return 0 ;
}
