#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score;
	printf("�п�J�����Ҹզ��Z?");
	scanf("%d",&score);
	
	if (score>=60)
		goto pass;
		/*�����ҦW�٬�pass���{�����O�~�����{��*/
	else
		goto nopass;
		/*�����ҦW�٬�nopass���{�����O�~�����{��*/
	pass:/*pass����*/
		printf("\n���ߧA!���Z�ή�F!\n");
		goto TheEnd;/*�����ҦW�٬�TheEnd���{�����O�~�����{��*/
	nopass:/*nopass����*/
		printf("\n�ܩ�p!���Z���ή��!\n");
	TheEnd:/*TheEnd����*/
		printf("�{�����槹��!\n\n");
	return 0;
}
