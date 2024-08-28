// Exercise #1
/*
#include <stdio.h>
#define N 10

int main(void)
{
  float grade[N], average;
  float sum = 0;

  printf("Enter your notes: \n");
  for (int i = 0; i < N; i++)
  {
    scanf("%f", &grade[i]);
    sum = sum + grade[i];
  }

  average = sum / N;

  for (int i = 0; i < N; i++)
  {
    printf("%.2f \n", grade[i]);
  }

  printf("Your average grade are %.2f.", average);

  return 0;
}
*/

// Exercise #2
/*
#include <stdio.h>
#define N 20

int main(void)
{
  int array[N];
  int position = 0;
  int x, i, key;

  for (int i = 0; i < N; i++)
  {
    array[i] = -1;
  }

  printf("Enter the number of elements you want to add to the array: \n");
  scanf("%d", &x);

  printf("Enter the %d elements: \n", x);
  for (position = 0; position < x; position++)
  {
    scanf("%d", &array[position]);
  }

  printf("Enter the element to be searched: \n");
  scanf("%d", &key);

  i = 0;
  while (i != position && array[i] != key)
  {
    i++;
  }

  if (i == position)
  {
    printf("Not found.");
  }
  else
  {
    printf("Finded on the position %d. \n \n", i);
  }

  return 0;
}
*/

// Exercise #3

#include <stdio.h>
#define N 20

int main(void)
{
  int array[N];
  int sentinel = 0;
  int x, i, key;

  for (int i = 0; i < N; i++)
  {
    array[i] = -1;
  }

  printf("Enter the number of elements you want to add to the array: \n");
  scanf("%d", &x);

  printf("Enter the %d elements: \n", x);
  for (sentinel = 0; sentinel < x; sentinel++)
  {
    scanf("%d", &array[sentinel]);
  }

  printf("Enter the element to be searched: \n");
  scanf("%d", &key);

  array[sentinel] = key;
  i = 0;
  while (array[i] != key)
  {
    i++;
  }

  if (i == sentinel)
    printf("Not found.");
  else
    printf("Finded on the position %d. \n \n", i);

  return 0;
}