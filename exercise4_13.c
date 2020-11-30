//
//  exercise4_13.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_13.h"
int exercise4_13(void){
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);
    return 0;
    /* 程序用rv = printf(...);的形式把printf()的返回值赋给rv。因此，该 语句执行了两项任务：打印信息和给变量赋值。其次，注意计算针对所有字 符数，包括空格和不可见的换行符（\n）。 */
}
