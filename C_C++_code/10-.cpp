/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���20�����������һ�����飬Ȼ������������е�
      ��Сֵ������ȷ����Сֵ���±�Ĳ�����fun������
      ʵ�֣�������ú����Ķ��塣
===>ע������Сֵ�±�
     
------------------------------------------------*/

#include <stdio.h>
#define VSIZE 20     
  
int vector[VSIZE] ;     

int fun(int list[],int size)     
{
  /**********Program**********/
		int i, MIN = 1<<20, ans;
		for (i = 0; i < size; i++) {
			if (list[i]<MIN) {
				MIN = list[i];
				ans = i;
			}	
		}
		return ans;
  /**********  End  **********/     
  
} 

main()     
{     
  int i;     
  for (i=0;i<VSIZE;i++)
  {
    vector[i]=rand();     
    printf("Vector[%d]=%6d\n",i,vector[i]);     
  }     
  i=fun(vector,VSIZE);     
  printf("\nMininum: Vector[%d]=%6d\n",i,vector[i]);

}     



