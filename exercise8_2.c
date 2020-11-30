//
//  exercise8_2.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise8_2.h" // 重复输入,直到文件结尾
#define EOF (-1)
int exercise8_2(void){
    int ch;
    /* 不用定义EOF，因为stdio.h中已经定义过了。 不用担心EOF的实际值，因为EOF在stdio.h中用#define预处理指令定 义，可直接使用，不必再编写代码假定EOF为某值。 */
    /* 变量ch的类型从char变为int，因为char类型的变量只能表示0～255的无 符号整数，但是EOF的值是-1。还好，getchar()函数实际返回值的类型是 int，所以它可以读取EOF字符。如果实现使用有符号的char类型，也可以把 ch声明为char类型，但最好还是用更通用的形式。 由于getchar()函数的返回类型是int，如果把get */
    while ((ch = getchar())!= EOF) {
        putchar(ch);
    }
    /* 每次按下Enter键，系统便会处理缓冲区中储存的字符，并在下一行打 印该输入行的副本。这个过程一直持续到以UNIX风格模拟文件结尾（按下 507
    Ctrl+D）。在PC中，要按下Ctrl+Z。 */
    return 0;
}
