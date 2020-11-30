//
//  exercise5_13.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/23.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_13.h"
int exercise5_13(void){
    int count, sum;
    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;
        printf("sum = %d\n", sum);
    return 0;
}
