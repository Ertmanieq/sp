#include <stdio.h>
int even(int k) {
  return k % 2 == 0;
}

void print_line(int p, int r) {
  const char *pattern = even (r) ? "* " : " *";
    for (int y = 0; y < p-1; y++)
      printf("%s", pattern);
    printf("%s", even(r) ? "*" : pattern);
    printf("\n");
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  for (int x = 0; x < b; x++)
    print_line(a ,x);
}
