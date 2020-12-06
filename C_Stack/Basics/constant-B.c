#include <stdio.h>
/*
常量：

宏：　　＃define
在 C 语言中，可以采用命令 #define 来定义宏。
该命令允许把一个名称指定成任何所需的文本，例如一个常量值或者一条语句。

枚举：
enum　枚举名　{枚举元素1,枚举元素2,……};
1、先定义枚举类型，再定义枚举变量
2、定义枚举类型的同时定义枚举变量
3、省略枚举名称，直接定义枚举变量
*/
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

typedef unsigned char BYTE;

enum DAY
{
      SUN=0, MON, TUE, WED, THU, FRI, SAT
} day;

void enum_B(){
    // 遍历枚举元素
    for (day = SUN; day <= SAT; day++) {
        printf("枚举元素：%d \n", day);
    }
}
 
void swith_enum_B(){
    enum color { red=1, green, blue };
 
    enum  color favorite_color;
 
    /* ask user to choose color */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    favorite_color = 1;
    // scanf("%e", &favorite_color);
 
    /* 输出结果 */
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case green:
        printf("你喜欢的颜色是绿色");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色");
        break;
    default:
        printf("你没有选择你喜欢的颜色");
    }

}

void typeCast_B(){
    int a = 1;
    enum DAY weekend;
    weekend = ( enum DAY ) a;  //类型转换
    //weekend = a; //错误
    printf("weekend:%d",weekend);
}


int main()
{
   int area;  
   const float PI = 3.14;
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
   printf("value of pi : %f", PI);
    printf("\n");
   printf("Enum\n");
   enum_B();
 
    printf("switch\n");
    swith_enum_B();

    printf("type-cast\n");
    typeCast_B();

   return 0;
}