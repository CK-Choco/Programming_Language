#include <conio.h>
#include <stdio.h>
int main()
{
 int c;   
 while(1)
 {
     c=getch();
     if (27==c) 
	 	break;//��Esc��h�X
     if (0==c||0xe0==c) c|=getch()<<8;//�D�r����A�ݭn�I�s2��

  printf("ASCII : %04x!\n",c);//��XASCII�X�ȡA�i�H���D�A��J���䪺���

  if(13<c&&c<255)    //���q���@�Ǧr��
  {
   printf("���� %c!\n",c);
   //break;
   continue;
  }

   switch(c)                   //�o�̥u�O�|�F�W�U���k��A�MTAB��A�ݭn�䥦����A�i�H�ھڤW����X��ASCII�X�ȡA�ۤv�s�W
   {
      case 0x0009:
    printf("TAB ��\n");
    //break;
    continue;
   case 0x48E0:
    printf("��V�W��\n");
    //break;
    continue;
   case 0x4be0:
    printf("��V�k��\n");
    //break;
    continue;
   case 0x4de0:
    printf("��V����\n");
    //break;
    continue;
   case 0x50e0:    
    printf("��V�U��\n");
    //break;
    continue;
   }
 }   
 return 0; 
}
