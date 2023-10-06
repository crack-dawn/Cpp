/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：请编写函数fun，其功能是：找出一维整型数组元素中最大的值及其所在的下标，并
      通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，n是x中的
      数据个数，max存放最大值，index存放最大值所在元素的下标。

注意：请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入
      你编写的若干语句。

-------------------------------------------------------*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int fun(int a[],int n, int *max, int *d)
{
/**********Program**********/
int i;
*max=a[0];
for(i=0;i<n;i++)
{
	if(a[i]>*max)
	{
		*max=a[i];
		*d=i;
	}
}
/**********  End  **********/
}
int main()
{ 
 
        int i, x[20], max,  index, n=10;
        srand((unsigned)time(NULL));
        for(i=0;i<n;i++)
        {
                x[i]=rand()%50; 
                printf("%4d",x[i]);    /*输出一个随机数组*/
        }
        printf("\n");
        fun(x,n,&max,&index);
        printf("Max=%5d,Index=%4d\n",max,index);
}

