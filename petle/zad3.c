#include <stdio.h>

int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  if (a>=b) {
    printf("!a<b\n");
  } else {
    for (a = a + 1; a < b; a++) {
      printf("%d\n", a);
    }
  }
}
