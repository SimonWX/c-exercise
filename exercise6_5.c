//
//  exercise6_5.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_5.h"
#include <math.h>
int exercise6_5(void){
    const double ANSWER = 3.14159;
    double response;
    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");
    return 0;
}
