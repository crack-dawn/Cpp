/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写函数，实现将两个字符串连接（不使用库函数strcat）。要求使用指针作为
      函数参数，在主函数中输入两个字符串，调用函数后输出连接后的字符串。

===>例如,输入样例如下:

CTGU
2018

则输出结果为:

CTGU2018

-------------------------------------------------------*/

#include <stdio.h>
void scat(char *s1, char *s2);

int main()
{
   char str1[200];
   char str2[80];

   printf("请输入第1个字符串:");
   gets(str1);
   printf("请输入第2个字符串:");
   gets(str2);
   scat(str1, str2);
   printf("连接后的字符串：%s\n", str1);
   while(1);

}
void scat(char *s1, char *s2) //将s2字符串连接到s1串之后
{
   char *p, *q;

   /**********Program**********/
   p = s1, q = s2;
   while (*p != '\0')
      p++;
   while (*q != '\0')
   {
      *p = *q;
      p++;
      q++;
   }
   *p = '\0';

   /**********  End  **********/
}
/*while(str1[i]!='\0')
      i++;
   while(str1[j]!='\0')
      {
         str1[i]=str2[j];
         i++;
         j++;
      }
  str1[i]='\0';
  printf("\nAfter some  characters string is：%s \n",str1);
}
*/
