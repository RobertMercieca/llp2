#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int num;
  FILE *fp;
  char filename[20];

  if (argc == 1)
  {
    printf("Usage: count_marks <textfile>\n");
    return -1;
  }
  else
  {
    strcpy(filename, argv[1]);
  }

  if (strcmp(filename, "marks.txt") != 0)
  {
    printf("Failed to open %s", filename);
    return -1;
  }

  // printf("%s\n", filename);

  float total = 0;
  float passes = 0;

  fp = fopen(filename, "r");
  if (fp != NULL)
  {
    while (!feof(fp))
    {
      if (fscanf(fp, "%d", &num) != 1)
        break;
      total++;

      if (num >= 50)
      {
        passes++;
      }
    }

    fclose(fp);
  }

  int percentage = (passes / total) * 100;

  printf("Pass rate is %.0f of %0.f (%d%%) \n", passes, total, percentage);

  return 0;
}