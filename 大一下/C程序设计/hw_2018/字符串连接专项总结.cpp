#include <stdio.h> 
int main() 
{   
    char* stract(char *to,char *from);         /*������������ʽ���ǰѶ���ı�ͷдһ�飬����һ���ֺžͿ�����*/
	printf("���ڸ�ϰ�ַ��������ӵ��㷨\n");
	char str1[20],str2[20];   
	int i=0,j=0;                /*��һ���㷨������������ʵ��*/
	gets(str1);                 /*get�����������������ַ����Կո��־�Ž���*/
	printf("�ٴ�����\n");
	gets(str2);
	while(str1[i]!='\0')       /*������ӵĺ�������ҵ���һ���ַ����Ľ�β*/ 
	i++;
	while((str1[i++]=str2[j++])!='\0'); /*һ��Ҫ��ס�м�Ĳ��ǵ��ںŶ��Ǹ�ֵ���൱����Ϊ�������\0�Ļ����ͼ������½���*/
	str1[i++]='\0';  
	puts(str1);
	
	char str3[20]="china ";
	char *str4="is my motherland";
	printf("%s\n",stract(str3,str4));
	
	char str5[20];
	char str6[20];
	char str7[40];
	printf("please input\n");
	gets(str5);
	printf("please input\n");
	gets(str6);
	for(i=0;str5[i]!='\0';i++)
	{
	str7[i]=str5[i];
	}
	for(j=0;str6[j]!='\0';j++)
	{
	str7[i++]=str6[j];             /*i++��Ҫ���ɱ�ģ���Ϊ����������Ҫ��7������������i��ֵ�Ѿ�+1�Ļ������ڽ�����һ��*/ 
	}                              /*���ȼ�[]���ڵ�Ŀ�������i++�����ú�++i��һ����*/ 
	str7[i]='\0';
	puts(str7);
	return 0;
}
char* stract(char *to,char *from)          /*�����ôд�Ļ�������һ������ָ��ĺ���*/
{
	char *p1=to,*p2=from;                 /*��Ϊ�ַ�����Ĵ��ž����׵�ַ��Ҳ����˵�൱������֮һ*/
	while(*p1!='\0')
	p1++;
	while(*p2!='\0')
	*p1++=*p2++;
	*p1++='\0';
	return to;                         /*����ֵ������ָ�����*/
}

