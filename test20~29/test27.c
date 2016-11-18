main(){
	int a;

	printf("数値を入力してください。\n");
	scanf("%d", &a);

	switch(a % 3) {
	case 0:
	printf("その数は3で割り切れます。\n"); 
	break;
	case 1:
	printf("その数を3で割った余りは1です。\n"); 
	break;
	case 2:
	printf("その数を3で割った余りは2です。\n"); 
	break;
}

}