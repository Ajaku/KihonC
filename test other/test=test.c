main(){
	int n,a,sum;
	printf("����\n");
	scanf("%d",&n);
	sum=0;
	if(n<=31)
	{
		for(a=0; a<=n; a=a+1)
		{
			sum=sum*2;
		}
	}
	printf("2��%d���%d\n",n,sum );
}