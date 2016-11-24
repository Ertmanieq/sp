#include <stdio.h>

int suma_do_n(int n) {
  if (n < 1) {
    printf("n<0\n");
    return 0;
  } else {
    int w=0;
    for(int a = 0; a <= n; a++)
      w += a;
    return w;
  }
}

int main() {
  int a;
  scanf("%d", &a);
  printf("Suma od 1 do %d wynosi %d\n", a, suma_do_n(a));
}
