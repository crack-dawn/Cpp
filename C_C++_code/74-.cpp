/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：完成n个数的选择排序，按照由小到大的顺序排列。

-------------------------------------------------------*/
#define  N 5
#include <stdio.h>
int main()
{ 
        int a[N],i,j,min,temp;
        printf("please input the ten data:");
        for(i=0;i<N;i++)
          scanf("%d",&a[i]);

        /**********Program**********/
	    for(i=0;i<4;i++){
	        for(j=0;j<5-i;j++){
	            if(a[j]>a[j+1]){
	                int temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	            }
	        }
	    }
        /**********  End  **********/

        printf("the sorted number is :");
        for(i=0;i<N;i++)
             printf("%d  ",a[i]);
        printf("\n");
        return 0;
}



