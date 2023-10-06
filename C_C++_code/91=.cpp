/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从字符串s中删除指定的字符c。

-------------------------------------------------*/

#include <stdio.h>

void fun(char s[],char c)
{
/**********Program**********/
	int i = 0, j = 0;
	while (s[i]!='\0') {
		
		if (s[i]!=c)
		{
			s[j] = s[i];
			++j;
		}		
				
		i++;
	}
	s[j] = '\0';
/**********  End  **********/
}

int main()
{
        static char str[]="turbo c and borland c++aa";
        char c='a';
        fun(str,c);
        printf("str=%s\n",str);
		while(1);
}

