//
//  exercise3_5.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/9.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_5.h"
#include <stdio.h>
int exercise3_5(void){ // 显示字符的代码编号
    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch); // 用户输入字符
    printf("The code for %c is %d.\n", ch, ch);
    return 0;
}



