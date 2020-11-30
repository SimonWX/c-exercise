//
//  exercise4_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_1.h"
#include <stdio.h>
#include <string.h> // 提供strlen()函数的原型
#define DENSITY 62.4 // 人体密度 （单位：磅/立方英尺） 用C预处理器把字符常量DENSITY定义为62.4。
int exercise4_1(void){
    float weight, volume;
    int size, letters;
    char name[40]; // name是一个可容纳40个字符的数组 新特性：用数组（array）储存字符串（character string）
    printf("Hi! What‘s your first name?\n");
    scanf("%s", name); // 使用%s转换说明来处理字符串的输入和输出。
    printf("%s, what's your  weight in pounds?\n", name);
    scanf("%f", &weight); // 注意，在scanf()中， name没有&前缀，而weight有
    size = sizeof name;
    letters = strlen(name); // 用C函数strlen()获取字符串的长度。
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
    return 0;
}
