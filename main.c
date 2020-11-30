//
//  main.c
//  C-Exercise
//
//  Created by 许浩 on 2020/6/4.
//  Copyright © 2020 许浩. All rights reserved.
//

#include <stdio.h>
#include "exercise2-1.h"
#include "exercise3_1.h"
#include "exercise3_3.h"
#include "exercise3_4.h"
#include "exercise3_5.h"
#include "exercise3_6.h"
#include "exercise3_7.h"
#include "exercise3_8.h"
#include "exercise4_1.h"
#include "exercise4_2.h"
#include "exercise4_4.h"
#include "exercise4_5.h"
#include "exercise4_6.h"
#include "exercise4_7.h"
#include "exercise4_8.h"
#include "exercise4_9.h"
#include "exercise4_10.h"
#include "exercise4_13.h"
#include "exercise4_14.h"
#include "exercise4_15.h"
#include "exercise4_16.h"
#include "exercise4_17.h"
#include "exercise5_1.h"
#include "exercise5_2.h"
#include "exercise5_3.h"
#include "exercise5_4.h"
#include "exercise5_5.h"
#include "exercise5_6.h"
#include "exercise5_7.h"
#include "exercise5_8.h"
#include "exercise5_9.h"
#include "exercise5_10.h"
#include "exercise5_11.h"
#include "exercise5_13.h"
#include "exercise5_14.h"
#include "exercise5_15.h"
#include "exercise5_16.h"
#include "exercise6_1.h"
#include "exercise6_5.h"
#include "exercise6_11.h"
#include "exercise6_12.h"
#include "exercise6_13.h"
#include "exercise6_14.h"
#include "exercise6_15.h"
#include "exercise6_16.h"
#include "exercise6_17.h"
#include "exercise6_18.h"
#include "exercise6_19.h"
#include "exercise6_20.h"
#include "exercise7_1.h"
#include "exercise7_2.h"
#include "exercise7_3.h"
#include "exercise7_5.h"
#include "exercise7_7.h"
#include "exercise7_9.h"
#include "exercise7_10.h"
#include "exercise7_11.h"
#include "exercise7_12.h"
#include "exercise8_1.h"
#include "exercise8_2.h"
#include "exercise8_3.h"
#include "exercise9_1.h"
#include "exercise9_2.h"
#include "exercise9_3.h"
#include "exercise9_6.h"
#include "exercise9_7.h"
#include "exercise9_8.h"
int main(void){
//    exercise2_1();
//    exercise3_1();
//    exercise3_3(); // 以十进制、八进制、十六进制打印十进制数100
//    exercise3_4(); // 更多printf特性
//    exercise3_5(); // 显示字符的代码编号
//    exercise3_6(); // 可移植整数类型名
//    exercise3_7(); // 以两种方式显示float类型的值
//    exercise3_8(); // 打印类型大小
//    exercise4_1(); // 演示与用户交互
//    exercise4_2(); // 使用不同类型的字符串
//    exercise4_4(); // 在比萨饼程序中使用已定义的常量
//    exercise4_5(); // 使用limit.h和float头文件中定义的明示常量
//    exercise4_6(); // 使用转换说明
//    exercise4_7(); // 字段宽度
//    exercise4_8(); // 一些浮点型修饰符的组合
//    exercise4_9(); // 演示一些格式标记
//    exercise4_10(); // 字符串格式
//    exercise4_13(); //  printf()的返回值
//    exercise4_14(); // 打印较长的字符串
//    exercise4_15(); // 何时使用&
//    exercise4_16(); // 使用变宽输出字段
//    exercise4_17(); // 跳过输入中的前两个整数
//    exercise5_1(); // 把鞋码转换成英寸
//    exercise5_2(); // 计算多个不同鞋码对应的脚长
//    exercise5_3(); // 高尔夫锦标赛记分卡
//    exercise5_4(); // 计算1～20的平方
//    exercise5_5(); // 指数增长
//    exercise5_6(); // 演示除法
//    exercise5_7(); // 优先级测试
//    exercise5_8(); // 使用sizeof运算符
//    exercise5_9(); // 把秒数转换成分和秒(取模预算)
//    exercise5_10(); // 递增：前缀和后缀
//    exercise5_11(); // 递增：前缀和后缀
//    exercise5_13(); // 几种常见的画语句
//    exercise5_14(); // 自动类型转换
//    exercise5_15(); // 定义一个带一个参数的函数
//    exercise5_16(); // A useful program for runners
//    exercise6_1(); // 根据用户键入的整数求和
//    exercise6_5(); // 浮点数比较
//    exercise6_11(); // 使用for循环的计数循环
//    exercise6_12(); // 使用for循环创建一个立方表
//    exercise6_13(); // 一类邮资
//    exercise6_14(); // 求序列的和
//    exercise6_15(); // 出口条件循环（do...while）
//    exercise6_16(); // 出口条件循环（while）
//    exercise6_17(); // 使用嵌套循环
//    exercise6_18(); // 依赖外部循环的嵌套循环
//    exercise6_19(); // 使用循环处理数组
//    exercise6_20(); // 计算数的整数幂
//    exercise7_1(); // 找出0摄氏度以下的天气占总天数的百分比
//    exercise7_2(); // 更改输入，空格不变
//    exercise7_3(); // 替换输入的字母，非字母字符保持不变
//    exercise7_5(); // 使用嵌套if语句显示一个数的约数
//    exercise7_7(); // 统计字符数、单词数、行数
//    exercise7_9(); // 使用continue跳过部分循环
//    exercise7_10(); // 使用break推出循环
//    exercise7_11(); // 使用switch语句
//    exercise7_12(); // 使用多重标签的switch
//    exercise8_1(); // 重复输入
//    exercise8_2(); // 重复输入,直到文件结尾
//    exercise8_3(); // 打开一个文件并显示该文件
//    exercise9_1(); /* 创建一个在一行打印40个星号的函数，并在一个打印表头的程序中使用该函 */
//    exercise9_2(); // 优化9_1
//    exercise9_3(); // 找出两个整数中较小的一个
//    exercise9_6(); // 递归
//    exercise9_7(); // 使用循环和递归计算阶乘
    exercise9_8(); // 以二进制形式打印制整数
    return 0;
}



/* example： 2 */
//#include <stdio.h>
//
//// 函数外定义变量 x 和 y
//int x;
//int y;
//int addtwonum()
//{
//    // 函数内声明变量 x 和 y 为外部变量
//    extern int x;
//    extern int y;
//    // 给外部变量（全局变量）x 和 y 赋值
//    x = 1;
//    y = 2;
//    return x+y;
//}
//
//int main()
//{
//    int result;
//    // 调用函数 addtwonum
//    result = addtwonum();
//
//    printf("result 为: %d \n",result);
//    return 0;
//}

/* example： 3 */
//#include <stdio.h>
//
//int main()
//{
//   const int  LENGTH = 10;
//   const int  WIDTH  = 5;
//   const char NEWLINE = '\n';
//   int area;
//
//   area = LENGTH * WIDTH;
//   printf("value of area : %d", area);
//   printf("%c", NEWLINE);
//
//   return 0;
//}

/* example：4  */
//#include <stdio.h>
///* 函数声明 */
//int max(int num1, int num2);
//int main () {
//    /* 局部变量定义 */
//    int a = 100;
//    int b = 200;
//    int ret;
//    /* 调用函数来获取最大值 */
//    ret = max(a, b);
//
//    printf("Max value is : %d \n", ret);
//
//    return 0;
//}
//
///* 函数返回两个数中较大的那个数 */
//int max(int num1, int num2)
//{
//    /* 局部变量声明 */
//    int result;
//    if(num1 > num2)
//        result = num1;
//    else
//        result = num2;
//    return result;
//}

/* example: 5 作用域规则  */
//#include <stdio.h>
//// 全局变量声明
//int a = 20;
//
//int main ()
//{
//    // 在主函数中的局部变量声明
//    int a = 10;
//    int b = 20;
//    int c = 0;
//    int sum(int, int);
//
//    printf("value of a in main() = %d\n", a);
//    c = sum(a,b);
//    printf("value of c in main() = %d\n", c);
//    return 0;
//}
//
//int sum(int a, int b)
//{
//    printf("value of a in sum() = %d\n", a);
//    printf("value of b in sum() = %d\n", b);
//    return a + b;
//}

/* example: 6  数组*/
//#include <stdio.h>
//int main()
//{
//    int n[10]; // n是一个包含10个整数的数组
//    int i,j;
//    // 初始化数组元素
//    for (i=0; i<10; i++) {
//        n[i] = i + 100; // 设置元素i为i+100
//    }
//    // 输出数组中的每个元素z的值
//    for(j=0; j<10; j++){
//        printf("Element[%d] = %d\n", j, n[j]);
//    }
//    return 0;
//}

/* example: 7 枚举（enum） */
/* 枚举是C语言中一种基本数据类型，它可以让数据更加简洁易读
 enum 枚举名 {枚举元素1，枚举元素2，......};
*/

/* C指针
 每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算法访问的地址，它表示了在内存中的一个地址。*/
/* example：7 C指针 */
//#include <stdio.h>
//int main()
//{
//    int var1;
//    char var2[10];
//    printf("var1 变量的地址：%p\n", &var1);
//    printf("var2 变量的地址：%p\n", &var2);
//    return 0;
//}

/*指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，必须在使用指针存储其他变量地址之前，对其进行声明，指针变量声明的一般形式为：
type *var-name;  type 是指针的基类型，它必须是一个有效的 C 数据类型，var-name 是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。但是，在这个语句中，星号是用来指定一个变量是指针
 不同数据类型的指针之间唯一不同是，指针所指向的变量或常量的数据类型不同

 */

/* example: 8  如何使用指针*/
//#include <stdio.h>
//int main(){
//    int var = 20; // 实际变量的声明
//    int *ip; // 指针变量的声明
//    ip = &var; // 在指针变量中存储var的地址
//    printf("Address of var variable: %p\n", &var);
//    // 在指针变量中存储的地址
//    printf("Address stored in ip variable: %p\n", ip);
//    // 使用指针访问值
//    printf("Value of *ip variable: %d\n", *ip);
//    return 0;
//}

/* example: 9 NULL指针 */
//#include <stdio.h>
//int main(){
//    int *ptr = NULL;
//    printf("ptr 的地址是%p\n", ptr);
//    return 0;
//}


/*
 C 标识符是用来标识变量、函数，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。
 C 标识符内不允许出现标点字符，比如 @、$ 和 %。C 是区分大小写的编程语言。因此，在 C 中，Manpower 和 manpower 是两个不同的标识符
*/

/*
 保留字不能作为常量名、变量名或其他标识符名称。
 auto    声明自动变量
 break    跳出当前循环
 case    开关语句分支
 char    声明字符型变量或函数返回值类型
 const    定义常量，如果一个变量被 const 修饰，那么它的值就不能再被改变
 continue    结束当前循环，开始下一轮循环
 default    开关语句中的"其它"分支
 do    循环语句的循环体
 double    声明双精度浮点型变量或函数返回值类型
 else    条件语句否定分支（与 if 连用）
 enum    声明枚举类型
 extern    声明变量或函数是在其它文件或本文件的其他位置定义
 float    声明浮点型变量或函数返回值类型
 for    一种循环语句
 goto    无条件跳转语句
 if    条件语句
 int    声明整型变量或函数
 long    声明长整型变量或函数返回值类型
 register    声明寄存器变量
 return    子程序返回语句（可以带参数，也可不带参数）
 short    声明短整型变量或函数
 signed    声明有符号类型变量或函数
 sizeof    计算数据类型或变量长度（即所占字节数）
 static    声明静态变量
 struct    声明结构体类型
 switch    用于开关语句
 typedef    用以给数据类型取别名
 unsigned    声明无符号类型变量或函数
 union    声明共用体类型
 void    声明函数无返回值或无参数，声明无类型指针
 volatile    说明变量在程序执行中可被隐含地改变
 while    循环语句的循环条件
*/

/*
 数据类型：
 1、基本类型：
 它们是算术类型，包括两种类型：整数类型和浮点类型。
 2、枚举类型：
 它们也是算术类型，被用来定义在程序中只能赋予其一定的离散整数值的变量。
 3、void 类型：
 类型说明符 void 表明没有可用的值。
 4、派生类型：
 它们包括：指针类型、数组类型、结构类型、共用体类型和函数类型
*/

/*
 规定符
 %d 十进制有符号整数
 %u 十进制无符号整数
 %f 浮点数，十进制计数法
 %s 字符串
 %c 单个字符
 %p 指针的值
 %e 指数形式的浮点数
 %x, %X 无符号以十六进制表示的整数
 %o 无符号以八进制表示的整数
 %g 把输出的值按照 %e 或者 %f 类型中输出长度较小的方式输出
 %p 输出地址符
 %lu 32位无符号整数
 %llu 64位无符号整数
 %% 打印一个百分号
 */

/* ctype.h 头文件中的字符测试函数
    函数名    如果是下列参数时，返回值为真
    isalnum()   字母数字（字母或数字）
    isalpha()   字母
    isblank()    标准的空白字符（空格、水平制表符或换行符）或任何其他本地化指定为空白的字符
    iscntrl()    控制字符，如Ctrl+B
    isdigit()    数字
    isgraph()    除空格之外的任意可打印字符
    islower()    小写字母
    isprint()   可打印字符
    ispunct()    标点符号（除空格或字母数字字符以外的任何可打印字符）
    isspace()    空白字符（空格、换行符、换页符、回车符、垂直制表符、水平制表符或其他本地化定义的 字符）
    isupper()    大写字母
    isxdigit()    十六进制数字符
 
  ctype.h 头文件中的字符映射函数
    函数名        行为
    tolower()    如果参数是大写字符，该函数返回小写字符；否则，返回原始参数
    toupper()    如果参数是小写字符，该函数返回大写字符；否则，返回原始参数
*/

