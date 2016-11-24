#include <stdio.h>
int main() {
  char c;
  int tablica[256],z;
  for(int n=0;n<257;n++) {
    tablica[n]=0; //musimy wyczyscic tablice or riot
  }
  while ((c=getchar()) != EOF) {
    z=c;
    if ((z>31 && z<127) || c=='\t' || c=='\n') {
      tablica[z]++;
    }
  }
  printf("znak\tliczba znakow\n----------------------\n");
  for(int i=0;i<257;i++) {
    if (tablica[i]>0) {
      c=i;
      if (c==' ') {
        printf("space");
      }
      else if(c=='\t') {
        printf("\\t");
      }
      else if(c=='\n') {
        printf("\\n");
      }
      else {
        printf("%c", c);
      }
      printf("\t%d\t", tablica[i]);
      for(int j=0;j<tablica[i];j++) {
        printf("*");
      }
      printf("\n");
    }
  }
}
