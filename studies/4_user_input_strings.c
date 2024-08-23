#include <stdio.h>
#include <string.h>
#define FULL_NAME_SIZE 80 // Defines a constant variable
#define ADDRESS_SIZE 100
#define ID_SIZE 12

int main(void) // explicit way to show that the function has no arguments
{
  char full_name[FULL_NAME_SIZE];
  char address[ADDRESS_SIZE];
  char id[ID_SIZE];

  printf("Type your full name: ");
  fgets(full_name, FULL_NAME_SIZE, stdin);
  full_name[strlen(full_name) - 1] = '\0';

  printf("Type your address: ");
  fgets(address, ADDRESS_SIZE, stdin);
  address[strlen(address) - 1] = '\0';

  printf("Type your Id: ");
  fgets(id, ID_SIZE, stdin);

  printf("%s which Id is %s lives on %s.", full_name, id, address);

  return 0;
}