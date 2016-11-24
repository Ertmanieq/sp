#include <stdio.h>
int silnia(int a) {
  int s=1;
  if(a<1) {
    printf("wejscie<1\n");
    return 0;
  }
  else {
    for(int n=2;n<=a;n++) {
      s=s*n;
    }
    return s;
  }
}
int main() {
  for(int n=1;n<11;n++) {
    printf("%d ", silnia(n));
  }
  printf("\n");
}
