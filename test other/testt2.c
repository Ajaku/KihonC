main(){
	int a, b, c, d;
	float e;

	scanf("%d",&a);
	scanf("%d",&b);

	c = a / b;
	d = a % b;
	e = (float)a / b;

	printf("%d÷%dの答えは%d余り%dです\n",a,b,c,d );
	printf("%dは%dの%f倍です\n",a,b,e );
}