main(){
	int n,num=0,count=0;

	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	scanf("%d", &n);

	while(count<100){
		num=num+1;
		printf("%d");

		if(num % n == 0){
			count = count+1;
			printf("%d‚ÅŠ„‚èØ‚ê‚½%d”Õ–Ú‚Ì”\n",n,count);
		}
		else
			printf("\n");
	}
}