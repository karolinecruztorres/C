// Exercise #1

/*
#include <stdio.h>

int main(void)
{
  int option, x, y;
  option = 0; // ensures that you enter the options menu at least once

  while (option != 3)
  {
    printf("Options menu: \n 1 - Add two numbers; \n 2 - Multiply two numbers; \n 3 - Exit; \n What do you want to do? \n");
    scanf("%d", &option);

    if (option == 1)
    {
      printf("Enter two numbers to sum ");
      scanf("%d %d", &x, &y);
      printf("%d + %d = %d \n\n", x, y, x + y);
    }
    else if (option == 2)
    {
      printf("Enter two numbers to multiply ");
      scanf("%d %d", &x, &y);
      printf("%d x %d = %d \n\n", x, y, x * y);
    }
    else if (option == 3)
    {
      printf("Exiting...\n\n");
    }
    else
    {
      printf("Invalid option. Please choose again.\n\n");
    }
  }

  return 0;
}
*/

// Exercise #2

#include <stdio.h>

int main(void)
{
  int n, quo, count;

  printf("Enter a number: ");
  scanf("%d", &n);

  quo = n;
  count = 0;

  while (quo != 0)
  {
    quo = quo / 10; // works with numbers up to 10 digits
    count++;
  }

  if (n == 0)
    printf("The number has 1 digit.");
  else
    printf("The number has %d digit(s).", count);
  return 0;
}
