//
//  exercise8_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise8_1.h" // 重复输入(缓冲输入)
int exercise8_1(void){
    char ch;
    while ((ch = getchar())!='#') {
        putchar(ch);
    }
    /* 缓冲分为两类：完全缓冲I/O和行缓冲I/O。完全缓冲输入指的是当缓冲 区被填满时才刷新缓冲区（内容被发送至目的地），通常出现在文件输入 中。缓冲区的大小取决于系统，常见的大小是 512 字节和 4096字节。行缓 冲I/O指的是在出现换行符时刷新缓冲区。键盘输入通常是行缓冲输入，所 以在按下Enter键后才刷新缓冲区。 */
    return 0;
}
