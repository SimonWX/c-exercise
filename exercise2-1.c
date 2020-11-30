//
//  exercise2-1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/9.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise2-1.h"
#include <stdio.h>

int exercise2_1(void){
    int num; /* 定义一个名为num的变量 */
    num = 1; /* 为num赋一个值 */
    printf("I am a simple "); /* 使用printf()函数 */
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);
    getchar(); /* 会让程序等待击键，窗口会在用户按下一个键后才关闭。 */
    return 0;

}
