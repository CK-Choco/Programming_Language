#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Score[5];/*�ŧi��ư}�CScore[5]*/
	int count,Total=0,average=0;/*�ŧi3�Ӿ���ܼ�*/
	
	for(count=0;count<5;count++)/*���� for �j��Ū���ǥͦ��Z*/
	{
		printf("��J�� %d ��ǥͪ�����:",count+1);
		scanf("%d",&Score[count]);/*���J�����Ƽg��}�C*/
		Total+=Score[count];/*��}�C��Ū�����ƭp���`�X*/
	}
	
	average=Total/5;/*�p�⥭������*/
	printf("\n");/*����*/
	printf("�ǥͪ��`��:%d\n",Total);/*��X���Z�`�X*/
	printf("�ǥͪ�����:%d\n",average);/*��X���Z����*/
	
	return 0;
}
