/**************************************************
OJudge  : urionlinejudge.com
PROBLEM : 2758 - Floating Number Input and Output
ANSWER  : Accepted
LANGUAGE: C
***************************************************/


#include <stdio.h>

int main()
{
  float A, B;
  double C, D;

  scanf("%f%f%lf%lf",&A,&B,&C,&D);

  printf("A = %f, B = %f\nC = %lf, D = %lf\n",A, B, C, D);          // 7 & 8
  printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n",A, B, C, D);  // 9 & 10
  printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n",A, B, C, D);  // 11 & 12
  printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n",A, B, C, D);  // 13 & 14
  printf("A = %.3E, B = %.3E\nC = %.3lE, D = %.3lE\n",A, B, C, D);  // 15 & 16
  printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n",A, B, C, D);  // 17 & 18

  return 0;
}
