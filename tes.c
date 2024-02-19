/*#include<stdio.h>

int main() {
  int *p1, *p2;
  int num1, num2, sum;

  printf(" Find a sum two Numbers \n");

  printf("\nEnter Two Numbers for Find a Difference : \n");
  scanf("%d %d", &num1, &num2);

  p1 = &num1;
  p2 = &num2;

  sum= *p1 + *p2;

  printf("sum : %d", sum);
  return 0;
}
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double num, num_integer, num_decimal;

    printf("Enter a number: ");
    scanf("%lf", &num);

    num_decimal = modf(num, &num_integer);

    printf("Integer part: %lf, Decimal part: %lf\n", num_integer, num_decimal);

    return 0;
}