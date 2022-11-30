#include <stdio.h>
#include <stdlib.h>

void Multiple(int arr[],int);/*函數Multiple()的原型宣告*/

int main()
{
	int i,array[6]={11,52,33,41,65,71};
	/*宣告並給予陣列初始值*/
	int n=6;
	
	printf("呼叫Multiple()前，陣列的內容為:");
	for(i=0;i<n;i++)/*印出陣列內容*/
		printf("%d",array[i]);
	
	printf("\n");
	
	Multiple(array,n);/*呼叫函數Multiple()*/
	
	printf("呼叫Multiple()後，陣列的內容為:");
	
	for(i=0;i<n;i++)/*印出陣列內容*/
		printf("%d",array[i]);
	printf("\n");
	
	return 0;
}
void Multiple(int arr[],int n1)/*定義Multiple()函數*/
{
	int i;
	
	for(i=0;i<n1;i++)
		arr[i]*=2;/*每個陣列元素值*2*/
} 
