//
//  exercise5_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_1.h" // 把鞋码转换成英寸
int exercise5_1(void){
#define ADJUST 7.31 // 字符常量,创建符号常量
    const double SCALE = 0.333; // const变量, 限定符创建在程序 运行过程中不可更改的变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
    return 0;
}
