#include <stdio.h>
/*
	序列:0,1,2,3,4...n-1
	n　表示当前序列长度
	ｆ[n] 胜利者的编号
	f[1] = 0
	(f[n-1]+m)%n
*/

void whoWin()
    // 求出最后的胜利者的序号
{
    int n, m, i, s = 0;
    printf ("N M = ");
    scanf("%d%d", &n, &m);
    for (i = 2; i <= n; i++)
    {
        s = (s + m) % i;
        printf("%d\n",s);
    }
    printf ("\nThe winner is %d\n", s+1);
}

void newSeq()
{

}

int main()
{
    whoWin();
}
