
//
//  exercise9_3.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/20.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise9_3.h" // 找出两个整数中较小的一个
int imin(int, int);
int exercise9_3(void){
    int evil1, evil2;
    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2) {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");
    return 0;
}
int imin(int n, int m){
//    int min;
//    if(n<m){
//        min = n;
//    }else{
//        min = m;
//    }
//    return min;
    return (n<m)?n:m;
}
