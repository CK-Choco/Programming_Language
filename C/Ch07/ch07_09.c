#include <stdio.h>
#include <stdlib.h>

void ndegree_rec(int);/*���j��ƪ��쫬�ŧi*/

int main(void)
{
	int n;
	printf("�п�Jn��:");
	scanf("%d",&n);/*��J�ҨDn!��n��*/
	printf("%d! = %d\n",n,ndegree_rec(n));
	
	return 0;
}
void ndegree_rec(int n)/*�w�q���j��ƪ��D�D*/
{
	if(n==1)
		return 1;/*���X���а���L�{�����ʤf*/
	else
		return n*ndegree_rec(n-1);/*���а��檺�L�{*/
} 
