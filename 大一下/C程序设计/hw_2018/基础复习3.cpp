#include <stdio.h>
#include <stdlib.h>

int main()
{
int j=1;
FILE *fp;
printf("����ƽ����80�����ϵ���%d����\n",j);
if ((fp=fopen("homework.txt","w"))==NULL)           /*���һ��ȷ��������ֿ�����*/
{
	printf("file open failed");
	exit(0);
}
fprintf(fp,"ƽ���ֳ���80�ֵ���%d��",j);
fclose(fp);
return 0;
}
