/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ���õݹ麯������x^n (n>=1)��ֵ��
      ����(������Ϊ˵��)
      ����
      2 3        (x=2,n=3)
      ���
      Root = 8.00

-------------------------------------------------------*/
#include <stdio.h>

double fun(int n, double x);

int main()
{
        int n;
        double x, root; 

        scanf("%lf%d", &x,&n);
        root = fun(n, x);
        printf("Root = %0.2f\n", root);
        while(1);
}  

double fun(int n, double x)
{
/**********Program**********/
 
	if (n==0) return 1;
	return x*fun(n-1,x);


/**********  End  **********/
}



