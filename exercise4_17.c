//
//  exercise4_17.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_17.h" // 跳过输入中的前两个整数
int exercise4_17(void){
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d%*d%d", &n); /* 跳过两个整数，把第3个整数拷贝给n。 scanf()中*的用法与此不同。把*放在%和转换字符之间时，会使得 scanf()跳过相应的输出项。*/
    printf("The last integer was %d\n", n);
    return 0;
}

/*
 想把数据打印成列，指定固定字段宽度很有用。因为默认的字段宽度是 待打印数字的宽度，如果同一列中打印的数字位数不同，那么下面的语句：
    printf("%d %d %d\n", val1, val2, val3);
 打印出来的数字可能参差不齐。例如，假设执行3次printf()语句，用户 输入不同的变量，其输出可能是这样：
 12 234 1222
 4 5 23
 22334 2322 10001
 使用足够大的固定字段宽度可以让输出整齐美观。例如，若使用下面的 语句：
    printf("%9d %9d %9d\n", val1, val2, val3);
 上面的输出将变成：
 12    234    1222
 4      5      23
 22334 2322   10001
 在两个转换说明中间插入一个空白字符，可以确保即使一个数字溢出了 自己的字段，下一个数字也不会紧跟该数字一起输出（这样两个数字看起来 像是一个数字）。这是因为格式字符串中的普通字符（包括空格）会被打印 227
 出来。另一方面，如果要在文字中嵌入一个数字，通常指定一个小于或等于该 数字宽度的字段会比较方便。这样，输出数字的宽度正合适，没有不必要的 空白。例如，下面的语句：
    printf("Count Beppo ran %.2f miles in 3 hours.\n", distance);
 其输出如下： Count Beppo ran 10.22 miles in 3 hours.
*/

