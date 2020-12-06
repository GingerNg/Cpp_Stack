 #include <stdio.h>
int main()
{
    int i;
    int d[5] = {10,20,34,89,90};
	//指针指向一维数组，指针指向数组首元素
       //数据类型 *指针名;
	int *p = d;
	//int *p = &d[0];

	//指针指向数组首元素。指针名可以当数组名使用


		printf("%p\n",p);
		printf("%d\n",d[0]);
		printf("%d\n",*++p); //++p p的地址先偏移， *p
		printf("%d\n",d[1]);
		printf("%p\n",p);
		printf("%p\n",&d[1]);

	printf("请输入数组d元素的值：");

	p = d;
	for(i = 0; i < 5; i++)
	{
		//scanf("%d",p+i);  //p+0 p+1 p+2 p+3
	     scanf("%d",p++);  //p = p+1
	}
	//for循环结束，p偏移到元素d[4]的下一个元素
	p = &d[0];
	for(i = 0; i < 5; i++)
	{
		//printf("%d ",*(p+i));
		//printf("%d ",*p++);  //p++,后置  *p取p变化之前的内容
		printf("%d ",p[i]);  //指针指向数组首元素。指针名可以当数组名使用
	}
	printf("\n-----------------\n");


    return 0;
}
