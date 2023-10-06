/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：将主函数中输入的字符串反序存放。

===> 例如：输入字符串"abcdefg"，则应输出"gfedcba"。

------------------------------------------------*/
  
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 81
 
void fun(char *str,int n)
{                
/**********Program**********/
 int i;
 for (i = 0; i < n/2; i++) {
	 int temp = str[i];
	 str[i] = str[n-1-i];
	 str[n-1-i] = temp;
 }
/**********  End  **********/
  
}
void main()
{
        char s [N];
        int l;
        printf("input a string:");gets(s);
        l=strlen(s);
        fun(s,l);
        printf("The new string is :");puts(s);
}

