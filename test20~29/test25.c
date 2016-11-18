main(){
	int a, b, c, min;

	printf("1つめの数値を入力してください。\n");
	scanf("%d", &a);
	printf("2つめの数値を入力してください。\n");
	scanf("%d", &b);
	printf("3つめの数値を入力してください。\n");
	scanf("%d", &c);

	min = a;

	if(b<min)
		min = b;
	else if(c<min)
		min = c;

	printf("3つの数値の最小値は%dです。", min);
}