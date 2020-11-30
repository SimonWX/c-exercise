//
//  exercise4_8.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_8.h"
int exercise4_8(void){
    const double RENT = 3852.99; // const变量，const关键字，限定变量为只读
    printf("*%f*\n", RENT); /*字段宽度和小数点后面的 位数均为系统默认设置，即字段宽度是容纳带打印数字所需的位数和小数点 后打印6位数字。*/
    printf("*%e*\n", RENT); /* 默认情况下，编译器在小数点的左侧打印1个数 字，在小数点的右侧打印6个数字。这样打印的数字太多！解决方案是指定 小数点右侧显示的位数，程序中接下来的 4 个例子就是这样做的*/
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT); // 四舍五入
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n",RENT); // 四舍五入，并用E代替了e。
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n", RENT); // %010.2f的第1个0是标记
    return 0;
};
