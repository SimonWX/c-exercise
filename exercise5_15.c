//
//  exercise5_15.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/23.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_15.h"
int exercise5_15(void){
    void pound(int n); // ANSI函数原型声明
    int times = 5;
    char ch = "!"; // ASCII码是33
    float f = 6.0f;
    pound(times); // int类型的参数
    pound(ch); // 和pound((int)ch);相同
    pound(f); // 和pound((int)f);相同
    return 0;
}
void pound(int n)           // ANSI风格函数头
{
    while (n-- > 0) {
        printf("#");
        printf("\n");
    }
}
