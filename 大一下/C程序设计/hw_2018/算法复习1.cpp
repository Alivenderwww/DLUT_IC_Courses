#include <stdio.h>
int swap1(int *x,int *y)
{
	int t;     /*t������ָ����������t��ָ���������*t����t��ָ��ı���������û�и�ֵ����˿��ܻᵼ��ϵͳ��������*/
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
    int max(int x,int y);      /*������������ȷ��ʽ*/
	int a=1,b=2,c;
	int *m,*n;
	m=&a;
	n=&b;
	swap1(&a,&b);      /*������Ҫ����ע��Ҫ�õ�ַ������ָ����������֮���ᱻ�ı䵫��ָ�����ָ���ֵ�Ѿ����ı���*/
	/*swap1(m,n);*/              /*����Ҳ����*/
	printf("%d\n%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("%d\n%d\n",a,b);
	max(a,b);
	return 0;
}
int max(int x,int y) 
{
	int z;
	z=x>y?x:y;
	printf("max=%d\n",z);              /*������Ӳ��ܳ������������У���Ϊz����max�����ж���ģ��������г��ֻᱨ��*/
	return z;                            /*����������Ҫ�������*/
}
