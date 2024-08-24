// Exercise 1#
/*
#include <stdio.h>

int main(void)
{
  size_t n;
  printf("Enter a number: ");
  scanf("%u", &n);

  for (size_t i = 1; i <= n; i++)
  {
    printf("%u \n", i);
  }

  return 0;
}
*/

// Exercise 2#
/*
#include <stdio.h>

int main(void)
{
  size_t n;
  printf("Enter a number between 0 and 10: ");
  scanf("%u", &n);

  for (size_t i = 0; i <= 10; i++)
  {
    printf("%u x %u = %u \n", i, n, n * i);
  }

  return 0;
}
*/

// Exercise 3#

#include <stdio.h>

int main(void)
{
  size_t n, factorial;

  factorial = 1;
  printf("Enter a number: ");
  scanf("%u", &n);

  for (size_t i = n; i > 1; i--)
  {
    factorial = factorial * i;
  }
  printf("%u! = %u \n", n, factorial);

  return 0;
}
