main(){
	int a, b;
	printf("���l����͂��Ă��������B\n");
	scanf("%d", &a);

	for(b=1; b<=a; b=b+1){
		printf("%d",b);
		if(b%3==0)
			printf("*\n");
		else
			printf("\n");
	}
}