#include <stdio.h>

int main()
{
  int age;
  float salary;
  char gender;

  printf("How old are you?");
  scanf("%d", &age);

  printf("What's you salary?");
  scanf("%f", &salary);

  printf("What's your gender F|M|O?");
  //fflush(stdin); - this can be used instead of space before 'c' to clear the buffer. 
  scanf(" %c", &gender);

  printf("Is It Time For a Career Change?");

  printf("You are %d years old, identifies with the %c gender and receives a salary of %.2f euros", age, gender, salary);

  return 0;
}