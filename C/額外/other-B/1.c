#include <conio.h>
#include <stdio.h>
int main()
{
 int c;   
 while(1)
 {
     c=getch();
     if (27==c) 
	 	break;//按Esc鍵退出
     if (0==c||0xe0==c) c|=getch()<<8;//非字元鍵，需要呼叫2次

  printf("ASCII : %04x!\n",c);//輸出ASCII碼值，可以知道你輸入的鍵的鍵值

  if(13<c&&c<255)    //普通的一些字元
  {
   printf("按鍵 %c!\n",c);
   //break;
   continue;
  }

   switch(c)                   //這裡只是舉了上下左右鍵，和TAB鍵，需要其它的鍵，可以根據上面輸出的ASCII碼值，自己新增
   {
      case 0x0009:
    printf("TAB 鍵\n");
    //break;
    continue;
   case 0x48E0:
    printf("方向上鍵\n");
    //break;
    continue;
   case 0x4be0:
    printf("方向右鍵\n");
    //break;
    continue;
   case 0x4de0:
    printf("方向左鍵\n");
    //break;
    continue;
   case 0x50e0:    
    printf("方向下鍵\n");
    //break;
    continue;
   }
 }   
 return 0; 
}
