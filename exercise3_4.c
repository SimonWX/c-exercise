//
//  exercise3_4.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/9.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_4.h"
#include <stdio.h>
int exercise3_4(void){ // 更多printf特性
    /* 在使用 printf()函数时，切记检查每个待打印值都有对应的转换说明， 还要检查转换说明的类型是否与待打印值的类型相匹配。 */
    unsigned int un = 300000000; // int为32位和short为16位的系统
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un = %u\n", un);
    printf("end = %hd and %d\n", end, end); /* 对于short类型的变量end，在printf()中无论指定以short类型 （%hd）还是int类型（%d）打印，打印出来的值都相同。这是因为在给函 数传递参数时，C编译器把short类型的值自动转换成int类型的值。你可能会 提出疑问：为什么要进行转换？h修饰符有什么用？第1个问题的答案是， int类型被认为是计算机处理整数类型时最高效的类型。因此，在short和int类 型的大小不同的计算机中，用int类型的参数传递速度更快。第2个问题的答 案是，使用h修饰符可以显示较大整数被截断成 short 类型值的情况。 */
    printf("big = %ld\n", big);
    printf("verybig = %lld\n", verybig);
    return 0;
}
