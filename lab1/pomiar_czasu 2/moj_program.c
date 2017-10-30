#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"pomiar_czasu.h"
 
const int liczba = 100000;

main(){

  double a, b, c, t1, t2;
    int i,j,k,l;
    inicjuj_czas();
  k = -50000;
  for(i=0;i<liczba;i++){
      
      printf("%d ",k+i);

  }
  printf("\n");
    drukuj_czas();
  printf("Czas wykonania %d operacji wejscia/wyjscia: \n",liczba);

  a = 1.000001;
    t1 = czas_zegara;
    t2 = czas_CPU;
    
  for(i=0;i<liczba;i++){

    a = 1.000001*a+0.000001; 
  }
    
    t1 = czas_zegara() - t1;
    t2 = czas_CPU() - t2;
    
  printf("Wynik operacji arytmetycznych: %lf\n", a);
    
  printf("Czas wykonania %d operacji arytmetycznych: \n",liczba);
    printf("Zegar %lf\n", t1);
    printf("CPU %lf\n", t2);
}
