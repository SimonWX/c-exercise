//
//  exercise7_10.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise7_10.h" // 使用break推出循环
int exercise7_10(void){
    float length, width;
    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length)==1) {
        printf("Length=%0.2f:\n",length);
        printf("Enter its width:\n");
        if(scanf("%f",&width)!=1){
            break;
        }
        printf("Width=%0.2f:\n",width);
        printf("Area=%0.2f:\n",length*width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");
    return 0;
}
