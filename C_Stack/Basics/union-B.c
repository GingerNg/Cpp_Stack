#include <stdio.h>
#include <string.h>
/*
    union: 泛型？？？
    共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
    共用体占用的内存应足够存储共用体中最大的成员。
*/
 
union Data
{
   int i;
   float f;
   char  str[20];
};

void useUnionSync(){
    printf("Sync");
   union Data data;        
 
   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");
 
   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
}

void useUnionAsync(){
    printf("Async");
    union Data data;        
 
   data.i = 10;
   printf( "data.i : %d\n", data.i);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
}
 
int main( )
{
   union Data data;        
 
   printf( "Memory size occupied by data : %lu\n", sizeof(data));
 
   return 0;
}