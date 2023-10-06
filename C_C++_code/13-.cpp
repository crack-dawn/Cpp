/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：统计出若干个学生的平均成绩，最高分以及得最高
      分的人数。


===> 注意:题目中变量Max用来存放最高分,
变量J是统计最高分人数

 例如：输入10名学生的成绩分别为92，87，68，56，92，
      84，67，75，92，66，则输出平均成绩为77.9，
      最高分为92，得最高分的人数为3人。

------------------------------------------------*/

#include <stdio.h>
   
float Max=0;
int J=0;

float fun(float array[],int n)
{
/**********Program**********/
int i;
float sum =0;
for (i = 0; i < n; i++) {
	sum += array[i];
	if (array[i]>Max)
		Max = array[i];
}
while (n--)
	if (array[n-1]==Max)
		J++;
return sum/10;
/**********  End  **********/
}

void main(  )
{
        float  a[10],ave;
        int i=0;
        for(i=0;i<10;i++)
                scanf("%f",&a[i]);
        ave=fun(a,10);
        printf("ave=%f\n",ave);
        printf("max=%f\n",Max);
        printf("Total:%d\n",J);
}

