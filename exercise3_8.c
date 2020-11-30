//
//  exercise3_8.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_8.h"
int exercise3_8(void){
    // C99为类型大小提供%zd转换说明
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    /* sizeof是C语言的内置运算符，以字节为单位给出指定类型的大小。C99 和C11提供%zd转换说明匹配sizeof的返回类型[2]。一些不支持C99和C11的 编译器可用%u或%lu代替%zd。 */
    return 0;
}
