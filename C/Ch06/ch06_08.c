#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[3][10];/*�ŧi�x�s�m�W���r��}�C*/
	int score[3][3];/*�ŧi�x�s���Z����ƤG���}�C*/
	int i,total;/*�ŧi����ܼ� total*/
	
	for(i=0;i<3;i++)
	{
		printf("�п�J�� %d��ǥͩm�W�ΤT�즨�Z:",i+1);
		scanf("%s",&name[i]);/*��J�ǥͩʦW*/ 
		scanf("%d %d %d",&score[i][0],&score[i][1],&score[i][2]);
		/*��J�T�즨�Z*/ 
	}
	printf("--------------------\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d",name[i],score[i][0],score[i][1],score[i][2]);
		total=score[i][0]+score[i][1]+score[i][2];
		printf("\t%d\n",total)/*��X�T�쪺�`��*/
	}
	printf("--------------------\n");
	
	return 0;
}
