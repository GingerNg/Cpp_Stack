#include <stdio.h>
#include <string.h>


struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456}; //　定义时即初始化
 

//也可以用typedef创建新类型
typedef struct 
{
    int a;
    char b[2];
    double c; 
} SIMPLE;

//现在可以用SIMPLE作为类型声明新的结构体变量
SIMPLE u1, u2[20], *u3;


void struct_B(){
    // 声明一个实例
    struct Books book1;
    strcpy(book1.author,"12");
    strcpy(book1.subject,"23");
    book1.book_id = 111;
    strcpy(book1.title,"34");

       /* 输出 book1 信息 */
   printf( "Book 1 title : %s\n", book1.title);
   printf( "Book 1 author : %s\n", book1.author);
   printf( "Book 1 subject : %s\n", book1.subject);
   printf( "Book 1 book_id : %d\n", book1.book_id);
}

// typeof 别名
// 结构体嵌套
typedef struct {
    char s[100];
    int ss;
    SIMPLE sss;
} NestBooks;

void nest_struct(){

    SIMPLE simple;
    simple.a = 100;
    strcpy(simple.b,"1");
    // simple.b = '1';
    simple.c = 2.0;
    
    NestBooks nestbooks;
    strcpy(nestbooks.s,"12121");
    nestbooks.ss = 122;
    nestbooks.sss = simple;
    printf("nestbook a is %d",nestbooks.sss.a);

}   


int main()
{    
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
    struct_B();

    nest_struct();
}