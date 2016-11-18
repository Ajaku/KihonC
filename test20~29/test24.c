main(){

	int a;

	printf("数値を入力してください。\n");
	scanf("%d", &a);

	if (a==0)
	{
		printf("その数値は0です。");
	}
	else if(a>0)
	{
		printf("その数は正です。");
	}
	else if(a<0)
	{
		printf("その数は負です。");
	}
}