main(){

	int i,j;

	for( j=3; j>=1; j--)
	{
		for(i=1; i<=4-j; i++)
		{
			printf("%d0%d ",j,i);
		}
		printf("\n");
	}
}