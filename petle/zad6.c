#include <stdio.h>

void tablica(int n) {
  double tab[n], min, max;
  scanf("%lf", &tab[0]);
  min = tab[0];
  max = tab[0];
  for(int a = 1; a < n; a++) {
    scanf("%lf", &tab[a]);
    if (tab[a] < min)
      min = tab[a];
    if (tab[a] > max)
      max = tab[a];
  }
  printf("%lf %lf\n", min, max);
}

int main() {
  int n;
  scanf("%d", &n);
  tablica(n);
}
