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
*/

// Exercise #4

#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64) // Windows
#include <windows.h>
#endif

#ifdef __linux__ // Linux
#include <unistd.h>
#endif

int main(void)
{
  size_t min, sec;
  printf("Enter the time in minutes and seconds.");
  scanf("%u %u", &min, &sec);

  if (min > 59 || sec > 59 || (min == 0 && sec == 0))
  {
    printf("Enter a valid time, try again.");
  }
  else
  {
    do
    {
      system("cls");                   // clear
      printf("%02u:%02u\n", min, sec); // '02' after the '%' to put a zero
      Sleep(1000);                     // 1 second timer

      if (sec == 0)
      {
        min--;
        sec = 59;
      }
      else
      {
        sec--;
      }
    } while (min != 0 || sec != 0);
    system("cls");
    printf("%02u:%02u\n", min, sec);
    printf("Time's up!");

    for (int i = 0; i < 3; i++)
    {
      Beep(1500, 400); // a beep sound, first parameter is the decibels, the second is the time
      Sleep(500);
    }
  }

  return 0;
}
