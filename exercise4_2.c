//
//  exercise4_2.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/10.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_2.h"
#define PRAISE "You are an extraordinary being."
int exercise4_2(void){ //  使用不同类型的字符串
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    return 0;
}
