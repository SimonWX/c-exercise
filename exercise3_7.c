//
//  exercise3_7.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise3_7.h"
int exercise3_7(void){ // 以两种方式显示float类型的值
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n", aboat, aboat);
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip); // 打印long double类型要使用%Lf、%Le或%La 转换说明
    return 0;
}
