//
//  exercise3_6.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/9.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_6.h" // 可移植整数类型名
#include <stdio.h>
#include <inttypes.h> // 支持可移植类型
int exercise3_6(void){
    int32_t me32; // me32是一个32位有符号整型变量
    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let‘s not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: "); // 程序中使用了\"转义序列来显示双引号
    printf("me32 = %" PRId32 "\n", me32);
    /* 参数PRId32被定义在inttypes.h中的“d”替换，等价于 printf("me16 = %" "d" "\n", me16);
    在C语言中，可以把多个连续的字符串组合成一个字符串，所以这条语句又等价于：printf("me16 = %d\n", me16);  */
    return 0;
}
