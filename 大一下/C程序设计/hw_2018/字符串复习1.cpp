#include <stdio.h>
#include <string.h> 
int main()
{
	char c[10];
	int i;
	printf("������\n");
	scanf("%s",c);            /*scanf�������Ҫ�õ�%s�Ļ������ü�&*/
	printf("%s\n",c);
	for(i=0;i<10;i++)       /*Сдת���ɴ�д,��дת����Сд*/
	{
		if(c[i]>='a'&&c[i]<='z')
		c[i]=c[i]-32;
		else if(c[i]>='A'&&c[i]<='Z')
		c[i]=c[i]+32;
		/*else 
		c[i]=c[i];*/
	}
	for(i=0;i<9;i++)
	{
		printf("%c\n",c[i]);
	}                          /*��βΪʲô�����һ���������أ�*/
	/*printf("%s",c);*/
	return 0;
}
