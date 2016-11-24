#include <stdio.h>
int main() {
  char a;
  int b=0;
  do {
    a=getchar();
    if (a==' ' || a=='\t') {
      if (b==0) {
        printf(" ");
        b=1;
      }
    }
    else {
      printf("%c", a);
      b=0;
    }
  } while(a!=EOF && a!='\n');
  printf("\n");
}
