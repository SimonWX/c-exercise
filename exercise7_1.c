
//
//  exercise7_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise7_1.h" // 找出0摄氏度以下的天气占总天数的百分比
int exercise7_1(void){
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1) {
        /* while循环的测试条件利用scanf()的返回值来结束循环，因为scanf()在读 到非数字字符时会返回0。temperature的类型是float而不是int，这样程序既可 以接受-2.5这样的值，也可以接受8这样的值。*/
        all_days++;
        if (temperature < FREEZING) {
            cold_days++;
        }
    }
    if (all_days !=0) {
        printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_days/all_days);
        /* 为避免整数除法，该程序示例把计算后的百分比强制转换为 float类 型。其实，也不必使用强制类型转换，因为在表达式100.0 * cold_days / all_days中，将首先对表达式100.0 * cold_days求值，由于C的自动转换类型 规则，乘积会被强制转换成浮点数。但是，使用强制类型转换可以明确表达 转换类型的意图，保护程序免受不同版本编译器的影响 */
    }else{
        printf("No data entered!\n");
    }
    return 0;
}
