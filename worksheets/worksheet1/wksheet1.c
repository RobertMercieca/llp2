#include <stdio.h>
#include <string.h> /* strlen */
#include <ctype.h>  /* isdigit */
#include <stdlib.h> /* atoi, rand, srand */
#include <time.h>   /* time */

void question1()
{
  int num1, num2;
  printf("Enter number 1: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  // printf("num1 is %d, num2 is %d", num1 , num2);
  int sum = num1 + num2;
  printf("sum is %d\n", sum);
  int average = (num1 + num2) / 2;
  printf("average is %d\n", average);
  int sumSquares = (num1 * num1) + (num2 * num2);
  printf("sum of squares is %d\n", sumSquares);
}

struct Persons
{
  char name[30];
  char surname[30];
  char country[30];
  int phoneNumber;
} person;

void question2()
{
  struct Persons p1;
  printf("Enter name: ");
  scanf("%s", p1.name);
  printf("Enter surname: ");
  scanf("%s", p1.surname);
  printf("Enter country: ");
  scanf("%s", p1.country);
  printf("Enter mobile number: ");
  scanf("%d", &p1.phoneNumber);

  printf("%s %s is from %s and their phone number is %d", p1.name, p1.surname, p1.country, p1.phoneNumber);
}

void question3()
{
  int numbers[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Enter a number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d ", numbers[i]);
  // }

  int largest = numbers[0];
  for (int i = 1; i < 10; i++)
  {
    if (numbers[0] < numbers[i])
    {
      // numbers[0] = numbers[i];
      numbers[0] = numbers[i];
      largest = numbers[i];
    }
    else
    {
      // largest = numbers[i];
      largest = numbers[0];
    }
  }
  largest = numbers[0];

  printf("Largest number is: %d", largest);
}

void question4()
{
  int num = 0;
  while (num >= 0)
  {
    num += 100;
    printf("%d", num);
  }

  //2147483596
}

void question5()
{
  printf("question 5");
}

void question6()
{
  printf("question 6");
}

void question7()
{
  int num1, num2, largest;
  printf("Enter number 1: ");
  scanf("%d", &num1);
  printf("Enter number 2: ");
  scanf("%d", &num2);

  // printf("Num1: %d, Num2: %d", num1, num2);

  if (num1 > num2)
  {
    largest = num1;
  }
  else
  {
    largest = num2;
  }

  printf("Largest number of the two is : %d", largest);
}

void question8()
{
  int num1, num2, largest;
  printf("Enter number 1: ");
  scanf("%d", &num1);
  printf("Enter number 2: ");
  scanf("%d", &num2);

  largest = num1 > num2 ? num1 : num2;

  printf("Largest number of the two is: %d", largest);
}

void question9()
{
  time_t t;

  srand((unsigned)time(&t));

  for (int i = 0; i < 5; i++)
  {
    printf("Random number %d is %d. \n", (i + 1), (rand() % 100) + 1);
  }
}

int main(void)
{
  question9();
  return 0;
}