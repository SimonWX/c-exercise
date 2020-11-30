
//
//  exercise9_7.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/20.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise9_7.h" // 使用循环和递归计算阶乘
long fact(int n);
long rfact(int n);
int exercise9_7(void){
    int num;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d",&num)==1){
        if(num < 0){
            printf("No negative numbers, please.\n");
        }else if(num > 12){
            /* 测试驱动程序把输入限制在0~12。因为12!已快接近5亿，而13!比62亿 还大，已超过我们系统中long类型能表示的范围。要计算超过12的阶乘，必 须使用能表示更大范围的类型，如double或long long。 */
            printf("Keep input under 13.\n");
        }else{
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("Enter a value in the range 0-12(q to quit):\n");
    }
    printf("Bye.\n");
    return 0;
}
/* 既然用递归和循环来计算都没问题，那么到底应该使用哪一个？一般而 言，选择循环比较好。首先，每次递归都会创建一组变量，所以递归使用的 内存更多，而且每次递归调用都会把创建的一组新变量放在栈中。递归调用 的数量受限于内存空间。其次，由于每次函数调用要花费一定的时间，所以 递归的执行速度较慢。那么，演示这个程序示例的目的是什么？因为尾递归 是递归中最简单的形式，比较容易理解。在某些情况下，不能用简单的循环 代替递归，因此读者还是要好好理解递归。 */
long fact(int n){ // 使用循环的函数
    long ans;
    for(ans = 1; n > 1; n--){
        ans*=n;
    }
    return ans;
}
long rfact(int n){ // 使用递归的函数
    long ans;
    if(n>0){
        ans = n*rfact(n-1);
    }else{
        ans = 1;
    }
    return ans;
}


