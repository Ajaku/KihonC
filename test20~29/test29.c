main(){
	int a, b, c, d;

	printf("�w�Дԍ�����͂��Ă�������\n");
	scanf("%d" ,&a);
	printf("�e�X�g�̓_������͂��Ă��������B\n");
	scanf("%d" ,&b);

	a = a / 100000;


	if (60<=b && b<=100)
	{
		printf("���i\n");
		c = 2;
	}
	else if (0<=b && b<=59)
	{
		printf("�s���i\n");
		c = 1;
	}
	else if (0>b && b<=101)
	{
		printf("�l����͂��Ȃ����Ă�������\n");
	}
if (a > 10)
{
	if (b>=60 && 69>=b)
	{
		printf("��\n");
	}
	else if (70<=b && b<=79)
	{
		printf("��\n");
	}
	else if (80<=b && b<=89)
	{
		printf("�D\n");
	}
	else if (90<=b && b<=100)
	{
		printf("�G\n");
	}
	else if (59>=b && b>=101)
	{
	}
}
else if (a < 10)
	if (b>=60 && 69>=b)
	{
		printf("��\n");
	}
	else if (70<=b && b<=79)
	{
		printf("��\n");
	}
	else if (80<=b && b<=100)
	{
		printf("�D\n");
	}
	else if (59>=b && b>=101)
	{
}
}