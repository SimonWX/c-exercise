//
//  exercise3_3.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/9.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_3.h"
#include <stdio.h>
int exercise3_3(void){
    /* 以十进制、八进制、十六进制打印十进制数100 */
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    /* 【注意：如果要在八进制和十六进制值前显示0和0x前缀，要分别在转换 说明中加入#】 */
    return 0;
}
