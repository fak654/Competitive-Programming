/**************************************************
OJudge  : urionlinejudge.com
PROBLEM : 1176 - Fibonacci Array
ANSWER  : Accepted
LANGUAGE: C
***************************************************/

#include <stdio.h>

int main()
{
    int i, l;
    long long int a, b, show, n;
    scanf("%d",&l);
    while(l--)
    {
        show=0;
        a=0;
        b=1;
        scanf("%lld",&n);
        if(n>1)
        {
            i=2;
            while (i<n+1)
            {
                show=a+b;
                a=b;
                b=show;
                ++i;
            }
            printf("Fib(%lld) = %lld\n",n, show);
        }
        else
            printf("Fib(%lld) = %lld\n",n, n);
    }

    return 0;
}
