#include <stdio.h>
#include <string.h> 
#define n 10
int main()
{
	char c[10];
	int i;
	printf("������\n");
	scanf("%s",c);            /*scanf�������Ҫ�õ�%s�Ļ������ü�&*/
	/*printf("%s\n",c);*/
	for(i=0;i<10;i++)       /*Сдת���ɴ�д,��дת����Сд*/
	{
		if(c[i]>='a'&&c[i]<='z')
		c[i]=c[i]-32;
		else if(c[i]>='A'&&c[i]<='Z')
		c[i]=c[i]+32;
		/*else 
		c[i]=c[i];*/
	}
	for(i=0;i<n;i++)              /*��βΪʲô�����һ���������أ�*/
	{
	/*printf("%c",c[i]);*/
	}          
	/*printf("%s",c);*/
	printf("\n");
	puts(c);
	printf("\n");
	/*for(i=0;i<n;i++)
	{
	putchar(c[i]);
	}*/
	return 0;
}

