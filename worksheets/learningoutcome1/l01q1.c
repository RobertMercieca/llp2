#include <stdio.h>
#include <stdbool.h>
#include "l01.h"

bool compareStrings(char *x, char *y)
{
  int flag = 0;

  // Iterate a loop till the end
  // of both the strings
  while (*x != '\0' || *y != '\0')
  {
    if (*x == *y)
    {
      x++;
      y++;
    }

    // If two characters are not same
    // print the difference and exit
    else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') || *x != *y)
    {
      flag = 1;
      return false;
      break;
    }
  }

  // If two strings are exactly same
  if (flag == 0)
  {
    return true;
  }

  return true;
}

int main(int argc, char *argv[])
{
  // printf("%d", should_count_chars(argc, argv[1]));
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
    bool correct = compareStrings("-c", argv[1]);
    if (correct == 1)
    {
      printf("%d words (%d characters)\n", numOfWords, numOfCharacters);
    }
    else
    {
      printf("%d words\n", numOfWords);
    }
  }
  else
  {
    printf("%d words\n", numOfWords);
  }

  return 0;
}