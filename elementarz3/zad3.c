#include <stdio.h>
#include <math.h>
int main() {
  for(int a=1;a<334;a++) {
    for(int b=a;b<501;b++) {
      for(int c=b; a+b+c<=1000 ;c++) {
        if (a*a+b*b==c*c) {
          printf("%d\t%d\t%d\n", a, b, c);
        }
      }
    }
  }
}
