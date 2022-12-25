#include <stdio.h>
#include <stdlib.h>

int main(){
   int i,max=0,min=0,v=0;
   printf("輸入10個任意數:\n");
   scanf("%d",&v);
   max=min=v;
   for (i=2;i<=10;i++){
   	
       scanf("%d",&v);
       if (v>max)
       max=v;
       if (v<min)
       min=v;}
       printf("最大的是:%d，最小的是:%d",max,min);
       return 0;
}
