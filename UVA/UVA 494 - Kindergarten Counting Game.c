/**************************************************
OJudge  : https://uva.onlinejudge.org/
PROBLEM : UVA 494 - Kindergarten Counting Game
ANSWER  : Accepted
LANGUAGE: C
AUTHOR  : https://github.com/fak654/
***************************************************/

#include <stdio.h>
#include <string.h>

void totalWords(char line[]);

int main()
{
    char line[500];

    while(gets(line))
    {
        totalWords(line);
    }
}

void totalWords(char line[])
{
    int i, words = 0;
    char *tok;
    int length = strlen(line);

    for(i=0; i<length; i++)
    {
        if(!(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z'))
        {
            line[i] = 32;
        }
    }

    tok = strtok(line, " ");
    while(tok != NULL)
    {
        words += 1;
        tok = strtok(NULL, " ");
    }
    printf("%d\n", words);
}
