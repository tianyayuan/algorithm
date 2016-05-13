//
//  main.c
//  algorithm
//
//  Created by wxl on 5/13/16.
//  Copyright © 2016 wang. All rights reserved.
//


#include<stdio.h>
int gcd(int m,int n){
    while(n!=0)
    {
        int temp=m%n;
        m=n;
        n=temp;
    }
    return m;
}

int miniMultiple(int m,int n){
    int temp=gcd(m,n);
    return m*n/temp;
}

/*  //最大公约数递归描述
int gcd(int m,int n){
    if (m%n==0) {
        return n;
    }else
    return   gcd(n,m%n);
}*/


int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d ",gcd(m,n));
    printf("%d",miniMultiple(m, n));
    return 0;
}