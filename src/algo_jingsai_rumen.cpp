#include <iostream>  // C++库

#include <math.h>
#include <stdio.h>
#include <string.h>

#define MAX_ARRAY_LENGTH 20

// C 预处理器
#ifndef MESSAGE  // 如果宏没有定义，则返回真
   #define MESSAGE "You wish!"
#endif

// C基础
// 结构体
struct Book
{
char  title[50];
char  author[50];
char  subject[100];
int   book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};  // 定义时指定初始值

void printStruct(Book book)
{
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
}

// 参数化的宏
#define  printMsg(book)  \
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);

#define MAX(x,y) ((x) > (y) ? (x) : (y))

// 共用体
union Data  // 带有多成员的共用体，但是任何时候只能有一个成员带有值。共用体提供了一种使用相同的内存位置的有效方式。
{
   int i;
   float f;
   char  str[20];
};

// 错误处理
#include <errno.h>
extern int errno ;


// 可变参数
#include <stdarg.h>

double average(int num,...)  // num：参数的个数
{
    va_list valist;
    double sum = 0.0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)
    {
       sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);
    return sum/num;
}

void cTutorial()
{
    // C语言教程
    // https://www.runoob.com/cprogramming/c-tutorial.html
    std::cout << "#################C语言教程######################" << std::endl;
    // C变量

    // 内存管理
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = (char *)malloc( 200 * sizeof(char) );
    if( description == NULL )
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy( description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name );
    printf("Description: %s\n", description );
    free(description)

    // 可变参数
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));

    // 错误处理
    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "错误号: %d\n", errno);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
    }
    else
    {
        fclose (pf);
    }

    // 共用体
    union Data data;
    printf( "Memory size occupied by data : %d\n", sizeof(data));

    // 定义别名
    // typedef Book Books;
    std::cout << MAX(1,2) << std::endl;

    // 结构体
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
    struct Book book1;
    strcpy( book1.title, "C Programming");
    strcpy( book1.author, "Nuha Ali");
    strcpy( book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;
    printMsg(book1);
    printStruct(book1);

    struct BookShelf
    {
        int price[50];
        struct Book book;
    } bookShelf;

    char greeting[] = "Hello";
    printf("字符串Greeting message: %s\n", greeting);

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
    // printf("%c\n", &'start-算法竞赛入门');
    std::cout << "####################start-算法竞赛入门##########################" << std::endl;
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
    printf("%.lf\n", 8.0/5.0);
    printf("%.1f\n", 8.0/5.0);
    printf("%.2f\n", 8.0/5.0);

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

    // string ss = { "\0" };
    // printf("%s\n", &ss);


    // printf("%s\n", 'end-算法竞赛入门');
}