main(){
	int a;

	printf("月を入力してください。\n");
	scanf("%d", &a);

	if (3<=a && a<=5)
	{
		printf("季節は春です。\n");
	}
	else if (6<=a && a<=8)
	{
		printf("季節は夏です。\n");
	}
	else if (9<=a && a<=11)
	{
		printf("季節は秋です。\n");
	}
	else if (a==12 || a==1 || a==2)
	{
		printf("季節は冬です。\n");
	}
	else if (a<=13 || a>=0)
	{
		printf("値が間違っています。\n");
	}
}