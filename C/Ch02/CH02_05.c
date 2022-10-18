/*溢位輸出效應*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned short int s1=-1;/*超過無號短整數的下限值*/
	short int s2=32768;/*超過短整數的上限值*/
	
	printf("s1=%d\n",s1);
	printf("s2=%d\n",s2);
	 
	return 0;
}
