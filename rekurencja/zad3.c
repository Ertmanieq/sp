#include <stdio.h>
int back() {
  char c;
  if((c=getchar()) != EOF) {
    back();
    printf("%c", c);
  }
  return 0;
}
int main() {
  back();
}
