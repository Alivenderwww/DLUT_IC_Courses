#include <stdio.h>
#include <string.h>
int main()
{
	int i,j=0;
	char c[1000]="China";                   
	/*char c[]="china";*/                   /*��ô����Ļ����൱��ϵͳ�Ѿ�Ĭ��c�ĳ���Ϊ5�������ڼ������ˣ�����ͻ����Խ������*/
	char d[]={'m','y'};                    /*���ϵ����ŵĻ��ǺϷ���,����ϵͳ����Ϊd����ĳ���Ϊ2*/
	char e[]=" is my motherland ";            /*char e[4]="chi"; �������ǷǷ��ģ�ϵͳû�а취�ӷ�б��0�����벻��ͨ��*/
	printf("%s\n",c);
	printf("%s\n",d);
	printf("%s\n",e);
	/*for(i=0;c[i]!='0';i++);*/
	char str1[20],str2[20];                   /*�ַ�������������*/ 
	gets(str1);
	printf("�ٴ�����\n");
	gets(str2);
	while(str1[i]!='\0')
	i++;
	while((str1[i++]=str2[j++])!='\0');
	puts(str1);
	i=j=0;
	while(c[i]!='\0')                              /*��һ�����ڸղŵ�������û�и�cԤ���㹻�Ŀռ�*/
	i++;  
	while((c[i++]=e[j++])!='\0');
	c[i++]='\0';
	puts(c);
	printf("%d",strlen(d));           
	return 0;
}
