#include "lab__3_7.h"

#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>

typedef struct {double a; double b; double c;} struktura;

void *procedura(void * arg_wsk){
    struktura *s_wsk = (struktura *) arg_wsk;
    printf("global:\n s_global.a = %lf\n s_global.b = %lf\n s_global.c = %lf\n", s_wsk->a, s_wsk->b, s_wsk->c);
    return(NULL);
}

int main()
{
    pthread_t tid;
    struktura s; s.a=1.11; s.b=3.22; s.c=5.55;
    pthread_create(&tid, NULL, procedura, &s);
    
    pthread_join(tid,NULL);
    pthread_exit(NULL);
}
