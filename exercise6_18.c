
//
//  exercise6_18.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_18.h" // 依赖外部循环的嵌套循环
int exercise6_18(void){
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for (row = 0; row < ROWS; row++) {
        for (ch = ('A' + row); ch<('A'+CHARS); ch++) { /* 因为每次迭代都要把row的值与‘A’相加，所以ch在每一行都被初始化为 不同的字符。然而，测试条件并没有改变，所以每行依然是以F结尾，这使 得每一行打印的字符都比上一行少一个。 */ 
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
