//
//  exercise4_14.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_14.h"
int exercise4_14(void){ // 打印较长的字符串
    printf("Here's one way to print a"); // 因为第1个字符串没有以\n字符结束，所 以第2个字符串紧跟第1个字符串末尾输出。
    printf("long string.\n");
    printf("Here's another way to print a\
    long string.\n"); /* 用反斜杠（\）和Enter（或Return）键组合来断行。这使得光标 移至下一行，而且字符串中不会包含换行符。其效果是在下一行继续输出。 但是，下一行代码必须和程序清单中的代码一样从最左边开始。如果缩进该 行，比如缩进5个空格，那么这5个空格就会成为字符串的一部分。 */
    printf("Hers's the newest way to print a"
    "long string.\n"); /*ANSI C*/
    return 0;
}
