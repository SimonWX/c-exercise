//
//  exercise5_11.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/23.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_11.h" // 前缀和后缀
int exercise5_11(void){
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++; // 后缀递增， 先计算，再递增 使用a的值之后，递增a
    pre_b = ++b; // 前缀递增, 首先递增1，再计算 使用b的值之前，递增b
    printf("a a_post b pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
    return 0;
}
 
