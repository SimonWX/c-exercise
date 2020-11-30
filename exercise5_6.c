//
//  exercise5_6.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_6.h" //  divide.c 演示除法
int exercise5_6(void){
    printf("integer division:    5/4     is  %d \n", 5 / 4);
    printf("integer division:    6/3     is  %d \n", 6 / 3);
    printf("integer division:    7/4     is  %d \n", 7 / 4);
    printf("floating division:   7./4.   is  %1.2f \n", 7. / 4.);
    printf("mixed division:      7./4    is  %1.2f \n", 7. / 4); /* 混合类型，即浮点值除以整型值。C相 对其他一些语言而言，在类型管理上比较宽容。尽管如此，一般情况下还是 要避免使用混合类型。 */
    return 0;
    /* 注意，整数除法会截断计算结果的小数部分（丢弃整个小数部分），不会四舍五入结果。混合整数和浮点数计算的结果是浮点数。实际上，计算机不能真正用浮点数除以整数，编译器会把两个运算对象转换成相同的类型。 本例中，在进行除法运算前，整数会被转换成浮点数。
    */
}
