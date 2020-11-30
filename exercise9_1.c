//
//  exercise9_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise9_1.h" // 创建一个在一行打印40个星号的函数，并在一个打印表头的程序中使用该函
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void starbar(void); // 函数原型
int exercise9_1(void){
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();
    return 0;
}
void starbar(void){ // 定义函数
    int count;
    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}
