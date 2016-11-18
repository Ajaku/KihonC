main(){
	int a, amari;

	printf("関数を入力してください。\n");
	scanf("%d", &a);

	amari = a % 3;

	if (amari==0) {
		printf("その数は3で割り切れます。");
	}
		else{
			printf("その数の余りは%dです。\n" ,amari);
		}		
}