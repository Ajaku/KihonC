main(){
	int sum,i,p[4]={4,18,11,6};

	sum = 0;

	for(i=0; i<4; i++){
		sum = p[i]+sum;
	}
	printf("���v%d\n",sum);
	sum = sum/4;
	printf("���ς�%d",sum);
}