/*-------------------------------------------------------
��������ơ�
---------------------------------------------------------

��Ŀ�����n������ð�ݷ����򣬰�����С�����˳�����С�

-------------------------------------------------------*/
#define N 5
#include <stdio.h>
int main()
{  
        int  i,j,temp;
        int a[N]; 
        for(j=0;j<N;j++)
                scanf("%d" ,&a[j]);
        printf("\nthe original numbers are:\n");
        for(j=0;j<N;j++)
                printf("%d\t",a[j]);
        printf("\n");

        /**********Program**********/
		for(i=0;i<4;i++){
	        for(j=0;j<5-i;j++){
	            if(a[j]>a[j+1]){
	                temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	            }
	        }
	    }
        /**********  End  **********/

        printf("\nthe  scorted  number: \n");
        for(j=0;j<N;j++)
                printf("%d\t",a[j]);
        printf("\n");
}




