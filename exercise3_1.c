//
//  exercise3_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/9.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_1.h"
#include <stdio.h>
int exercise3_1(void){
    float weight; // 你的体重
    float value; // 相等重量的白金价值
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    // 获取用户输入
    scanf("%f", &weight); /* scanf()函数用于读取键盘的输入，&weight告诉 scanf()把输入的值赋给名为 weight 的变量。scanf() 函数使用&符号表明找到 weight变量的地点。 */
    getchar();
    // 假设白金价格时每盎司$1700
    value = 1700 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f \n", value); /* %.2f表示带有2位小数的浮点数 .2用于精确控制输出  指定输出的浮点数只显示小数点后面两位 */
    printf("Your are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    getchar();
    return 0;
}

