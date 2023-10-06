/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：分别统计字符串中字母、数字、空格和其他字符出现的
      次数（字符长度小于80）。

-------------------------------------------------------*/
#include <stdio.h>

/*-全局变量，a用于保存字母个数、num用于保存数字个数
b用于保存空格个数、other用于保存其他字符字数*/

int a=0,num=0,b=0,other=0;

int count(char c[])
{
   /**********Program**********/
	int length = 0, i = 0;
	while (c[i]!='\0') {
		length++;
		i++;
	}
	for (i = 0; i < length; i++) {
		if (('A'<=c[i] && c[i]<='Z')||('a'<=c[i] && c[i]<='z')) a++;
		else if ('0'<=c[i] && c[i]<='9') num++;
		else if (c[i]==' ') b++;
		else other++;
	}

  /**********  End  **********/

}

int main()
{
                                
     char ch[80];  
     printf ("input string:"); 
     gets(ch);                                             
     count(ch); 
     printf ("a=%d num=%d b=%d other=%d\n",a,num,b,other);  

}




