main(){
	int a, b, sum=0;
	printf("���l����͂��Ă��������B\n");
	scanf("%d", &a);

	for(b=0; b<=a; b=b+1){
		sum = sum+b;
	}
	printf("1����%d�܂ł̑��a��%d", a, sum);
}