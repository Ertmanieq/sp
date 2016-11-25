
#include <stdio.h>

int tablica(int n) {
  int dod=0;
  double tab[n];
  for(int a = 0; a < n; a++) {
    scanf("%lf", &tab[a]);
    if (tab[a] > 0)
      dod++;
  }
  return dod;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", tablica(n));
}
