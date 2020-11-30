
//
//  exercise7_3.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise7_3.h" // 替换输入的字母，非字母字符保持不变
#include <ctype.h> // 包含isalpha()的函数原型
int exercise7_3(void){
    char ch;
    while ((ch = getchar())!='\n') {
        if(isalpha(ch)) // 如果是一个字符
            putchar(ch+1); // 显示该字符的下一个字符
        else
            putchar(ch); // 原样显示
    }
    putchar(ch); // 显示换行符
    return 0;
}

/*
 
 */