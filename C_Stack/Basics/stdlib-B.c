#include <stdio.h>

void ctype_B(){

}

/*

*/

#include <string.h>
void stringh_B(){
    /*
    头文件 string.h 中定义的函数：
    */


   /*
   void *memcpy(void *dest, const void *src, size_t n)
    从 src 复制 n 个字符到 dest。
   */
    char diff[100] = "123456";
   char src[100] = "123457";
   char dest[100];
   memcpy(dest,src,3);
   printf("%s and  %s\n",src,dest);
    printf("len of src is   %ld\n",strlen(src));

    /*
    void *memchr(const void *str, int c, size_t n)
    在参数 str 所指向的字符串的前 n 个字节中搜索第一次出现字符 c（一个无符号字符）的位置
    该函数返回一个指向匹配字节的指针，如果在给定的内存区域未出现字符，则返回 NULL。
    */
   char *pos;
   pos = memchr(src,2,strlen(src));
   printf("position is %s\n",pos);

   printf("len is %lu\n",strlen(src));
   

    // 把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
    printf("diff %d\n",strcmp(diff,src));

    /*
    char *strtok(char s[], const char *delim);
    */
   printf("src is %s\n",src);


   char input[16]="abc,d";
   printf("len of input is %lu\n",strlen(input));  // 5
    char *p;
    p = strtok(input,",");  // 3
    printf("len of input is %lu\n",strlen(input));

    // printf("%s\n",p);
    // if(p)
    //     printf("%s\n",p);
    
    for (int i = 0; i < 10; i++)
   {
      printf("Value of var[%d] = (%d,%d)\n", i, p[i],input[i] );
   }

}

int main(){
    stringh_B();
    return 0;
}