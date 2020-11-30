//
//  exercise5_4.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_4.h" // 计算1～20的平方
int exercise5_4(void){
    int num = 1;
    while (num < 21){
        printf("%4d%6d\n", num, num*num);
        num = num + 1;
    }
    return 0;
}
