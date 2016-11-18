main(){
	int a, b, c, d;

	printf("学籍番号を入力してください\n");
	scanf("%d" ,&a);
	printf("テストの点数を入力してください。\n");
	scanf("%d" ,&b);

	a = a / 100000;


	if (60<=b && b<=100)
	{
		printf("合格\n");
		c = 2;
	}
	else if (0<=b && b<=59)
	{
		printf("不合格\n");
		c = 1;
	}
	else if (0>b && b<=101)
	{
		printf("値を入力しなおしてください\n");
	}
if (a > 10)
{
	if (b>=60 && 69>=b)
	{
		printf("可\n");
	}
	else if (70<=b && b<=79)
	{
		printf("良\n");
	}
	else if (80<=b && b<=89)
	{
		printf("優\n");
	}
	else if (90<=b && b<=100)
	{
		printf("秀\n");
	}
	else if (59>=b && b>=101)
	{
	}
}
else if (a < 10)
	if (b>=60 && 69>=b)
	{
		printf("可\n");
	}
	else if (70<=b && b<=79)
	{
		printf("良\n");
	}
	else if (80<=b && b<=100)
	{
		printf("優\n");
	}
	else if (59>=b && b>=101)
	{
}
}