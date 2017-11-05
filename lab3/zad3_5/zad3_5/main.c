#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define WYMIAR 10

int zmienna_wspolna = 0;

void *zadanie_watku (void * arg_wsk)
{
    
    int id;
    id = *((int*)arg_wsk);
    printf("\t ID watku : %d.ID systemowe watku : %d\n",id, pthread_self());
           
   return(NULL);
}

int main(int argc, const char * argv[]) {
    pthread_t watek[WYMIAR];
 //   void *wynik;
    int i;
    for (i = 0;i<WYMIAR;i++)
        pthread_create(&watek[i],NULL,zadanie_watku,&i);
    for (i = 0;i<WYMIAR;i++)
        pthread_join(watek[i], NULL);
    
    pthread_exit(NULL);
    
    return 0;
}


