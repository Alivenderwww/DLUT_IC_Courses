#include <stdio.h>
#define x 4
#define y 5
#define p 2
#define q 3
int main()
{
	int a[x][x],i,j,t,sum=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
		printf("�����������Ԫ��\n"); 
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
	sum=sum+a[i][i];
	}
	printf("%d",sum/x);
	printf("���濪ʼ���������\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(j<=i)
			printf(" ");
			else
			printf("%d",a[i][j]);
		}
	printf("\n");
    }
    for(i=0;i<x;i++)              /*�����ξ����ת�ÿ�����ôд�������һ��ľ���ת�þ���Ҫ��2������*/
    {
    	for(j=0;j<x;j++)
    	if(j<i)
    	{
    	t=a[i][j];
    	a[i][j]=a[j][i];
    	a[j][i]=t;
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<x;i++)
	{
		printf("%d\n",a[i][x-1-i]);        /*������еĸ��Խ��ߣ�ע�⼸�ι�ϵ*/
	}
	return 0;
}
