//
//  exercise6_12.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_12.h"
int exercise6_12(void){
    int num;
    printf(" n n cubed\n");
    for (num = 1; num <= 20; num++) {
        printf("%5d%5d\n", num,num*num*num);
    }
    return 0;
}
