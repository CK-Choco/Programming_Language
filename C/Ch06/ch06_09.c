#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,tmp;
	int data[8]={26,35,49,37,12,8,45,63};/*��l���*/ 
	
	printf("��w�ƧǪk:\n��l��Ƭ�:");
	
	for (i=0;i<8;i++)
		printf("%3d",data[i]);/*��X��l��Ƥ��e*/ 
		printf("\n");
		
	for(i=7;i>0;i--)/*���y����*/ 
	{
		for (j=0;j<i;j++)/*����B�洫����*/ 
		{
			for(data[j]>data[j+1])/*����۾F��ơA�p�Ĥ@�Ƹ��j�h�洫*/ 
			{
				tmp=data[i];
				data[j]=data[j+1];/*�洫����*/ 
				data[j+1]=tmp;
			}
		}
	}
	printf("�Ƨǫᵲ�G��:");
	for (i=0;i<8;i++)
		printf("%3d",data[i]);
	printf("\n");
	
	return 0;
}
