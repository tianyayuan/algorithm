//
//  Fibonacci.c
//  algorithm
//
//  Created by 王鑫磊 on 5/13/16.
//  Copyright © 2016 wang. All rights reserved.

#include<stdio.h>
#include<stdlib.h>
#define N 20
int main(){
    int Fib[N]={0};
    int i;
    Fib[0]=0;
    Fib[1]=1;
    for (i=2; i<N; i++) {
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    for (i=0; i<N; i++) {
        printf("%d",Fib[i]);
    }
    printf("\n");
    return 0;
}