#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    printf("No arguments supplied\n");
    return -1;
  }

  if (argc == 3)
  {
    if (strcmp("+", argv[2]) != 0)
    {
      printf("Missing operator\n");
      return -1;
    }
    else if (strcmp("-", argv[2]) != 0)
    {
      printf("Missing operator\n");
      return -1;
    }
    else if (strcmp("/", argv[2]) != 0)
    {
      printf("Missing operator\n");
      return -1;
    }
    else if (strcmp("*", argv[2]) != 0)
    {
      printf("Missing operator\n");
      return -1;
    }
    else
    {
      printf("Unknown error occured");
      return -1;
    }
    // if (isdigit(argv[2]) == 1)
    // {
    //   printf("Missing operator\n");
    //   return -1;
    // }
  }

  if (argc > 4)
  {
    printf("Too many arguments\n");
    return -1;
  }

  if (isdigit(*argv[1]) == 0 || isdigit(*argv[3]) == 0)
  {
    printf("Not a number\n");
    return -1;
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[3]);
  char *op = argv[2];
  int ans;

  // printf("num 1 is: %d, num2 is: %d, operator is: %s\n", num1, num2, op);

#ifdef FULL
  if (strcmp("+", op) == 0)
  {
    ans = num1 + num2;
    printf("%d %s %d = %d\n", num1, op, num2, ans);
  }
  else if (strcmp("-", op) == 0)
  {
    ans = num1 - num2;
    printf("%d %s %d = %d\n", num1, op, num2, ans);
  }
  else if (strcmp("/", op) == 0)
  {
    ans = num1 / num2;
    printf("%d %s %d = %d\n", num1, op, num2, ans);
  }
  else if (strcmp("*", op) == 0)
  {
    ans = num1 * num2;
    printf("%d %s %d = %d\n", num1, op, num2, ans);
  }
  else
  {
    printf("Invalid operator\n");
  }

#else

  if (strcmp("+", op) == 0)
  {
    ans = num1 + num2;
    printf("%d %s %d = %d\n", num1, op, num2, ans);
  }
  else
  {
    printf("Error: Demo only supports additions\n");
  }
#endif

  return 0;
}