#include <stdio.h>
#include <stdbool.h>
#define NUMBER_SIZE 4

int main(void)
{
  int number;
  bool isOdd; // in C, 0 is equals false and can be use in boolean.

  number = NUMBER_SIZE;
  printf("Type a number: ");
  scanf("%d", &number);

  isOdd = number % 2;
  if (!isOdd)
    printf("%d is even.", number);
  else
    printf("%d is odd.", number);
  return 0;
}