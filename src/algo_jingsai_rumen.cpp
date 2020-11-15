#include <math.h>
#include <stdio.h>

// C基础

void cTutorial()
{
    // C语言教程
    // https://www.runoob.com/cprogramming/c-tutorial.html

    // C变量

    // 赋值运算符
    int c  = 4;  //  ....000100  -->  ....10000
    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );

    // 指针
    int *p;
    p = NULL;
    if(!p) printf("if 指针变量 %p\n", p);
    p = &c;
    printf("变量c的地址： %p, %p\n", p, &c);

}

void algoJingsaiRumen()
{
    // 算法竞赛入门
    int a, b, n, m;
    a = 340;
    printf("%.8lf\n", 1 + 2 * sqrt(3) / (5 - 0.1));
    printf("%09d\n", a); // 000000345
    printf("%03d\n", a);
    b = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);
    printf("%03d\n", b);

    n = 3;
    m = 4;
    a = (4 * n - m) / 2;
    b = n - a;
    // 分支结构程序
    if (m % 2 == 1 || a < 0 || b < 0)
        printf("No Answer\n");
    else
        printf("%d %d\n", a, b);

    printf("%d\n", 11111 * 11111);
    // 溢出
    printf("%d\n", 111111 * 111111);
    printf("%d\n", 111111111 * 111111111); // warning: integer overflow in expression [-Woverflow]

    /*
    */
    printf("%lf\n", sqrt(-10));

    printf("%g\n", sqrt(-10));

    bool aa, bb, cc, mm, nn;
    bb = true;
    cc = true;
    aa = false;
    printf("%d\n", (aa && bb) || cc); // 1
    printf("%d,%d\n", m, n);
    if (cc)
        if (bb)
            m++;
        else
            n++;
    printf("%d,%d\n", m, n);
    /*
    Cpp基本数据类型
    %lf 表示输出double浮点数
    %p 指针的值
    %g 自动选择合适的表示法

    int  4个字节
    */
    int maxint;
    maxint = 257;
    printf("%d\n", maxint);

    printf("sizeof: %d\n", sizeof(int));  // sizeof 返回long unsigned int？？
}