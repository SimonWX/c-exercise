//
//  exercise9_8.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/20.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise9_8.h" // 以二进制形式打印制整数
void to_binary(unsigned long n);
int exercise9_8(void){
    unsigned long number;
    printf("Enter an integer(q to quit):\n");
    while (scanf("%lu", &number)==1) {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}
// 递归既有优点也有缺点。优点是递归为某些编程问题提供了最简单的解 决方案。缺点是一些递归算法会快速消耗计算机的内存资源
void to_binary(unsigned long n){ // 递归函数
    int r;
    r = n % 2;
    if(n>=2){
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
    return;
}
