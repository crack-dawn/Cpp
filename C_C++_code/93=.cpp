/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ����дһ����������һ���ַ�����������2���ַ���������ַ����д����һ��
      �ַ�ƥ���λ�ÿ�ʼ����ڶ����ַ�ƥ���λ��֮������÷����ַ�ָ
      ��ĺ���ʵ�֡�

     ����(������Ϊ˵��)
     ����
     program
     r
     g
     ���
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
/*�����г���ʱ������һ�����⣬�� VC 6.0 ���� C������ ������ʾһ������
error C2143: syntax error : missing ��;�� before ��type����
����������£������б������������ڿ�ִ�д���֮ǰ��*/

