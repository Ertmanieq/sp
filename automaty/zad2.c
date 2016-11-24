#include <stdio.h>
int main() {
  char a;
  do {
    a=getchar();
      printf("%c", a);
  } while(a!=EOF && a!='\n');
  printf("\n");
}
