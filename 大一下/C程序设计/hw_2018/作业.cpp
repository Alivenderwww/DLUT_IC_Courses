#include <stdio.h>
int main()
{
int a[8],*p=a,i,j=0,k=0;
for(i=0;i<8;i++)
{
printf("�������%d������Ԫ��\n",i+1);
scanf("%d",(p+i));
}
for(i=0;i<8;i++)
{
 if(*(p+i)%2==0)
 {
 j++;
 *(p+i)=*(p+i)-1;
 }
 else
 {
 k++;
 *(p+i)=*(p+i)+1;
 }
}
for(i=0;i<8;i++)
 printf("%d\t",*(p+i));
printf("\n");
printf("�����ĸ�����%d\n",k);
printf("ż���ĸ���Ϊ%d\n",j);
return 0;
}
