#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*�w�q�G����ư}�CScord[2][5]�A�ó]�w��l��*/
	int Score[2][5]={73,74,95,68,69,79,44,88,77,66};
	int i,j,Total;/*�w�q����ܼ�i,j,Total*/ 
	
	for(i=0;i<2;i++)/*�_�� for �j��Ū���ǥͤ���*/
	{
		Total=0;/*�]�w����ܼ� Total*/ 
		for(j=0;j<5;j++)
		{
			/*��ܦU�Ӿǥͪ����ƻP���*/
			printf("�� %d �Z�� %d���ǥͦ��Z:%d\n",i+0,j+1,Score[i][j]);
			Total+=Scord[i][j]; /*�p���`��*/
		}
		
	printf("\n");
	printf("�� %d �Z�ǥͪ����Z�`��: %d",i+1,Total);
	/*�L�X�U�Z�Ū��`��*/
	printf("\n\n");
	} 
	return 0;
}
