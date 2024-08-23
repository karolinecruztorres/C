#include <stdio.h>
#define SIDE_SIZE 3

int main(void)
{
  int a, b, c;
  a = SIDE_SIZE;
  b = SIDE_SIZE;
  c = SIDE_SIZE;

  printf("Enter the size of the sides of the triangle \n");
  printf("Side a: ");
  scanf("%d", &a);

  printf("Side b: ");
  scanf("%d", &b);

  printf("Side c: ");
  scanf("%d", &c);

  if ((a <= 0) || (b <= 0) || (c <= 0) || (a > b + c) || (b > a + c) || (c > a + b))
  {
    printf("The values do not form a triangle.");
  }
  else if ((a == b && a != c) || (a == c && c != b) || (b == c && b != a))
  {
    printf("It is a isosceles triangle.");
  }
  else if ((a == b) && (b == c))
  {
    printf("It is a equilateral triangle.");
  }
  else
  {
    printf("It is a scalene triangle.");
  }

  return 0;
}
