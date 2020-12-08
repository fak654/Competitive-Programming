/**************************************************
OJudge  : https://onlinejudge.org
PROBLEM : UVA 458 - The Decoder
ANSWER  : Accepted
LANGUAGE: C
AUTHOR  : https://github.com/fak654/
***************************************************/


#include <stdio.h>

int main()
{
    char c;
    while(scanf("%c", &c) != EOF)
    {
        if(c=='\n')
        {
            printf("\n");
        }
        else
        {
            printf("%c", c-7);
        }
    }
}
