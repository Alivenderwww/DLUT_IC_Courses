#include <stdio.h>
#include <math.h>
int jiecheng(int x)
{
	int i=1,sum=1;
	for(i=1;i<=x;i++)
	{
		sum=sum*i;
	}
	printf("%d\n",sum);
	return sum;
}
int main()
{
	int a;
	scanf("%d",&a);           /*scanf���治Ҫ��һ����б��n*/
	jiecheng(a);
	printf("%d",a);
	/*printf("%d",sum);*/     /*����дsum������ֱ�ӱ�����*/         
	return 0;
}
