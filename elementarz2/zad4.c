/* Bylo w ele1 - dynia to dynia... */
#include <stdio.h>
int main ()
{
  int nb, nt, nl;
  int c;
  nt = 0;
  nl = 0;
  nb = 0;
  while ((c=getchar()) != EOF)
  if (c == ' ')
  ++nb;
  else if (c == '\t')
  ++nt;
  else if (c == '\n')
  ++nl;
  printf("Liczba znakow odstępu = %d\nLiczba znakow tabulacji = %d\nLiczba znakow nowego wiersza = %d\n", nb, nt, nl);
}
