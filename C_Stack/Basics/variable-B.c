#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
变量：

基本数据类型
int
float
char:
字符类型由单引号' '包围，字符串由双引号" "包围。

函数：
函数声明告诉编译器函数的名称、返回类型和参数。函数定义提供了函数的实际主体。

函数的调用：
1. 值调用
２. 引用调用　　
*/

int int_B(){
   printf("int 存储大小 : %lu \n", sizeof(int)); //%lu 为 32 位无符号整数
   
   return 0;
}

void char_B(){
    char a = '1';
    putchar(a);
}

/*
浮点类型
*/
int float_B(){
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN ); //%E 为以指数形式输出单、双精度实数
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );
   
   return 0;
}

/*定义两个全局变量*/
int x=1;
int y=2;

int add1()
{
    return x+y;
}

int a;
int b;
int add2()
{
    // 函数内声明变量 x 和 y 为外部变量
    extern int a;
    extern int b;
    // 给外部变量（全局变量）x 和 y 赋值
    a = 1;
    b = 2;
    return a+b+1;
}

int add3(int a,int b){
    return a+b+2;
}


int main(void)
{
    int_B();
    float_B();
    add1();
    int result;
    result = add1();
    printf("add1 为: %d\n",result);
    printf("add2 为: %d\n",add2());
    printf("add３ 为: %d\n",add3(x,y));

    char_B();

    printf("\n");
    int ch1 = 98;
    printf("%c\n",(char) ch1);

    int ch2 = 0;
    printf("%c\n",(char) ch2);

    return 0;
}

