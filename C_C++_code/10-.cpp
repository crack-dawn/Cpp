/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：把20个随机数存入一个数组，然后输出该数组中的
      最小值。其中确定最小值的下标的操作在fun函数中
      实现，请给出该函数的定义。
===>注意求最小值下标
     
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



