#include <stdio.h>

int even(int k) {
  return k % 2 == 0;
}

void print_line(int p, int r, char a, char b) {
    if (even(r)) {
      char c = a;
      a = b;
      b = c;
    }
    for (int y = 0; y < p; y++)
      printf("%c%c", a, b);
    printf("\n");
}

int main() {
  int a, b;
  printf("Podaj wymiar x*y\\t znaki\n");
  scanf("%d %d\t", &a, &b);
  char c, d;
  scanf("%c%c", &c, &d);
  for (int x = 0; x < b; x++)
    print_line(a, x, c, d);
}
