#include <stdio.h>

void tablica(int n) {
  int tab[n];
  for(int a = 0; a < n; a++)
    scanf("%d", &tab[a]);
  for(int a = 0; a < n; a++)
    printf("%d ", tab[a]);
}

int main() {
  int n;
  scanf("%d", &n);
  tablica(n);
}
