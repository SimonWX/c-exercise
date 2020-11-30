//
//  exercise4_7.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_7.h"
#define PAGES 959
int exercise4_7(void){
    printf("*%d*\n", PAGES); // 不带任何修饰符，其对应的输出结果与带整数字段宽 度的转换说明的输出结果相同
    printf("*%2d*\n", PAGES); /* 对应的输出结果应该是2字段宽度。因为待打印的整数有 3 位数字，所以字段宽度自动扩大以符合整数的长度 */
    printf("*%10d*\n", PAGES); /* 第3个转换说明是%10d，其对应的输出结果有10个空格宽 度，实际上在两个星号之间有7个空格和3位数字，并且数字位于字段的右侧 */
    printf("*%-10d*\n", PAGES); /* 转换说明是%-10d，其对应的输出结果同样是10个空格宽度，-标记说明打印的数字位于字段的左侧 */ 
    return 0;
}
