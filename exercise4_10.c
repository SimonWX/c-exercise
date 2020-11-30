//
//  exercise4_10.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_10.h" // 字符串格式
#define BLURB "Authentic imitation!"
int exercise4_10(void){
    printf("[%2s]\n", BLURB); /* 虽然第1个转换说明是%2s，但是字段被扩大为可容纳字符串中 的所有字符。还需注意，精度限制了待打印字符的个数。.5告诉printf()只打 印5个字符。另外，-标记使得文本左对齐输出。 */
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    return 0;
}
