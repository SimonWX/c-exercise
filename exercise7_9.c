
//
//  exercise7_9.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise7_9.h" // 使用continue跳过部分循环
int exercise7_9(void){
    const float MIN = 0.0f;
    const float MAX = 100.0f;
    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;
    printf("Enter the first score(q to quit):");
    while (scanf("%f",&score)==1) {
        if(score<MIN || score>MAX){
            printf("%0.1f is an invalid value. Try again:", score);
            continue; // 跳转至while循环的测试条件
        }
        printf("Accepting %0.lf:\n", score);
        min = (score<min)?score:min;
        max=(score>max)?score:max;
        total+=score;
        n++;
        printf("Enter next score (q to quit):");
    }
    if (n>0) {
        printf("Average of %d scores is %0.1f.\n",n,total/n);
        printf("Low = %0.1f, high=%0.1f\n", min,max);
    }else{
        printf("No valid scores were entered.\n");
    }
    return 0;
}
