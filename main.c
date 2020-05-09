/**
    * c program to print pascal triangles of different forms
    * replace %4d to %2d or any other value to change width if the
    * triangle patterns does not appear as they should.
    *
    */


#include <stdio.h>
#include <stdlib.h>

#define lev 5 /* sets the max width of the triangle */
int main()
{

    int i1, j1, coeff1; /* first part */
    for(i1=0; i1<lev; i1++)
    {
        for(j1=lev; j1>=i1; j1--)
        {
            printf("    ");
        }
        for(j1=0; j1<=i1; j1++)
        {
            if(i1==0 || j1==0)
            {
                coeff1 = 1;
            }
            else
            {
                coeff1 = coeff1 * (i1-j1+1)/j1;
            }
            printf("%4d", coeff1);
            printf("    ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    int i2, j2, coeff2; /* second part */
    for(i2=0; i2<lev; i2++)
    {
        for(j2=lev; j2 >=i2; j2--)
        {
            printf("    ");
        }
        for(j2=0; j2 <=i2; j2++)
        {
            if(i2==0 || j2==0)
            {
                coeff2 = 1;
            }
            else
            {
                coeff2 = coeff2 * (i2 - j2 + 1) / j2;
            }
            printf("%4d", coeff2);
            printf("    ");
            if(i2/2 == j2) break;
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    int i3, j3, coeff3; /* third part */
    for(i3=0; i3<lev; i3++)
    {
        for(j3=lev; j3>=i3; j3--)
            printf("    ");
        for(j3=0; j3 <= i3; j3++)
        {
            if(i3==0 || j3==0)
                coeff3 = 1;
            else
                coeff3 = coeff3 * (i3-j3+1) / j3;
            if((i3+1)/(j3+1) <2)
            {
                printf("%4d", coeff3);
                printf("    ");
            }
            else
            {
                printf("    ");
                printf("    ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    int i4, j4, coeff4, b, c; /* fourth part */
    b = lev * 2 - 1;
    for(i4=0; i4<b; i4++)
    {
        if(i4 >= lev)
        {
            c = lev *2 - i4 - 2;
        }
        else
            c = i4;
        for(j4=lev; j4>=c; j4--)
            printf("    ");
        for(j4=0; j4<=c; j4++)
        {
            if(c==0 || j4==0)
                coeff4=1;
            else
                {
                    coeff4=coeff4*(c-j4+1)/j4;
                }
                printf("%4d", coeff4);
                printf("    ");
        }
        printf("\n");

    }
    printf("\n");
    printf("\n");
    printf("\n");

    int i5, j5, coeff5, b5, c5; /* fifth part */
    b5 = lev*2-1;
    for(i5=0; i5<b5; i5++)
    {
        if(i5 >= lev)
        {
            c5 = lev*2 - i5 - 2;
        }
        else
            c5 = i5;
        for(j5=lev; j5>=c5; j5--)
            printf("    ");
        for(j5=0; j5<=c5; j5++)
        {
            if(c5==0 || j5==0)
                coeff5 = 1;
            else
            {
                coeff5 = coeff5 * (c5-j5+1)/j5;
            }
            printf("%4d", coeff5);
            printf("    ");
            if(c5/2 == j5) break;
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    int i6, j6, coeff6, k6; /* sixth part */
    k6=lev-1;
    for(i6 = k6; i6>=0; i6--)
    {
        for(j6=k6; j6 >=i6; j6--)
            printf("    ");
        for(j6=0; j6<=i6; j6++)
        {
            if(i6==0 || j6 ==0)
            {
                coeff6 = 1;
            }
            else
            {
                coeff6 = coeff6 * (i6-j6+1)/j6;
            }

            printf("%4d", coeff6);
            printf("    ");
        }
        printf("\n");
    }

return 0;
}
