
#include <stdio.h>
#include <math.h>
int main() {
  int n, jest_pierwsza=1, i=2, s;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);
  s = sqrt(n);
  while (i <= s && jest_pierwsza == 1) {
    if (n % i == 0) {
      jest_pierwsza=0;
    }
    i++;
  }
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");
}
