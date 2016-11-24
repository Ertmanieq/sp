#include <stdio.h>
int power(int n, int k) {
  int r;
  if(n<0 || k<0) {
    printf("wrong input\n");
    return 0;
  }
  else if (k==1) {
    return n;
  }
  else if (k==0) {
    return 1;
  }
  else {
    k--;
    r = n * power(n,k);
    return r;
  }
}
int main() { //only for test
  printf("%d\n", power(-1,0));
  printf("%d\n", power(0,2));
  printf("%d\n", power(1,4));
  printf("%d\n", power(3,2));
  printf("%d\n", power(7,2));
  printf("%d\n", power(2,8));
}
