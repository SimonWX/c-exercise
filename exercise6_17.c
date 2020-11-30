//
//  exercise6_17.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_17.h"

int exercise6_17(void){ // 使用嵌套循环
    int row;
    char ch;
    for (row = 0; row < ROWS; row++) {
        for (ch = 'A'; ch<('A'+CHARS); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
