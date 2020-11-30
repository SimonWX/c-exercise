//
//  exercise4_6.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_6.h"
#define PI 3.141593
int exercise4_6(void){ // 使用转换说明(%d, %f, %c) (%% 打印一个百分号)
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    printf("The %d contestants ate %f berry pies.\n", number, pies);  // 7名参赛者吃掉了12.75万个浆果派。
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n"); // 告别!你太珍贵，我无法占有
    printf("%c%d\n", '$', 2*cost);
    return 0;
}
