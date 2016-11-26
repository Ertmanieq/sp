  #include <stdio.h>

  void elementy( double tab[] ){
    int i;
    int dod = 0;

    for (i = 0; i <= 5; i++)  {
      printf("Podaj liczbę: ");
      scanf("%lf", &tab[i]);
      if (tab[i] > 0)
        dod += 1;
    }
    printf("liczba liczb dodatnich: %d\n", dod);
  }
    int main() {
      double tablica[6];

      elementy(tablica);
    }
