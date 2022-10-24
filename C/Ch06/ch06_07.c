#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Name[5][10]={"John",
					  "Mary",
					  "Wilson",
					  "Candy",
					  "Allen"};/*字串陣列的宣告*/ 
	int i;/*宣告整數變數 i*/
	
	for(i=0;i<5;i++)
		printf("Name[%d]=%s\n",i,Name[i]);/*列印出字串陣列內容*/
	
	printf("\n");
	
	return 0;
}
