//
//  exercise4_15.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/15.
//  Copyright © 2020 许浩. All rights reserved.
//

#include "exercise4_15.h"
int exercise4_15(void){
    int age; // 变量
    float assets; // 变量
    char pet[30]; // 字符数组，用于储存字符串
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d%f", &age, &assets); // 这里要使用&
    scanf("%s", pet); // 字符数组不使用&
    printf("%d $%.2f %s\n", age, assets, pet);
    /* scanf()函数使用空白（换行符、制表符和空格）把输入分成多个字段。 在依次把转换说明和字段匹配时跳过空白。注意，上面示例的输入项（粗体 部分是用户的输入）分成了两行。只要在每个输入项之间输入至少一个换行 符、空格或制表符即可，可以在一行或多行输入 */
    
    /* scanf()函数所用的转换说明与printf()函数几乎相同。主要的区别是，对 于float类型和double类型，printf()都使用%f、%e、%E、%g和%G转换说 明。而scanf()只把它们用于float类型，对于double类型时要使用l修饰符。表 4.6列出了C99标准中常用的转换说明。 */
    return 0;
}
