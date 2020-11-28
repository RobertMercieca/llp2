bool compareStrings(char *x, char *y)
{
  int flag = 0;

  while (*x != '\0' || *y != '\0')
  {
    if (*x == *y)
    {
      x++;
      y++;
    }

    else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') || *x != *y)
    {
      flag = 1;
      return false;
      break;
    }
  }

  if (flag == 0)
  {
    return true;
  }

  return true;
}

bool should_count_chars(int argc, char *argv[])
{
  bool x = compareStrings("-c", argv[1]);
  if (x == 1)
  {
    return true;
  }
  return false;
}