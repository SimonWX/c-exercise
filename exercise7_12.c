//
//  exercise7_12.c
//  C-Exercise
//
//  Created by 许浩 on 2020/7/17.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise7_12.h"
int exercise7_12(void){
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;
    a_ct = e_ct = i_ct = o_ct = u_ct = 0;
    printf("Enter some text;enter # to quit.\n");
    while ((ch=getchar())!='#') {
        switch (ch) {
            case 'a':
            case 'A':
                a_ct++;
                break;
            case 'e':
            case 'E':
                e_ct++;
                break;
            case 'i':
            case 'I':
                i_ct++;
                break;
            case 'o':
            case 'O':
                o_ct++;
                break;
            case 'u':
            case 'U':
                u_ct++;
                break;
            default:
                break;
            /* 如果使用ctype.h系列的toupper()函数（参见表7.2）可以避免 使用多重标签，在进行测试之前就把字母转换成大写字母：
            或者，也可以先不转换ch，把toupper(ch)放进switch的测试条件中： switch(toupper(ch))。
             */
        }
    }
    printf("number of vowels: A E I O U\n");
    printf("                 %4d%4d%4d%4d%4d\n", a_ct,e_ct,i_ct,o_ct,u_ct);
    return 0;
}
