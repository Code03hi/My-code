#include<stdio.h>
#include<iosjs>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<pthread.h>

void * sample()
{
    printf("Thread sample.\n");
}

int main()
{
    pthread_t tid;
    pthread_create(&tid,NULL,&sample,NULL);
    pthread_join(tid,NULL);
    return 0;
}