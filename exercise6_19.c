//
//  exercise6_19.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_19.h"
#define SIZE 10
#define PAR 72
int exercise6_19(void){
    int index, score[SIZE];
    int sum = 0;
    float average;
    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++) {
        scanf("%d", &score[index]); // 读取10个分数
        /* 于scanf() 会跳过空白字符，所以可以在一行输入10个数字，也可以每行只输入一个数 字，或者像本例这样混合使用空格和换行符隔开每个数字（因为输入是缓冲 的，只有当用户键入Enter键后数字才会被发送给程序）。 */
    }
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++) {
        printf("%5d", score[index]); // 验证输入
    }
    printf("\n");
    for (index=0; index<SIZE; index++) {
        sum += score[index]; // 求总分数
    }
    average = (float)sum/SIZE; // 求平均分
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
    return 0;
};

