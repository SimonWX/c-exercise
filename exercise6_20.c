//
//  exercise6_20.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_20.h" // 计算数的整数幂
int exercise6_20(void){
    double x, xpow;
    int exp;
    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    /*
        一、输入不同
            %lf：%lf输入数据时要求是float类型。
            %f：%f输入数据时要求是double类型。
        二、输出不同
            %lf：double类型以%lf格式输出数据时不会自动转成%lf格式，会导致输入值错误。
            %f：float类型以%f格式输出数据时会自动转成%f格式，不会导致输入值错误。
        三、精度损失不同
            %lf：单精度数据使用%lf格式会造成精度损失。
            %f：双精度数据使用%f不会造成精度损失。
    */
    while (scanf("%lf%d", &x, &exp) == 2) {
        xpow = power(x, exp); //函数调用
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}

double power(double n, int p){ // 函数定义
    double pow = 1;
    int i;
    for (i = 1; i<=p; i++) {
        pow *= n;
    }
    return pow; // 返回pow的值
}
