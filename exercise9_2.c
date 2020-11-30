
//
//  exercise9_2.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise9_2.h" // 对9_1的优化
#include <string.h> /* 为strlen()提供原型 */
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch, int num);
int exercise9_2(void){
    int spaces;
    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 12); /* 用符号常量作为参数 */
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS))/2; // 计算要跳过多少个空格
    show_n_char(SPACE, spaces); // 用一个变量作为参数
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
    printf("%s\n", PLACE); // 用一个表达式作为参数
    show_n_char('*', WIDTH);
    putchar('\n');
    return 0;
}
void show_n_char(char ch, int num){
    int count;
    for(count = 1; count <= num; count++){
        putchar(ch);
    }
}
