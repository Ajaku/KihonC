main(){
	int a, b, c, min;

	printf("1�߂̐��l����͂��Ă��������B\n");
	scanf("%d", &a);
	printf("2�߂̐��l����͂��Ă��������B\n");
	scanf("%d", &b);
	printf("3�߂̐��l����͂��Ă��������B\n");
	scanf("%d", &c);

	min = a;

	if(b<min)
		min = b;
	else if(c<min)
		min = c;

	printf("3�̐��l�̍ŏ��l��%d�ł��B", min);
}