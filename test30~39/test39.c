main(){
	int n,num=0,count=0;

	printf("数値を入力してください。\n");
	scanf("%d", &n);

	while(count<100){
		num=num+1;
		printf("%d");

		if(num % n == 0){
			count = count+1;
			printf("%dで割り切れた%d盤目の数\n",n,count);
		}
		else
			printf("\n");
	}
}