
//
//  exercise7_2.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise7_2.h" // 更改输入，空格不变
#define SPACE ' ' // SPACE 表示单引号-空格-单引号
int exercise7_2(void){
    char ch;
    /*  一对字符输入/输出函 数：getchar()和putchar()。
        getchar()函数不带任何参数，它从输入队列中返回下一个字符。
            例如， 下面的语句读取下一个字符输入，并把该字符的值赋给变量ch： ch = getchar();
            该语句与下面的语句效果相同： scanf("%c", &ch);
        putchar()函数打印它的参数。
            例如，下面的语句把之前赋给ch的值作为 字符打印出来： putchar(ch);
            该语句与下面的语句效果相同： printf("%c", ch);
        由于这些函数只处理字符，所以它们比更通用的scanf()和printf()函数更 快、更简洁。而且，注意 getchar()和 putchar()不需要转换说明，因为它们只 处理字符。这两个函数通常定义在 stdio.h头文件中 */
    /* 原 */
    ch = getchar(); // 读取一个字符
    while (ch!='\n') { // 当一行未结束时
        if(ch == SPACE) // 留下空格
            putchar(ch); // 该字符不变
        else
            putchar(ch+1); // 改变其他字符
        ch = getchar(); // 获取下一个字符
    }
    
    /* 优化, 有问题 */
//    while ((ch = getchar())!= '\n') {
//        if(ch == SPACE) // 留下空格
//            putchar(ch); // 该字符不变
//        else
//            putchar(ch+1); // 改变其他字符
//        ch = getchar(); // 获取下一个字符
//    }
    

    putchar(ch); // 打印换行符
    return 0;
}
