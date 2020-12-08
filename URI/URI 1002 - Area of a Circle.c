/**************************************************
OJudge  : urionlinejudge.com
PROBLEM : 1002 - Area of a Circle
ANSWER  : Accepted
LANGUAGE: C
***************************************************/

#include<stdio.h>

int main()
{
    double R,pi=3.14159,A;
    
    scanf("%lf",&R);
    
    A=pi*(R*R);
    
    printf("A=%0.4lf\n",A);
    
    return 0;
}
