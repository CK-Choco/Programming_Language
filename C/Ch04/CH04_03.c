/*���O���馩�^�X*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float cost=0;	/*�ŧi�B�I���ܼ�cost*/ 
	printf("�п�J���O�`���B:");
	scanf("%f",&cost);	/*��J���O���B*/
	
	if(cost>=150000)
		cost=cost*0.8;/*10�U���H�W��8��*/ 
	else if(cost>=50000)
		cost=cost*0.85;/*5�U����10�U������85��*/ 
	else
		cost=cost*0.9;/*5�U���H�U��9��*/ 
	printf("��ڮ��O�`�B:%.1f��\n",cost);
	/*���O���B��X�ɫO�d��p���I��@��*/ 
			
	return 0;
}
