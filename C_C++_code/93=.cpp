/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写一个程序，输入一个字符串后再输入2个字符，输出此字符串中从与第一个
      字符匹配的位置开始到与第二个字符匹配的位置之间的所用返回字符指
      针的函数实现。

     例：(括号内为说明)
     输入
     program
     r
     g
     输出
     rog

-------------------------------------------------------*/

#include <stdio.h>
char newstr[80];
int main()
{
        char str[80],c_begin,c_end;
        char *fun(char *p,char c_begin,char c_end);

        scanf("%s",str);
        getchar();
        c_begin=getchar();
        getchar();
        c_end=getchar();
        puts(fun(str,c_begin,c_end));
        while(1);
}

char *fun(char *p,char c_begin,char c_end)
{        
/**********Program**********/
	int i = 0;
	while (*p!=c_begin) p++;
	while (p[i]!=c_end) i++;
	p[i+1]='\0';
	
	return p;
		
/**********  End  **********/

}
/*在运行程序时发现了一个问题，用 VC 6.0 编译 C语言是 总是提示一个错误：
error C2143: syntax error : missing ‘;’ before ‘type’。
解决方法如下：把所有变量的声明放在可执行代码之前。*/

