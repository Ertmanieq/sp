#include <stdio.h>

int silnia(int n)
{
  int s=1;
  for(int i = 1; i<=n; i++)
  {
    s=s*i;
  }
  return s;
}

int main()
{
  int i;
  char term;
  if(scanf("%d%c", &i, &term) != 2 || term != '\n' || i<0)
  printf("Błędne wejście\n");
  else
  printf("Silnia z %d = %d\n", i, silnia(i));
  return 0;
}
