#include <stdio.h>

void left(int n) {
  for(; n > 0; n--)
    putchar('*');
  putchar('\t');
}

void right(int n) {
  for(int s = 8 - n; s > 0; s--)
    putchar(' ');
  for(; n > 0; n--)
    putchar('*');
}

void drukuj(int n) {
  for(int i = 0; i < n; i++) {
    left(i+1);
    left(n-i);
    right(n-i);
    right(i+1);
    putchar('\n');
  }
}

int main() {
  int n = 4;
  drukuj(n);
}
