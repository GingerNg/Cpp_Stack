#include <stdlib.h>
#include <stdio.h>
#define MAX_BUF_SIZE 100
int main(void)
{
    /*内存释放标志*/
    int flag = 0;
    char * p = (char *)malloc(MAX_BUF_SIZE);
    char *pn;
    if (pn == NULL){
        printf("pn is null");
    }
    if (p == NULL)
    {
        printf("-----");
        /*...*/
    }
    if (flag == 0)
    {
        free(p);
    }
    free(p);
    return 0;
}