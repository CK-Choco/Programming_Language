#include <stdio.h>
#include <stdlib.h>

void Multiple(int arr[],int);/*���Multiple()���쫬�ŧi*/

int main()
{
	int i,array[6]={11,52,33,41,65,71};
	/*�ŧi�õ����}�C��l��*/
	int n=6;
	
	printf("�I�sMultiple()�e�A�}�C�����e��:");
	for(i=0;i<n;i++)/*�L�X�}�C���e*/
		printf("%d",array[i]);
	
	printf("\n");
	
	Multiple(array,n);/*�I�s���Multiple()*/
	
	printf("�I�sMultiple()��A�}�C�����e��:");
	
	for(i=0;i<n;i++)/*�L�X�}�C���e*/
		printf("%d",array[i]);
	printf("\n");
	
	return 0;
}
void Multiple(int arr[],int n1)/*�w�qMultiple()���*/
{
	int i;
	
	for(i=0;i<n1;i++)
		arr[i]*=2;/*�C�Ӱ}�C������*2*/
} 
