//
//  exercise4_16.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_16.h" // 使用变宽输出字段
int exercise4_16(void){
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d\n", width, number); /* 变量width提供字段宽度，number是待打印的数字, 因为转换说明中*在 d的前面，所以在printf()的参数列表中，width在number的前面。 */
    printf("Now enter a width and a precision:\n");
    scanf("%d%d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight); /* width 和precision提供打印weight的格式化信息 scanf()中*的用法与此不同。把*放在%和转换字符之间时，会使得 scanf()跳过相应的输出项 */ 
    printf("Done!\n");
    return 0;
}
