#include <stdio.h>
#include <stdbool.h>
#include "l01.h"

int main(int argc, char *argv[])
{
  should_count_chars(argc, argv[1]);
  char userText[256];
  int numOfWords = 1;
  int numOfCharacters = 0;
  printf("Enter text: ");
  fgets(userText, 256, stdin);
  // printf("User input: %s", userText);

  for (int i = 1; userText[i] != '\0'; i++)
  {
    if (userText[i] == ' ')
    {
      numOfWords++;
    }
  }

  for (int i = 0; userText[i] != '\0'; i++)
  {
    numOfCharacters = i;
  }

  if (argc == 1)
  {
    printf("%d words\n", numOfWords);
  }
  else if (argc == 2)
  {
    printf("%d words (%d characters)\n", numOfWords, numOfCharacters);
  }
  else
  {
    printf("%d words\n", numOfWords);
  }

  return 0;
}