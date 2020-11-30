//
//  exercise5_2.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_2.h" // 计算多个不同鞋码对应的脚长
#define ADJUST 7.31 // 字符常量
int exercise5_2(void){
    const double SCALE = 0.333; // const变量
    double shoe, foot;
    printf("Shoe size (men's) foot length\n");
    shoe = 3.0;
    
//    while (shoe < 18.5) {
//        foot = SCALE * shoe + ADJUST;
//        printf("%10.1f %15.2f inches\n", shoe, foot);
//        shoe = shoe + 1.0;
//    }
//    printf("If the shoe fits, wear it.\n");
    
    
    /* 优化 */
//    while (shoe < 18.5) {
//        foot = SCALE * shoe + ADJUST;
//        printf("%10.1f %15.2f inches\n", shoe, foot);
//        ++shoe;
//    }
//    printf("If the shoe fits, wear it.\n");

    
    /* 进阶优化 */
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        ++shoe;
    }
    printf("If the shoe fits, wear it.\n");
    
    return 0;
}
