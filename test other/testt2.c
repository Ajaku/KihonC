main(){
	int a, b, c, d;
	float e;

	scanf("%d",&a);
	scanf("%d",&b);

	c = a / b;
	d = a % b;
	e = (float)a / b;

	printf("%d��%d�̓�����%d�]��%d�ł�\n",a,b,c,d );
	printf("%d��%d��%f�{�ł�\n",a,b,e );
}