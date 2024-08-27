// Exercise #1
/*
#include <stdio.h>

int main(void)
{
  int n;
  float count;
  count = 0;

  printf("Enter a number of series: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    count = count + 1.0/i;
  }
  printf("Sum of %d first elements are %.3f", n, count);

  return 0;
}
*/

// Exercise #2
/*
#include <stdio.h>

int main(void)
{
  int n;
  float num, den, sum;
  num = 1;
  den = 1;
  sum = 0;

  printf("Enter a number of series: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)

  {
    sum = sum + num / den;
    num = num * 2;
    den = den * 3;
  }
  printf("Sum of %d first elements are %.3f", n, sum);

  return 0;
}
*/

// Exercise #3

#include <stdio.h>

int main(void)
{
  int n;
  float num, den, sum;
  num = 1;
  den = 1;
  sum = 0;

  printf("Enter a number of series: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      sum = sum + num / den;
    else
      sum = sum - num / den;

    num = num * 2;
    den = den + 2;
  }
  printf("Sum of %d first elements are %.3f", n, sum);

  return 0;
}
