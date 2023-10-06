/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写函数，要求输入一行字符，统计其中大写字母、小写字母、数字的个数。
     （用指针作为函数参数）。

-------------------------------------------------------*/
#include <stdio.h>
#define N 200

void shaixuan(char str[])
{
        int i;
        int da = 0, xiao = 0, num = 0, others = 0;

        /**********Program**********/
        for (i = 0; str[i] != '\0'; i++)
        {
                if ('a' <= str[i] && str[i] <= 'z')
                {
                        xiao++;
                }
                else if ('A' <= str[i] && str[i] <= 'Z')
                {
                        da++;
                }
                else if ('0' <= str[i] && str[i] <= '9')
                {
                        num++;
                }
                else
                {
                        others++;
                }
        }
        printf("\"%d\"-\"%d\"-\"%d\"-\"%d\"", da, xiao, num, others);
        /**********  End  **********/
}


int main()
{
        char str[200];

        scanf( "%s", str);

        shaixuan( str );

        getchar();
        getchar();
        // getchar();
        // getchar();
}
