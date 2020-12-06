#include <stdio.h>
#include "myheader.h"

/*
ANSI C 定义了许多宏。
在编程中您可以使用这些宏，但是不能直接修改这些预定义的宏。
*/

int main(){

    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    printf("FILE_SIZE in myheader :%d\n", FILE_SIZE );
    
    printf("%d",ADD(1,3));

    return 0;

}