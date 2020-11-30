
//
//  exercise6_13.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_13.h" // 一类邮资
int exercise6_13(void){
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;
    printf("  ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
    printf("%5d $%4.2f\n", ounces, cost / 100.0);
    return 0;
}
