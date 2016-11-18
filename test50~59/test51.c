main(){
	int sum,i,p[4]={4,18,11,6};

	sum = 0;

	for(i=0; i<4; i++){
		sum = p[i]+sum;
	}
	printf("‡Œv%d\n",sum);
	sum = sum/4;
	printf("•½‹Ï‚Í%d",sum);
}