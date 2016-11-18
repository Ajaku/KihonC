main(){
	//4,18,11,6//
	int sum,i,p[4];
	scanf("%d",&p[0]);
	scanf("%d",&p[1]);
	scanf("%d",&p[2]);
	scanf("%d",&p[3]);

	sum = 0;

	for(i=0; i<4; i++){
		sum = p[i]+sum;
	}
	printf("‡Œv%d\n",sum);
	sum = sum/4;
	printf("•½‹Ï‚Í%d",sum);
}