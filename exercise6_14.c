//
//  exercise6_14.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_14.h"
int exercise6_14(void){
    int t_ct; // 项计数
    double time, power_of_2;
    int limit;
    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for(time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0){
        time += 1.0 / power_of_2;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }
    
    return 0;
}
