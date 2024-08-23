#include <stdio.h>
#include <string.h>
#define WORD_SIZE 50

int main(void)
{
  char first_word[WORD_SIZE];
  char second_word[WORD_SIZE];
  char original[WORD_SIZE];

  printf("Enter two words: ");
  fgets(first_word, WORD_SIZE, stdin);
  fgets(second_word, WORD_SIZE, stdin);

  first_word[strlen(first_word) - 1] = '\0';
  second_word[strlen(second_word) - 1] = '\0';

  printf("1 - Length of 1st: %d letters. Length of 2nd: %d letters. \n", strlen(first_word), strlen(second_word));

  strcpy(original, first_word);
  printf("2 - 1st in Lowercase: %s. \n", strlwr(original));
  strcpy(original, second_word);
  printf("3 - 2nd in Uppercase: %s. \n", strupr(original));

  if (strcasecmp(first_word, second_word) < 0)
  {
    printf("4 - The two words in alphabetical order: %s %s. \n", first_word, second_word);
  }
  else
  {
    printf("4 - The two words in alphabetical order: %s %s. \n", second_word, first_word);
  }

  printf("5 - 2nd concatenated with the 1st: %s. \n", strcat(first_word, second_word));

  return 0;
}
