main(){
	int a, b, c, d;

	printf("1�߂̐��l����͂��Ă��������B\n");
	scanf("%d", &a);
	printf("2�߂̐��l����͂��Ă��������B\n");
	scanf("%d", &b);
	printf("�v�Z���̐��l����͂��Ă��������B\n");
	scanf("%d", &c);

	switch(c) {
	case 1:
	d = a + b;
	printf("%d+%d�̒l��%d�ł��B\n",a ,b ,d); 
	break;
	case 2:
	d = a - b;
	printf("%d-%d�̒l��%d�ł��B\n",a ,b ,d); 
	break;
	case 3:
	d = a * b;
	printf("%d*%d�̒l��%d�ł��B\n",a ,b ,d);  
	break;
}
}
