main(){
	int a;
	printf("数字を入力してください：");
	scanf("%d", &a);

	if(a%5!=0)
		printf("その数は5で割り切れません。\n");
	else
		printf("その数は5で割り切れます。\n");
}
