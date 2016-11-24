#include <stdio.h>
int sil(int a) {
  if (a==0) {
    return 1;
  }
  else if(a<0) {
    printf("a<0\n");
    return 0;
  }
  else {
    return sil(a-1)*a;
  }
}
int C(int n, int k) {
  if (n<k) {
    int tmp = n;
    n=k;
    k=tmp;
  }
  int w;
  w=(sil(n)) / ( sil(k)*sil((n-k)) );
  return w;
}
int main() { //test
  printf("%d\n", C(2,3));
  printf("%d\n", C(4,8));
}
