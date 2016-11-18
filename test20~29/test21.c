main(){

	//変数宣言
	int a, b, amari;
	//キーボードからの入力
	printf("整数A：");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);

	amari = a % b;

	if(amari==0)
		printf("%dは%dの約数です。\n",a ,b);
	else if(amari!=0)
		printf("%dは%dの約数でない。\n",a ,b);

}