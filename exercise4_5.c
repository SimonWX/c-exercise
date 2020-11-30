//
//  exercise4_5.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_5.h" /* 使用limit.h和float头文件中定义的明示常量 */
#include <limits.h> // 整型限制
#include <float.h> // 浮点型限制
int exercise4_5(void){
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX); // 如果系统使用4字节的int，limits.h头文件会提供符合4字节int的 INT_MAX和INT_MIN
    printf("Smallest long long: %lld\n", LLONG_MIN); // long long 类型的最小值
    printf("One byte = %d bits on this system.\n", CHAR_BIT); // char类型的位数
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN); // 保留全部精度的float类型最小整数
    printf("float precision = %d digits\n", FLT_DIG); // float类型的最少有效数字位数(十进制)
    printf("float epsilon = %e\n", FLT_EPSILON); // 1.00和比1.00大的最小float类型值之间的差值
    return 0;
}
