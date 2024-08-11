#include <stdio.h>
#include <stdbool.h>

int main()
{
  char firstName[] = "Karoline";
  char gender = 'F';
  int age = 29;
  float wage = 630.50;
  bool likeMyWork = false;

  printf("My name is %s, my gender is %c, I'm %d years old and my wage is %.2f euros. If you ask me if I like my job, I will say %s.", firstName, gender, age, wage, likeMyWork ? "yes" : "no");

  return 0;
}