#include <stdio.h>
void f1(int a[5][5])
{
int i,j;
for(i=0;i<=4;i++)
 for(j=0;j<=4;j++)
 {
  printf("������������Ԫ�ص�ֵ\n");
  scanf("%d",&a[i][j]);
 }
}
void f2(int a[5][5])
{
int i,j;
int b[5][5];
for(i=0;i<=4;i++)
 for(j=0;j<=4;j++)
  b[i][j]=a[j][i];
for(i=0;i<=4;i++)
{
 for(j=0;j<=4;j++)
  printf("%5d",b[i][j]);
printf("\n");
}
}
void f3(int a[5][5])
{
int i,j;
for(i=0;i<=4;i++)
 for(j=1+i;j<=4;j++)
  a[i][j]=0;
for(i=0;i<=4;i++)
{
 for(j=0;j<=4;j++)
  printf("%5d",a[i][j]);
printf("\n");
}
}
int f4(int a[5][5])
{
int i,j=0,k=0;
for(i=0;i<=4;i++)
 j=a[i][i]+j;
k=j/5;
printf("���Խ���ƽ��ֵΪ%d\n",k);
return k;
}
int main()
{
 int c=1,a[5][5];                      /*��c�����ֵ1��ʹ���ܹ����뵽ѭ����֮����ʾ���ܽ���*/ 
 while(c)
 {
 printf("     =====����ѡ��=====\n");
 printf("     1---��5*5�ľ��󸳳�ֵ\n");
 printf("     2---�Ծ������ת��\n");
 printf("     3---�������������Ԫ�ر�Ϊ0\n");
 printf("     4---�����Խ���Ԫ�ص�ƽ��ֵ\n"); 
 printf("     ������1,2,3,4��ѡ��һ������\n");
 scanf("%d",&c);
 switch(c)
 {
 case 1: f1(a);break;
 case 2: f2(a);break;
 case 3: f3(a);break;
 case 4: f4(a);break;
 default:printf("�������������\n");
 }
 }
return 0;
}
