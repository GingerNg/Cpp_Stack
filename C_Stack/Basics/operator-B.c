//导入 stdbool.h 来使用布尔类型
#include <stdbool.h>
#include <stdio.h>
/*
C语言标准(C89)没有定义布尔类型，所以C语言判断真假时以0为假，非0为真
*/

 void char_plus_int(){
    /*
    整数提升是指把小于 int 或 unsigned int 的整数类型转换为 int 或 unsigned int 的过程。
    */
    int  i = 17;
   char c = 'c'; /* ascii 值是 99 */
   int sum;
 
   sum = i + c;
   printf("Value of sum : %d\n", sum );
}
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   c = a + b;
   printf("Line 1 - c 的值是 %d\n", c );
   c = a - b;
   printf("Line 2 - c 的值是 %d\n", c );
   c = a * b;
   printf("Line 3 - c 的值是 %d\n", c );
   c = a / b;
   printf("Line 4 - c 的值是 %d\n", c );
   c = a % b;
   printf("Line 5 - c 的值是 %d\n", c );
   c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   printf("Line 6 - c 的值是 %d\n", c ); // 
   c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
   printf("Line 7 - c 的值是 %d\n", c );


    printf("先运算后赋值：\n");
   a = 10;
   c = ++a; 
   printf("Line 5 - c 的值是 %d\n", c );
   printf("Line 6 - a 的值是 %d\n", a );
   a = 10;
   c = --a; 
   printf("Line 7 - c 的值是 %d\n", c );
   printf("Line 8 - a 的值是 %d\n", a );

   bool flag = false;    //叠乘标记
    if (a==c){
        // printf("1");
        printf("bool is %d",flag);
    }
    printf("\n");
 
    char_plus_int();
}