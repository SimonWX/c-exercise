//
//  exercise5_8.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_8.h" // 使用sizeof运算符
int exercise5_8(void){
    /* 使用C99新增的%zd转换说明 -- 如果编译器不支持%zd，请将其改 成%u或%lu */
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
           n, sizeof n, intsize);
    /* C 语言规定，sizeof 返回 size_t 类型的值。这是一个无符号整数类型， 但它不是新类型。前面介绍过，size_t是语言定义的标准类型。C有一个 typedef机制（第14章再详细介绍），允许程序员为现有类型创建别名。例 如，
     typedef double real;
     这样，real就是double的别名。现在，可以声明一个real类型的变量： real deal; // 使用typedef */
    
    /* C99 做了进一步调整，新增了%zd 转换说明用于 printf()显示 size_t 类型 的值。如果系统不支持%zd，可使用%u或%lu代替%zd。  */
    return 0;
}
