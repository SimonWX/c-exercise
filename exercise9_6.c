//
//  exercise9_6.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/20.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise9_6.h"
void up_and_down(int);
int exercise9_6(void){
    up_and_down(1);
    return 0;
}
void up_and_down(int n){
    printf("Level %d: n location %p\n", n, &n); // #1
    if(n<4){
        up_and_down(n+1);
    }
    printf("Level %d: n location %p\n", n, &n); // #2
}
