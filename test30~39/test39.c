main(){
	int n,num=0,count=0;

	printf("���l����͂��Ă��������B\n");
	scanf("%d", &n);

	while(count<100){
		num=num+1;
		printf("%d");

		if(num % n == 0){
			count = count+1;
			printf("%d�Ŋ���؂ꂽ%d�Ֆڂ̐�\n",n,count);
		}
		else
			printf("\n");
	}
}