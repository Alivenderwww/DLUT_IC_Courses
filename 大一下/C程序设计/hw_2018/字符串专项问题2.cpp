#include <stdio.h> 
#include <string.h>
#include <conio.h>      /*getch��ͷ�ļ�*/
int main()
{
	char c,d[20];
	int i;
	printf("please input a sentence\n");
	for(i=0;i<5;i++)                         /*����getchar������Ӧ������*/
	{
	c=getchar();
   /*c=getch();*/
	printf("%c",c);                        /*��������ǵȼ۵�*/
	/*putchar(c);*/	                         /*�����Ͽ����ƺ���c�洢��һ����ĸ�������Ҫ��֮ǰ����ĸȫ��������������Ҫ������*/ 
	}
	printf("\n");
	printf("%c",c);                     /*��ϸһ�����ŷ���ֻ�������ַ�������c��*/
	return 0;
}
