//
//  exercise4_4.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_4.h"
#define PI 3.14159  // #define指令还可定义字符和字符串常量。前者使用单引号，后者使用双 引号。
int exercise4_4(void){ // 在比萨饼程序中使用已定义的常量
    float area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumeference = %1.2f, area = %1.2f\n", circum, area); /* 语句中的%1.2f表明，结果被四舍五入为两位小数输出 */
    return 0;
}
