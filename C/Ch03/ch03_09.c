/*���A�ഫ��@*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=3;		/*�w�q����ܼ�i,�]�w���*/
	float f=100.2F;	/*�w�q�B�I��f,�]�w���*/ 
	double d=200.2;	/*�w�q����ׯB�I���ܼ�d,�]�w���*/ 
	
	printf("i(���)=%d\n",i);
	printf("f(���ׯB�I��)=%d\n",f);
	printf("d(����ׯB�I��)=%d\n",d);
	f=f/i;/*���k�B��*/
	printf("f/i=%f\n",f);
	d=d/i;/*���k�B��*/
	printf("d/i=%f\n",d);
	i=f+d;/*�[�k�B�⵲�G�ഫ��int���A�A�s�J�ܼ�i*/
	printf("i(���)=f+d=%d\n",i);
	 
	return 0;
}
