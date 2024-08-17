#include <stdio.h>

int main(void)
{
  int x, y;
  printf("Type the first number: ");
  scanf("%d", &x);

  printf("Type the second number: ");
  scanf("%d", &y);

  printf("x + y = %d \n", x + y);
  printf("x - y = %d \n", x - y);
  printf("x / y = %d \n", x / y);  // when both numbers are integers, returns the quotient of the division.
  printf("x %% y = %d \n", x % y); // remainder
  printf("y %% x = %d \n", y % x);
  printf("x * y = %d \n", x * y);
  printf("x / y = %f \n", x / (float)y); // casting (value is locally transformed into float, in the rest of the program, it is integer)
  printf("y / x = %f \n", y / (float)x); // If at least one float/double, returns float/double

  return 0;
}
