#include <stdio.h>
#include <string.h>
/*

在 C 语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。
因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
*/

void listString(){
/**< 定义字符串数组， 为一个二维数组，这里的ULL为字符串数组结束标志*/
    char *str_list[] = {"POrigin", "PModelNum", "PName", "PSN", "PDate", "PAddress", "PHWVer", "PSWVer", "PSWDate", "PSWTime", NULL};
    char **ptr = str_list;
    for (int j=0;j<10;j++){
        printf("str_list is %s\n",str_list[j]);
    }
    char *str_dests[10];

    int index=0;
    // for (ptr=str_list;*ptr!=NULL;ptr++){
    //     str_dests[index] = "1212";
    //     index++;
    // }
    for (int j=0;j<10;j++){
        str_dests[index] = str_list[j];  // 复制数组
        // printf("str_dests index is %s",str_dests[j]);
        printf("str_dests index is %s\n",str_dests[index]);
        index++;
    }

    for (ptr=str_list;*ptr!=NULL;ptr++){

        printf("%p,%s\n",ptr,*ptr);
    }

}

void operationOfString(){
    /*
        #include <string.h>
        strcpy/strcat/strlen
    */
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int  len ;

    /* 复制 str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );

    /* 连接 str1 和 str2, 赋值给str1 */
    strcat( str1, str2);
    printf("strcat( str1, str2), str1:   %s\n", str1 );
    printf("strcat( str1, str2), str2:   %s\n", str2 );

    /* 连接后，str1 的总长度, 不包含\0*/
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );

}

 
int main ()
{
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
 
   printf("Greeting message: %s\n", greeting );
 
    operationOfString();

    printf("list string\n");
    listString();
   return 0;
}