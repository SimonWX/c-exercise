//
//  exercise5_10.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise5_10.h" // 递增：前缀和后缀
int exercise5_10(void){
    int ultra = 0, super = 0;
    while (super < 5) {
        super++; // super = super + 1;
        ++ultra; // ultra = ultra + 1;
        printf("super = %d, ultra = %d \n", super, ultra);
    }
    return 0;
}
