main(){
	int a, b, c, d;

	printf("1つめの数値を入力してください。\n");
	scanf("%d", &a);
	printf("2つめの数値を入力してください。\n");
	scanf("%d", &b);
	printf("計算式の数値を入力してください。\n");
	scanf("%d", &c);

	switch(c) {
	case 1:
	d = a + b;
	printf("%d+%dの値は%dです。\n",a ,b ,d); 
	break;
	case 2:
	d = a - b;
	printf("%d-%dの値は%dです。\n",a ,b ,d); 
	break;
	case 3:
	d = a * b;
	printf("%d*%dの値は%dです。\n",a ,b ,d);  
	break;
}
}
