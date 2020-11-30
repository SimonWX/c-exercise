//
//  exercise6_1.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_1.h"
int exercise6_1(void){
    long num;
    long sum = 0L;  // 把sum初始化为0
    int status;
    printf("Please enter an integer to be summed");
    printf("(q to quit)：");
    status = scanf("%ld", &num);
    while(status == 1){ // == 的意思是“等于”
        sum = sum + num;
        printf("Please enter next integer (q to quit)：");
        status = scanf("%ld", &num);
    }
    
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
