main(){
	int a;

	printf("������͂��Ă��������B\n");
	scanf("%d", &a);

	if (3<=a && a<=5)
	{
		printf("�G�߂͏t�ł��B\n");
	}
	else if (6<=a && a<=8)
	{
		printf("�G�߂͉Ăł��B\n");
	}
	else if (9<=a && a<=11)
	{
		printf("�G�߂͏H�ł��B\n");
	}
	else if (a==12 || a==1 || a==2)
	{
		printf("�G�߂͓~�ł��B\n");
	}
	else if (a<=13 || a>=0)
	{
		printf("�l���Ԉ���Ă��܂��B\n");
	}
}