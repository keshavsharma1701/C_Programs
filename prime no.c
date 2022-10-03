//..............program to print prime no between 1 to 100...........
#include<stdio.h>
void main()
{
    int c=0;
    printf("prime no between 1 to 100 are :- ");
    for(int n=0;n<=100;n++)
    {
        for(int i=1;i<=n/2;i++)
        {
             if(n%i==0)
                c++;
        }
        if(c==1)
            printf("%d ",n);
        c=0;
    }
}
