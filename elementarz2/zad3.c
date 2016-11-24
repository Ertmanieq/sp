#include <stdio.h>

void print_table_header() {
  printf("|liczba składnikow|przyblizenie pi|\n");
  printf("|---|---|\n");
}

void przyblizenie_pi_do() {
  int n=0,c=0;
  double pi=0;
  printf("|Przyblizenie osiagnelo|przy elemencie nr|\n");
  printf("|---|---|\n");
  while(c!=3) {
    if (c == 0 && pi >= 3.14 && pi <= 3.15) {
      c=1;
      printf("|3.14|%d|\n", n);
    } else if (c == 1 && pi >= 3.141 && pi <= 3.142) {
      c=2;
      printf("|3.141|%d|\n", n);
    } else if (c == 2 && pi >= 3.1415 && pi <= 3.1416) {
      c=3;
      printf("|3.1415|%d|\n", n);
    }
    if (n % 2 == 0) {
      pi += 4.0/( n * 2.0 + 1.0 );
    } else {
      pi -= 4.0/( n * 2.0 + 1.0 );
    }
    n++;
  }
}

void przyblizenie_pi(int o) { // comment 1/3 mozna zrobic w int main
  int n=0;
  double pi=0;
  while(n < o) {
    if (n % 2 == 0) {
      pi += 4.0/( n * 2.0 + 1.0 ); // comment 2/3 ale trzeba uzywac 4.0 itd.
    } else {
      pi -= 4.0/( n * 2.0 + 1.0 ); // comment 3/3 inaczej liczy jak int
    }
    n++;
  }
  printf("|%d|%lf|\n",o , pi);
}

int main() {
  print_table_header();
  przyblizenie_pi(10);
  przyblizenie_pi(100);
  przyblizenie_pi(1000);
  przyblizenie_pi(1000000);
  printf("\n");
  przyblizenie_pi_do();
}
