#include <stdio.h>
#include <stdlib.h>

int main(){
   int i,max=0,min=0,v=0;
   printf("��J10�ӥ��N��:\n");
   scanf("%d",&v);
   max=min=v;
   for (i=2;i<=10;i++){
   	
       scanf("%d",&v);
       if (v>max)
       max=v;
       if (v<min)
       min=v;}
       printf("�̤j���O:%d�A�̤p���O:%d",max,min);
       return 0;
}
