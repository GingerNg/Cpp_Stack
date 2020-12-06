/*
指针：
内存中的一个地址
& 取地址符
* 取内容符 (只能对pointer使用)
*/
#include <stdio.h>
#include <stdlib.h>  

int max(int x, int y)
{
    return x > y ? x : y;
}


void func_pointer(){
    /*
    函数指针
    */
    
    /* p 是函数指针 */
    int (* p)(int, int) = & max; // &可以省略

    int a = 1;
    int b = 2;
    int c = 3;
    int d;

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = p(p(a, b), c); 

    printf("最大的数字是: %d\n", d);
}

// 回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
 
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

void callback_func_B(){
    /*
    回调函数　示例
    */
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    // return 0;

}



void pointer_B(){
    int  var = 20;   /* 实际变量的声明 */
    int  *ip;        /* 指针变量的声明 */
    ip = &var;  /* 在指针变量中存储 var 的地址 */

    char *charp;

    charp = "this is a string";
    printf("charp is %s \n",charp);
    
    int  var1;
    char var2[10];
    var2[0] = 10;
    var2[1] = 100;

    printf("var1 变量的地址： %p\n", &var1  );
    printf("var2 变量的地址： %p\n", &var2  );
    printf("var2 数组的地址： %p\n", var2  );
    printf("var2 所指向的内容： %d\n", *var2); // 数字的第一个元素

    printf("ip 变量的值： %p\n", ip  );
    printf("var 变量的地址： %p\n", &var  );

    printf("ip 所指向的内容： %d\n", *ip  );
    printf("var 的内容： %d\n", var  );
}
 
int main ()
{   

    pointer_B();


   int  *ptr = NULL;
   printf("ptr 的地址是 %p\n", ptr  );

    // 回调函数
    printf("callback-function \n");
    callback_func_B();


    // 函数指针
    printf("pointer-function \n");
    func_pointer();
    return 0;
}