main(){
	int a, b, sum=0;
	printf("数値を入力してください。\n");
	scanf("%d", &a);

	for(b=0; b<=a; b=b+1){
		sum = sum+b;
	}
	printf("1から%dまでの総和は%d", a, sum);
}