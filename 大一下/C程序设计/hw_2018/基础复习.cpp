#include<stdio.h>
int main()
{ 
float p=9.43;
int j=0;                                      /*float ռ�ĸ��ֽڣ�doubleռ8��*/
printf("%8.2f\n",p);
printf("%-8.2f\n",p);                                   /*ǰ���Ǹ���ν�ķ��Ŵ��������*/
char *a[3]={"ABCD","bcdf","ACDS"};                    /*�ַ�������ֻ����ô������ǺϷ���*/
puts(a[1]);
putchar(*a[1]);
printf("\n");
int i=0;
for(j=0;j<=10;j++)                                     /*��һ��������Ҫ�Ƿ���break��continue������breakֱ��������ǰ����ѭ����һ�㲻���������ѭ��*/
{
	i++;
	break;
}
printf("%d\n",i);
i=0;
for(j=0;j<=10;j++)                                    /*continue��ָ�ص�ѭ���ж�ʱ�������ڱ�����continue�����������ѭ������Ϊj++���Ա�ִ��*/                            
{
continue;
	i++;
}
printf("i=%d\n",i);
printf("j=%d\n",j);
return 0;
}
