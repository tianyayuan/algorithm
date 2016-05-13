//
//  main.c
//  algorithm
//
//  Created by wxl on 5/13/16.
//  Copyright © 2016 wang. All rights reserved.
//

//因式分解
#include<stdio.h>
int main(){
    int i,n;
    printf("please input n:");
    scanf("%d",&n);
    printf("%d=",n);
    for (i=2; i*i<=n; ) {
        if (n%i==0) {
            printf("%d*",i);
            n/=i;
        }else
            i++;
    }
    printf("%d",n);
    return 0;
}