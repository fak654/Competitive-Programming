/**************************************************
OJudge  : urionlinejudge.com
PROBLEM : 2761 - Input and Output of Various Types
ANSWER  : Accepted
LANGUAGE: C
***************************************************/

#include <stdio.h>

int main()
{
    int i;
    float d;
    char c[10];
    char s[100];

    scanf("%d%f", &i, &d);
    scanf("%s", c);
    scanf(" %[^\n]s", &s);

    printf("%d%.6f%s%s\n", i, d, c, s);
    printf("%d\t%f\t%s\t%s\n", i, d, c, s);
    printf("%10d%10.6f%10s%10s\n", i, d, c, s);

	return 0;
}
