
//
//  exercise6_15.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/16.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise6_15.h" // 出口条件循环
int exercise6_15(void){
    const int secret_code = 13;
    int code_entered;
    do{
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You ar cured!\n");
    return 0;
}
